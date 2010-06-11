#include <stdlib.h>
#include <stdio.h>
#include <setjmp.h>
#include <wchar.h>
#include <pinocchio.h>
#include <debug.h>
#include <locale.h>

void printf0(const char * string, ...) {
}

/* ========================================================================= */

void init_thread_keys()
{
    tkey(Double_Stack,  NULL);
    tkey(_EXP_,         NULL);
    tkey(_CNT_,         NULL);
    tkey(_ENV_,         NULL);
    tkey(_ISS_,         NULL);
 
    tkey(Eval_Exit,     NULL);
    tkey(Eval_Continue, NULL);
    tkey(Eval_Abort,    NULL);
 
    tkey(Error_Handler, NULL);
}

/* ========================================================================= */

Dictionary _NATIVES_;

/* ========================================================================= */

/* 
 * Avoid longjmps as much as possible since they impose a large
 * performance penalty!
 */
CNT(continue_eval)
    longjmp(tget_buf(Eval_Continue), 1);
}

CNT(abort_eval)
    longjmp(tget_buf(Eval_Abort), 1);
}

CNT(exit_eval)
    #ifndef NOJMP
    longjmp(tget_buf(Eval_Exit), 1);
    #else
    ZAP_CNT();
    #endif
}

CNT(exit_error)
    Optr assertion = pop_EXP();
    BlockContext env =
        (BlockContext)((Object)assertion)->ivals[0];
    
    fwprintf(stderr, L"\033[031mUnrecoverable error occurred:\033[0m\n\n");
    inspect(assertion);
    fwprintf(stderr, L"\n");
    while ((Optr)env != nil) {
        if (env->home_context == (MethodContext)env) {
            fwprintf(stderr, L"\t%ls >> %ls\n",
                (Symbol)HEADER(env->home_context->self)->name->value,
                ((Symbol)env->home_context->closure->selector)->value);
        }
        env = env->parent_frame;
    }
    exit(EXIT_FAILURE);
}

void initialize_Natives()
{
    _NATIVES_ = new_Dictionary();
}

/* ========================================================================= */

bool isInstance(Optr object, Optr class) 
{
    // TODO check for MetaClass stuff
    assert_class(class);
    Class type = HEADER(object);
    while ((Optr)type != nil) {
        if ((Optr)type == class) {
            return 1;
        }
        type = type->super;
    }
    return 0;
}

/* ========================================================================= */

/**
 * setjmp and longjmp have an overhead but they allow us to avoid testing if
 * we are at the end of the stack. It's only expensive for starting new
 * threads, and the boosts performance for longer living threads.
 */
int IN_EVAL = 0;

void start_eval()
{
    if (IN_EVAL) {
        assert(NULL, printf("Re-entering evaluation thread!\n"));
    }
    IN_EVAL = 1;

    PUSH_CNT(exit_error);
    init_Error_Handler();

    PUSH_CNT(exit_eval);
}

Optr finish_eval()
{
    #ifndef NOJMP

    if (!setjmp(tget_buf(Eval_Exit))) {
        setjmp(tget_buf(Eval_Continue));
        for (;;) {
            PEEK_CNT()();
        }
    }

    ZAP_CNT();

    #else // NOJMP

    while (!EMPTY_CNT()) {
        PEEK_CNT()();
    }

    #endif // NOJMP
    
    Optr result = pop_EXP();
    IN_EVAL = 0;
    return result;
}

Optr Eval_Send0(Optr self, Symbol symbol)
{
    start_eval();
    Class_direct_dispatch(self, HEADER(self), (Optr)symbol, 0);
    return finish_eval();
}

Optr Eval_Send1(Optr self, Symbol symbol, Optr arg)
{
    start_eval();
    Class_direct_dispatch(self, HEADER(self), (Optr)symbol, 1, arg);
    return finish_eval();
}

Optr Eval_Send2(Optr self, Symbol symbol, Optr arg1,  Optr arg2)
{
    start_eval();
    Class_direct_dispatch(self, HEADER(self), (Optr)symbol, 2, arg1, arg2);
    return finish_eval();
}

/* ========================================================================= */

jmp_buf Assert_Fail;

void store_method(Class class, Symbol symbol, 
                  MethodClosure method)
{
    method->selector    = (Optr)symbol;
    method->host        = class;
    Dictionary_quick_store(class->methods, (Optr)symbol, 
                                      (Optr)method);
}

/* ========================================================================= */

static void bootstrap()
{
    nil = (Optr) NEW_t(Nil);

    metaclass                   = NEW_t(Class);
    Class Metaclass_mclass = (Class)basic_instantiate_Object(metaclass, METACLASS_SIZE);
    HEADER(metaclass)           = Metaclass_mclass;
    Metaclass_mclass->name      = (String)metaclass;

    behavior                    = new_Bootstrapping_Class();
    class                       = new_Bootstrapping_Class();
    Object_Class           = new_Bootstrapping_Class();
    Array_Class      = new_Bootstrapping_Class();
    DictBucket_Class = new_Bootstrapping_Class();
    Dictionary_Class = new_Bootstrapping_Class();

    DIRECT_INIT_CLASS(metaclass);
    DIRECT_INIT_CLASS(behavior);
    DIRECT_INIT_CLASS(class);
    INIT_CLASS(Object);
    INIT_CLASS(Array);
    INIT_CLASS(DictBucket);
    INIT_CLASS(Dictionary);

    Slot_Class             = new_Bootstrapping_Class();
    SmallInt_Class       = new_Bootstrapping_Class();
    Symbol_Class           = new_Bootstrapping_Class();

    INIT_CLASS(Slot);
    INIT_CLASS(Symbol);
    INIT_CLASS(SmallInt);

    ArrayLayout_Class      = new_Bootstrapping_Class();
    BytesLayout_Class      = new_Bootstrapping_Class();
    CharacterLayout_Class  = new_Bootstrapping_Class();
    FileLayout_Class       = new_Bootstrapping_Class();
    FloatLayout_Class      = new_Bootstrapping_Class();
    IntLayout_Class        = new_Bootstrapping_Class();
    LongLayout_Class       = new_Bootstrapping_Class();
    ObjectLayout_Class     = new_Bootstrapping_Class();
    WordsLayout_Class      = new_Bootstrapping_Class();

    INIT_CLASS(ArrayLayout);
    INIT_CLASS(CharacterLayout);
    INIT_CLASS(FloatLayout);
    INIT_CLASS(IntLayout);
    INIT_CLASS(ObjectLayout);
    INIT_CLASS(WordsLayout);

    empty_Array          = NEW_t(Array);
    empty_Array->size    = 0;
    HEADER(empty_Array)  = Array_Class;

    empty_array_layout  = (Optr)create_layout_with_vars(ArrayLayout_Class, 0);
    empty_object_layout = (Optr)create_layout_with_vars(ObjectLayout_Class, 0);
    words_layout        = basic_instantiate_Object(WordsLayout_Class, 0);
    bytes_layout        = basic_instantiate_Object(BytesLayout_Class, 0);
    int_layout          = basic_instantiate_Object(IntLayout_Class, 0);
    float_layout        = basic_instantiate_Object(FloatLayout_Class, 0);
    long_layout         = basic_instantiate_Object(LongLayout_Class, 0);
    character_layout    = basic_instantiate_Object(CharacterLayout_Class, 0);
    file_layout         = basic_instantiate_Object(FileLayout_Class, 0);

    ObjectLayout_Class->layout    = empty_array_layout;
    ArrayLayout_Class->layout     = empty_array_layout;
    CharacterLayout_Class->layout = empty_object_layout;
    WordsLayout_Class->layout     = empty_object_layout;
    IntLayout_Class->layout       = empty_object_layout;
    FloatLayout_Class->layout     = empty_object_layout;
    LongLayout_Class->layout      = empty_object_layout;
    BytesLayout_Class->layout     = empty_object_layout;
    FileLayout_Class->layout      = empty_object_layout;

    Symbol_Class->layout          = words_layout;

    Symbol_Table = new_Dictionary();
    #include <system/type/SymbolInitialization.ci> 
}

void pinocchio_post_init()
{
    #include <pinocchioPostInit.ci>
}

int main(int argc, const char ** argv)
{
    setlocale(LC_ALL, "");

    bootstrap();
    initialize_Natives();
    init_thread_keys();

    pinocchio_main(argc, argv);
    return EXIT_SUCCESS;
}
