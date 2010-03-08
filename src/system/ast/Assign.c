
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Variable.h>
#include <system/ast/Assign.h>

/* ========================================================================= */

Type_Class AST_Assign_Class;

/* ========================================================================= */

AST_Assign new_AST_Assign(Object variable, Object expression)
{
    NEW_OBJECT(AST_Assign);
    result->variable   = variable;
    result->expression = expression;
    result->info       = empty_AST_Info;
    return result;
}

void pre_init_AST_Assign()
{
    AST_Assign_Class = new_Class_named(Type_Object_Class,
                                       L"Assign",
                                       CREATE_OBJECT_TAG(AST_ASSIGN));
}

/* ========================================================================= */

void AST_Assign_eval(AST_Assign self)
{
    // LOGFUN;
    push_CNT(AST_Assign_assign);
    push_CNT(send_Eval);
    push_EXP(self->expression);
}

CNT(AST_Assign_assign)
    Object value    = pop_EXP();
    AST_Assign self = (AST_Assign)peek_EXP(0);
    Object var      = self->variable;
    /* result of evaluating expression is result of assignment */
    poke_EXP(0, value);
    
    if (HEADER(var) == AST_Variable_Class) {
        return AST_Variable_assign((AST_Variable)var, value);
    } else if (HEADER(var) == AST_InstVariable_Class) {
        return AST_InstVariable_assign((AST_InstVariable)var, value);
    }
    
    // TODO send assign: to self->variable.
    assert1(NULL, "TODO send assign: to self->variable");
}

/* ========================================================================= */

void post_init_AST_Assign()
{
}
