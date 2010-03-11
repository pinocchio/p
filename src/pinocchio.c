#include <stdlib.h>
#include <stdio.h>
#include <setjmp.h>
#include <wchar.h>
#include <string.h>
#include <pinocchio.h>
#include <debug.h>
#include <locale.h>
#include <lib/lib.h>

#ifdef TEST
#include <test/pinocchioTest.h>
#endif // TEST

void printf0(const char * string, ...) {
}

/* ========================================================================= */

__thread Object * Double_Stack;
__thread Object * _EXP_;
__thread cont   * _CNT_;

/* ========================================================================= */

jmp_buf Eval_Exit;
jmp_buf Eval_Continue;
jmp_buf Eval_Abort;

/* 
 * Avoid longjmps as much as possible since they impose a large
 * performance penalty!
 */
void CNT_continue_eval()
{
    longjmp(Eval_Continue, 1);
}

void CNT_abort_eval()
{
    longjmp(Eval_Abort, 1);
}

void CNT_exit_eval()
{
    longjmp(Eval_Exit, 1);
}

/* ========================================================================= */

void init_Stack(uns_int size)
{
    // TODO allocate the stack with the given size
    Double_Stack = (Object *)PALLOC(sizeof(Object[size]));
    _EXP_ = (Object *)&Double_Stack[-1];
    _CNT_ = (cont *)  &Double_Stack[size];
}

void initialize_Thread()
{
    init_Stack(STACK_SIZE);
}

/* ========================================================================= */

#define EVAL_IF(name) \
    if (class == name##_Class) { \
        return name##_eval((name)exp); \
    }


void CNT_send_Eval()
{
    zap_CNT();
    Object exp = peek_EXP(0);

    Type_Class class = HEADER(exp);
    EVAL_IF(AST_Constant)
    EVAL_IF(AST_Variable)
    EVAL_IF(AST_Assign)
    EVAL_IF(AST_Send)
    EVAL_IF(AST_Super)
    EVAL_IF(AST_Self)
    EVAL_IF(AST_Block)
    EVAL_IF(AST_InstVariable)
    EVAL_IF(Organization_ClassReference)
    
    /* TODO fallback by actually sending the eval message */
    print_Class(exp);
    assert(NULL,
		   printf("\"%ls\" has no native eval function. Maybe you wanted wrap it in a AST_Constant?\n", 
				  ((Type_Class)class)->name->value));
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

    #ifndef NOJMP
    push_CNT(exit_eval);
    #endif
}

Object finish_eval()
{
    #ifndef NOJMP

    if (!setjmp(Eval_Exit)) {
        setjmp(Eval_Continue);
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
#include <test/FibTest.ci>

/* ========================================================================= */
Type_Array get_args(int argc, const char ** argv)
{
    Type_Array args = new_Type_Array_raw(argc - 1);
    int i;
    argv++;
    for (i = 1; i < argc; i++) {
        const char * arg = *argv++;
        int length = strlen(arg);
        wchar_t warg[length + 1];
        assert1(mbstowcs(warg, arg, length + 1) != -1, "failed to parse arguments");
        Type_Symbol sarg = new_Type_Symbol_cached(warg);
        args->values[i-1] = (Object)sarg;
    }
    return args;
}
 
int main(int argc, const char ** argv)
{
    setlocale(LC_ALL, "");
    #include <pinocchioPreInit.ci>
    initialize_Thread();
    #include <pinocchioPostInit.ci>
    init_lib();

    #ifdef TEST
    run_tests();
    run_FibTest();
    #else // TEST
    Eval_Send1(Interpretation_Interpreter_Class, SMB_main_, (Object)get_args(argc, argv));
    #endif // TEST
    
    return EXIT_SUCCESS;
}
