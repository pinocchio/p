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

void init_pthread_keys()
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
    
    fwprintf(stderr, L"\n\033[031mUnrecoverable error occurred:\033[0m\n\n");
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

#define EVAL_IF(name) \
    if (class == name##_Class) { \
        return name##_eval((name)exp); \
    }


CNT(send_Eval)
    Object exp = peek_EXP(0);

    Type_Class class = HEADER(exp);
    EVAL_IF(AST_Constant)
    EVAL_IF(AST_Variable)
    EVAL_IF(AST_Assign)
    EVAL_IF(AST_Send)
    EVAL_IF(AST_Super)
    EVAL_IF(AST_Self)
    EVAL_IF(AST_Block)
    EVAL_IF(AST_Slot)
    EVAL_IF(AST_UIntSlot)
    EVAL_IF(Organization_ClassReference)
    
    /* TODO fallback by actually sending the eval message */
    print_Class(exp);
    assert(NULL,
		   wprintf(L"\"%ls\" has no native eval function. Maybe you wanted wrap it in a AST_Constant?\n", 
				  ((Type_Class)class)->name->value));
}

extern Object Exception_AssertionFailure_Class;

#include <stdarg.h>
void fail(const Object class, uns_int argc, ...)
{
    Type_Object error = (Type_Object)instantiate((Type_Class)class);
    error->ivals[0] = (Object)current_env();

    va_list args;
    va_start(args, argc);
    int idx;
    for (idx = 1; idx <= argc; idx++) {
        error->ivals[idx] = va_arg(args, Object);
    }
    va_end(args);

    if (HEADER(tget(Error_Handler)) == Runtime_Continue_Class) {
        Runtime_Continue_escape((Runtime_Continue)tget(Error_Handler),
                                (Object)error);
    } else {
        fwprintf(stderr, L"Unsupported type of error-handler installed.\n");
        exit(EXIT_FAILURE); 
    }
    longjmp(tget_buf(Eval_Continue), 1);
}

void handle_assert(const char * message)
{
    fail(Exception_AssertionFailure_Class, 1,
         new_Type_String_from_charp(message));
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

int main(int argc, const char ** argv)
{
    setlocale(LC_ALL, "");

    #include <pinocchioPreInit.ci>
    initialize_Natives();
    #include <pinocchioPostInit.ci>

    init_pthread_keys();

    pinocchio_main(argc, argv);
    return EXIT_SUCCESS;
}
