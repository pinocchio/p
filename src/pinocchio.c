#include <stdlib.h>
#include <stdio.h>
#include <setjmp.h>
#include <wchar.h>
#include <pinocchio.h>
#include <debug.h>
#include <locale.h>

jmp_buf         Eval_Continue;

void printf0(const char * string, ...) 
{
}

/* ========================================================================= */

void init_thread_keys()
{
    tkey(Double_Stack,  NULL);
    tkey(_EXP_,         NULL);
    tkey(_CNT_,         NULL);
    tkey(_ENV_,         NULL);
 
    tkey(Eval_Exit,     NULL);
    tkey(Eval_Abort,    NULL);
 
    tkey(Error_Handler, NULL);
}

/* ========================================================================= */

IdentityDictionary _NATIVES_;

/* ========================================================================= */

static void cleanup()
{
    cleanup_IO_File();
}

void pinocchio_exit(int status)
{
    cleanup();
    exit(status);
}

/* ========================================================================= */

OPCODE(exit_eval)
    longjmp(tget_buf(Eval_Exit), 1);
}

OPCODE(exit_error)
    Optr assertion = pop_EXP();
    BlockContext env =
        (BlockContext)((Object)assertion)->ivals[0];
    
    fwprintf(stderr, L"\033[031mUnrecoverable error occurred:\033[0m\n\n");
    inspect(stderr, assertion);
    if (HEADER(assertion) == Kernel_Exception_DoesNotUnderstand_Class) {
        inspect_at(assertion, 3);
    }
    fwprintf(stderr, L"\n");
    while ((Optr)env != nil) {
        if (env->home_context == (MethodContext)env) {
            fwprintf(stderr, L"\t%ls >> %ls\n",
                (Symbol)HEADER(env->home_context->self)->name->value,
                ((Symbol)env->home_context->closure->selector)->value);
        }
        env = env->parent_frame;
    }

    pinocchio_exit(EXIT_FAILURE);
}

NNATIVE(exit_eval,  1, t_exit_eval)
NNATIVE(exit_error, 1, t_exit_error)

void initialize_Natives()
{
    _NATIVES_ = new_IdentityDictionary();
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

static int IN_EVAL = 0;

static void start_eval()
{
    #ifdef DEBUG
        fwprintf(stderr, L"\n");
    #endif // DEBUG
    if (IN_EVAL) {
        assert1(NULL, "Re-entering evaluation thread!");
    }
    IN_EVAL = 1;

    push_code(T_exit_error);
    init_Error_Handler();
    push_code(T_exit_eval);
}

static Optr finish_eval()
{
    if (!setjmp(tget_buf(Eval_Exit))) {
        setjmp(Eval_Continue);
        for (;;) {
        #ifdef THREADED
        #else //THREADED
            (*pc)();
        #endif //THREADED
        }
    }
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

void store_method(Class class, Symbol symbol, 
                  MethodClosure method)
{
    method->selector    = (Optr)symbol;
    method->host        = class;
    IdentityDictionary_store(
        class->methods,
        (Optr)symbol, 
        (Optr)method);
}

/* ========================================================================= */

static void bootstrap()
{
    nil                    = (Optr) NEW_t(Nil);

    // placeholder true/false used in the methodDicts
    true =  basic_instantiate_Object(NULL, 0);
    false =  basic_instantiate_Object(NULL, 0);

    metaclass              = NEW_t(Class);
    Class Metaclass_mclass = (Class)basic_instantiate_Object(metaclass, METACLASS_SIZE);
    HEADER(metaclass)      = Metaclass_mclass;
    Metaclass_mclass->name = (String)metaclass;

    behavior                 = new_Bootstrapping_Class();
    class                    = new_Bootstrapping_Class();
    Object_Class             = new_Bootstrapping_Class();
    Array_Class              = new_Bootstrapping_Class();
    DictBucket_Class         = new_Bootstrapping_Class();
    Dictionary_Class         = new_Bootstrapping_Class();
    IdentityDictionary_Class = new_Bootstrapping_Class();
    SmallInt_Class           = new_Bootstrapping_Class();

    init_numbercache();

    DIRECT_INIT_CLASS(metaclass);
    DIRECT_INIT_CLASS(behavior);
    DIRECT_INIT_CLASS(class);
    INIT_CLASS(Object);
    INIT_CLASS(Array);
    INIT_CLASS(DictBucket);
    INIT_CLASS(Dictionary);
    INIT_CLASS(IdentityDictionary);

    Slot_Class            = new_Bootstrapping_Class();
    Symbol_Class          = new_Bootstrapping_Class();

    INIT_CLASS(Slot);
    INIT_CLASS(Symbol);
    INIT_CLASS(SmallInt);

    ArrayLayout_Class     = new_Bootstrapping_Class();
    BytesLayout_Class     = new_Bootstrapping_Class();
    CharacterLayout_Class = new_Bootstrapping_Class();
    FileLayout_Class      = new_Bootstrapping_Class();
    FloatLayout_Class     = new_Bootstrapping_Class();
    IntLayout_Class       = new_Bootstrapping_Class();
    LongLayout_Class      = new_Bootstrapping_Class();
    ObjectLayout_Class    = new_Bootstrapping_Class();
    WordsLayout_Class     = new_Bootstrapping_Class();

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
    LongLayout_Class->layout      = empty_array_layout;
    BytesLayout_Class->layout     = empty_object_layout;
    FileLayout_Class->layout      = empty_object_layout;
    FloatLayout_Class->layout     = empty_object_layout;

    Symbol_Class->layout          = words_layout;
    SmallInt_Class->layout        = int_layout;

    Symbol_Table = new_Dictionary();
}

void pinocchio_post_init()
{
    INIT_NATIVE(exit_eval);
    INIT_NATIVE(exit_error);
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
