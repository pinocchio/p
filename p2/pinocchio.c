#include <stdlib.h>
#include <stdio.h>
#include <setjmp.h>
#include <wchar.h>
#include <pinocchio.h>

#ifdef TEST
#include <test/pinocchioTest.h>
#endif // TEST

void printf0(const char * string, ...) {

}

/* ========================================================================= */

Object * Double_Stack;
Object * _EXP_;
cont   * _CNT_;

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

    Type_Class class = (Type_Class)HEADER(exp);
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

/**
 * setjmp and longjmp have an overhead but they allow us to avoid testing if
 * we are at the end of the stack. It's only expensive for starting new
 * threads, and the boosts performance for longer living threads.
 */
int IN_EVAL = 0;

Object Eval(Object code)
{
    if (IN_EVAL) {
        assert(NULL, printf("Re-entering evaluation thread!\n"));
    }
    
    push_EXP(code);

#ifndef NOJMP // ---------------------------------------------------------------

    push_CNT(exit_eval);
    push_CNT(send_Eval);

    if (!setjmp(Eval_Exit)) {
        IN_EVAL = 1;
        setjmp(Eval_Continue);
        for (;;) {
            peek_CNT()();
        }
    }

    zap_CNT();
    
#else // NOJMP

    push_CNT(send_Eval);

    IN_EVAL = 1;
    while (!empty_CNT()) {
        peek_CNT()();
    }

#endif // NOJMP ----------------------------------------------------------------

    Object result = pop_EXP();
    IN_EVAL = 0;
    return result;
}

/* ========================================================================= */

bool isInstance(Object object, Object class) 
{
    // TODO check for MetaClass stuff
    assert_class(class);
    Object type = HEADER(object);
    while (type != Nil) {
        if ((Object)type == class) {
            return 1;
        }
        type = ((Type_Class) type)->super;
    }
    return 0;
}

/* ========================================================================= */

#include <pinocchioHelper.ci>
#include <test/FibTest.ci>

/* ========================================================================= */

void include() {
#include <parser/test.ci>
}

int main()
{
    #include <pinocchioPreInit.ci>
    initialize_Thread();
    #include <pinocchioPostInit.ci>

    #ifdef TEST
    run_tests();
    #else
    run_FibTest();
    #endif
    
    include();
    return EXIT_SUCCESS;
}
