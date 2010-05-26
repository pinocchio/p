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

Collection_Dictionary _NATIVES_;

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
            fwprintf(stderr, L"\t%ls\n",
                ((Type_Symbol)env->home_context->closure->selector)->value);
        }
        env = env->parent_frame;
    }
    
    exit(EXIT_FAILURE);
}

void initialize_Natives()
{
    _NATIVES_ = new_Collection_Dictionary();
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

Object Eval_Send0(Object self, Type_Symbol symbol)
{
    start_eval();
    Type_Class_direct_dispatch(self, HEADER(self), (Object)symbol, 0);
    return finish_eval();
}

Object Eval_Send1(Object self, Type_Symbol symbol, Object arg)
{
    start_eval();
    Type_Class_direct_dispatch(self, HEADER(self), (Object)symbol, 1, arg);
    return finish_eval();
}

Object Eval_Send2(Object self, Type_Symbol symbol, Object arg1,  Object arg2)
{
    start_eval();
    Type_Class_direct_dispatch(self, HEADER(self), (Object)symbol, 2, arg1, arg2);
    return finish_eval();
}

/* ========================================================================= */

#include <pinocchioHelper.ci>

static void bootstrap()
{
    Nil = (Object) NEW_t(Type_Nil);

    Metaclass                   = NEW_t(Type_Class);
    Type_Class Metaclass_mclass = (Type_Class)basic_instantiate_Object(Metaclass, METACLASS_SIZE);
    HEADER(Metaclass)           = Metaclass_mclass;
    Metaclass_mclass->name      = (Type_String)Metaclass;

    Behavior                    = new_Bootstrapping_Class();
    Class                       = new_Bootstrapping_Class();
    Type_Object_Class           = new_Bootstrapping_Class();
    Collection_Array_Class      = new_Bootstrapping_Class();
    Collection_DictBucket_Class = new_Bootstrapping_Class();
    Collection_Dictionary_Class = new_Bootstrapping_Class();

    DIRECT_INIT_CLASS(Metaclass);
    DIRECT_INIT_CLASS(Behavior);
    DIRECT_INIT_CLASS(Class);
    INIT_CLASS(Type_Object);
    INIT_CLASS(Collection_Array);
    INIT_CLASS(Collection_DictBucket);
    INIT_CLASS(Collection_Dictionary);

    Slot_Slot_Class             = new_Bootstrapping_Class();
    Number_SmallInt_Class       = new_Bootstrapping_Class();
    Type_Symbol_Class           = new_Bootstrapping_Class();

    INIT_CLASS(Slot_Slot);
    INIT_CLASS(Type_Symbol);
    INIT_CLASS(Number_SmallInt);

    Type_ArrayLayout_Class      = new_Bootstrapping_Class();
    Type_BytesLayout_Class      = new_Bootstrapping_Class();
    Type_CharacterLayout_Class  = new_Bootstrapping_Class();
    Type_FileLayout_Class       = new_Bootstrapping_Class();
    Type_FloatLayout_Class      = new_Bootstrapping_Class();
    Type_IntLayout_Class        = new_Bootstrapping_Class();
    Type_LongLayout_Class       = new_Bootstrapping_Class();
    Type_ObjectLayout_Class     = new_Bootstrapping_Class();
    Type_WordsLayout_Class      = new_Bootstrapping_Class();

    INIT_CLASS(Type_ArrayLayout);
    INIT_CLASS(Type_CharacterLayout);
    INIT_CLASS(Type_FloatLayout);
    INIT_CLASS(Type_IntLayout);
    INIT_CLASS(Type_ObjectLayout);
    INIT_CLASS(Type_WordsLayout);

    empty_Collection_Array          = NEW_t(Collection_Array);
    empty_Collection_Array->size    = 0;
    HEADER(empty_Collection_Array)  = Collection_Array_Class;

    empty_array_layout  = (Object)create_layout_with_vars(Type_ArrayLayout_Class, 0);
    empty_object_layout = (Object)create_layout_with_vars(Type_ObjectLayout_Class, 0);
    words_layout        = basic_instantiate_Object(Type_WordsLayout_Class, 0);
    bytes_layout        = basic_instantiate_Object(Type_BytesLayout_Class, 0);
    int_layout          = basic_instantiate_Object(Type_IntLayout_Class, 0);
    float_layout        = basic_instantiate_Object(Type_FloatLayout_Class, 0);
    long_layout         = basic_instantiate_Object(Type_LongLayout_Class, 0);
    character_layout    = basic_instantiate_Object(Type_CharacterLayout_Class, 0);
    file_layout         = basic_instantiate_Object(Type_FileLayout_Class, 0);

    Type_ObjectLayout_Class->layout     = empty_array_layout;
    Type_ArrayLayout_Class->layout      = empty_array_layout;
    Type_CharacterLayout_Class->layout  = empty_object_layout;
    Type_WordsLayout_Class->layout      = empty_object_layout;
    Type_IntLayout_Class->layout        = empty_object_layout;
    Type_FloatLayout_Class->layout      = empty_object_layout;
    Type_LongLayout_Class->layout       = empty_object_layout;
    Type_BytesLayout_Class->layout      = empty_object_layout;
    Type_FileLayout_Class->layout       = empty_object_layout;

    Type_Symbol_Class->layout           = words_layout;

    Symbol_Table = new_Collection_Dictionary();
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
