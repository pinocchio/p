
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Variable.h>
#include <system/ast/Assign.h>

/* ======================================================================== */

Type_Class AST_Assign_Class;

/* ======================================================================== */

AST_Assign new_AST_Assign(Object variable, Object expression)
{
    AST_Assign result  = NEW_t(AST_Assign);
    HEADER(result)     = (Object)AST_Assign_Class;
    result->variable   = variable;
    result->expression = expression;
    return result;
}

void pre_init_AST_Assign()
{
    AST_Assign_Class        = new_Named_Class((Object)Type_Object_Class, L"AST_Assign");
}

/* ======================================================================== */

void AST_Assign_eval(AST_Assign self)
{
    LOGFUN;
    push_CNT(CNT_AST_Assign_assign);
    poke_EXP(1, self->variable);
    push_CNT(CNT_send_Eval);
    push_EXP(self->expression);
}

void CNT_AST_Assign_assign()
{
    LOGFUN;
    zap_CNT();
    Object value = pop_EXP();
    Object var   = peek_EXP(1);
    /* result of evaluating expression is result of assignment */
    poke_EXP(1, value);
    
    if (HEADER(var) == (Object)AST_Variable_Class) {
        return AST_Variable_assign((AST_Variable)var, value);
    }
    
    // TODO send assign: to self->variable.
    assert1(NULL, "TODO send assign: to self->variable");
}

/* ======================================================================== */

void post_init_AST_Assign()
{
}