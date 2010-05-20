#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Variable.h>
#include <system/ast/Assign.h>

/* ========================================================================= */

AST_Assign new_AST_Assign(Object variable, Object expression)
{
    NEW_OBJECT(AST_Assign);
    result->variable   = variable;
    result->expression = expression;
    result->info       = empty_AST_Info;
    return result;
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
    } else if (HEADER(var) == Slot_Slot_Class) {
        return Slot_Slot_assign((Slot_Slot)var, value);
    } else if (HEADER(var) == Slot_UIntSlot_Class) {
        return Slot_UIntSlot_assign((Slot_UIntSlot)var,
                                             value);
    }
    
    // TODO send assign: to self->variable.
    assert1(NULL, "TODO send assign: to self->variable");
}
