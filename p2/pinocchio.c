#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <setjmp.h>
#include <wchar.h>
#include <pinocchio.h>
#include <pinocchioHelper.ci>

#ifdef TEST
#include <pinocchioTest.h>
#endif // TEST

/* ======================================================================== */

Object Double_Stack[STACK_SIZE];
Object * _EXP_;
cont   * _CNT_;

jmp_buf Eval_Exit;
jmp_buf Eval_AST_Continue;

/* ======================================================================== */

/* 
 * Avoid longjmps as much as possible since they impose a large
 * performance penalty!
 */
void continue_eval()
{
    longjmp(Eval_AST_Continue, 1);
}

void init_Stack(unsigned int size)
{
    // TODO allocate the stack with the given size
    _EXP_ = (Object *)&Double_Stack[0];
    _CNT_ = (cont *)  &Double_Stack[STACK_SIZE - 1];
}

void initialize_Thread()
{
    init_Stack(STACK_SIZE);
}

/* ========================================================================== */

#define EVAL_IF(name) \
    if (class == name##_Class) { \
        return name##_eval((name)exp); \
    }


void CNT_send_Eval()
{
    zap_CNT();
    Object exp = peek_EXP(1);

    Type_Class class = (Type_Class)HEADER(exp);
    EVAL_IF(AST_Constant)
    EVAL_IF(AST_Variable)
    EVAL_IF(AST_Assign)
    EVAL_IF(AST_Send)
    EVAL_IF(AST_Super)
    EVAL_IF(AST_Self)
    EVAL_IF(AST_Callec)
    
    /* TODO fallback by actually sending the eval message */
    printf("\"%ls\" has no native eval function. Maybe you wanted wrap it in a AST_Constant?\n", 
           ((Type_Class)class)->name->value);
    assert(NULL);
}


void CNT_end_eval()
{
    longjmp(Eval_Exit, 1);
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
        printf("Re-entering evaluation thread!\n");
        assert(NULL);
    }

    push_EXP(code);
    push_CNT(CNT_end_eval);
    push_CNT(CNT_send_Eval);

    if (!setjmp(Eval_Exit)) {
        IN_EVAL = 1;
        setjmp(Eval_AST_Continue);
        for (;;) {
            peek_CNT(1)();
        }
    }

    zap_CNT();
    Object result = pop_EXP();
    IN_EVAL = 0;
    return result;
}

/* ========================================================================== */

int main()
{
	#include <pinocchioPreInit.ci>
	#include <pinocchioPostInit.ci>

    initialize_Thread();
    
	#ifdef TEST
    run_tests();
	#endif
    
    return EXIT_SUCCESS;
}
