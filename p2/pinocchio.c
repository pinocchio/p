#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <setjmp.h>
#include <wchar.h>
#include <pinocchio.h>
#include <pinocchioTest.h>

/* ======================================================================== */

Object Double_Stack[STACK_SIZE];
Object * _EXP_;
cont   * _CNT_;

jmp_buf Eval_Exit;
jmp_buf Eval_Continue;

/* ======================================================================== */

/* 
 * Avoid longjmps as much as possible since they impose a large
 * performance penalty!
 */
void continue_eval()
{
    longjmp(Eval_Continue, 1);
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

#include <pinocchioHelper.ci>

/* ========================================================================== */

#define EVAL_IF(name) \
    if (class == name##_Class) { \
        return AST_##name##_eval((AST_##name)exp); \
    }


void CNT_send_Eval()
{
    zap_CNT();
    Object exp = peek_EXP(1);

    Type_Class class = (Type_Class)HEADER(exp);
    EVAL_IF(Constant)
    EVAL_IF(Variable)
    EVAL_IF(Assign)
    EVAL_IF(Send)
    EVAL_IF(Super)
    EVAL_IF(Self)
    EVAL_IF(Callec)
    
    /* TODO fallback by actually sending the eval message */
    printf("\"%ls\" has no native eval function. Maybe you wanted wrap it in a Constant?\n", 
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
        setjmp(Eval_Continue);
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

#ifdef TEST
#include <pinocchioTest.h>
#endif // TEST

/* ========================================================================== */

void pre_initialize_Type_SmallInt();
void pre_initialize_Type_Boolean();
void post_initialize_Type_Boolean();
void post_initialize_Type_SmallInt();

int main()
{
    pre_initialize_Nil();
    
    pre_initialize_Object();
    pre_initialize_Type_SmallInt();
    pre_initialize_Symbol();
    
    pre_initialize_Array();
    pre_initialize_Assign();
    pre_initialize_Callec();
    pre_initialize_Character();
    pre_initialize_Constant();
    pre_initialize_Continue();
    pre_initialize_Dictionary();
    pre_initialize_File();
    pre_initialize_Method();
    pre_initialize_Native_Method();
    pre_initialize_Self();
    pre_initialize_Send();
    pre_initialize_String();
    pre_initialize_Super();
    pre_initialize_Type_Boolean();
    pre_initialize_Variable();

    initialize_Symbol();
    initialize_Thread();
    
    post_initialize_Object();
    
    post_initialize_Array();
    post_initialize_Assign();
    post_initialize_Callec();
    post_initialize_Character();
    post_initialize_Constant();
    post_initialize_Continue();
    post_initialize_Dictionary();
    post_initialize_Env();
    post_initialize_File();
    post_initialize_Method();
    post_initialize_Native_Method();
    post_initialize_Self();
    post_initialize_Send();
    post_initialize_String();
    post_initialize_Super();
    post_initialize_Symbol();
    post_initialize_Type_Boolean();
    post_initialize_Type_SmallInt();
    post_initialize_Variable();
    
#ifdef TEST
    run_tests();
#endif
    
    return EXIT_SUCCESS;
}
