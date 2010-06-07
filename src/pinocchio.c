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
    zap_CNT();
    #endif
}

CNT(exit_error)
    Object assertion = pop_EXP();
    Runtime_BlockContext env =
        (Runtime_BlockContext)((Type_Object)assertion)->ivals[0];
    
    fwprintf(stderr, L"\033[031mUnrecoverable error occurred:\033[0m\n\n");
    inspect(assertion);
    fwprintf(stderr, L"\n");
    while ((Object)env != Nil) {
        if (env->home_context == (Runtime_MethodContext)env) {
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

bool isInstance(Object object, Object class) 
{
    // TODO check for MetaClass stuff
    assert_class(class);
    Type_Class type = HEADER(object);
    while ((Object)type != Nil) {
        if ((Object)type == class) {
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

    push_CNT(exit_error);
    init_Error_Handler();

    push_CNT(exit_eval);
}

Object finish_eval()
{
    #ifndef NOJMP

    if (!setjmp(tget_buf(Eval_Exit))) {
        setjmp(tget_buf(Eval_Continue));
        for (;;) {
            peek_CNT()();
        }
    }

    zap_CNT();

    #else // NOJMP

    while (!empty_CNT()) {
        peek_CNT()();
    }

    #endif // NOJMP
    
    Object result = pop_EXP();
    IN_EVAL = 0;
    return result;
}

Object Eval(Object code)
{
    start_eval();
    
    push_EXP(code);
    push_CNT(send_Eval);

    return finish_eval();
}

Object Eval_Send0(Object self, Symbol symbol)
{
    start_eval();
    Type_Class_direct_dispatch(self, HEADER(self), (Object)symbol, 0);
    return finish_eval();
}

Object Eval_Send1(Object self, Symbol symbol, Object arg)
{
    start_eval();
    Type_Class_direct_dispatch(self, HEADER(self), (Object)symbol, 1, arg);
    return finish_eval();
}

Object Eval_Send2(Object self, Symbol symbol, Object arg1,  Object arg2)
{
    start_eval();
    Type_Class_direct_dispatch(self, HEADER(self), (Object)symbol, 2, arg1, arg2);
    return finish_eval();
}

Object EvalThreaded(Array code) 
{
    start_eval();
    push_CNT_raw(code);
    push_CNT_raw(0);
    push_CNT(eval_threaded);
    return finish_eval();
}

/* ========================================================================= */

jmp_buf Assert_Fail;

void store_method(Type_Class class, Symbol symbol, 
                  Runtime_MethodClosure method)
{
    method->selector    = (Object)symbol;
    method->host        = class;
    Dictionary_quick_store(class->methods, (Object)symbol, 
                                      (Object)method);
}

/* ========================================================================= */

static void bootstrap()
{
    Nil = (Object) NEW_t(Type_Nil);

    Metaclass                   = NEW_t(Type_Class);
    Type_Class Metaclass_mclass = (Type_Class)basic_instantiate_Object(Metaclass, METACLASS_SIZE);
    HEADER(Metaclass)           = Metaclass_mclass;
    Metaclass_mclass->name      = (String)Metaclass;

    Behavior                    = new_Bootstrapping_Class();
    Class                       = new_Bootstrapping_Class();
    Type_Object_Class           = new_Bootstrapping_Class();
    Array_Class      = new_Bootstrapping_Class();
    DictBucket_Class = new_Bootstrapping_Class();
    Dictionary_Class = new_Bootstrapping_Class();

    DIRECT_INIT_CLASS(Metaclass);
    DIRECT_INIT_CLASS(Behavior);
    DIRECT_INIT_CLASS(Class);
    INIT_CLASS(Type_Object);
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

    empty_array_layout  = (Object)create_layout_with_vars(ArrayLayout_Class, 0);
    empty_object_layout = (Object)create_layout_with_vars(ObjectLayout_Class, 0);
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
