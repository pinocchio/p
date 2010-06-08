#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Variable.h>
#include <system/ast/Assign.h>

/* ========================================================================= */

Assign new_Assign(Object variable, Object expression)
{
    NEW_OBJECT(Assign);
    result->variable   = variable;
    result->expression = expression;
    result->info       = empty_AST_Info;
    return result;
}

/* ========================================================================= */

void Assign_eval(Assign self)
{
    // LOGFUN;
    push_CNT(Assign_assign);
    push_CNT(send_Eval);
    push_EXP(self->expression);
}

#define ASSIGN_IF(name) \
    if (class == name##_Class) {\
        return name##_assign((name)var, value);\
    }

CNT(Assign_assign)
    Object value    = pop_EXP();
    Assign self = (Assign)peek_EXP(0);
    Object var      = self->variable;
    /* result of evaluating expression is result of assignment */
    poke_EXP(0, value);

    Class class = HEADER(var);
    
    ASSIGN_IF(Variable)
    ASSIGN_IF(Slot)
    ASSIGN_IF(UIntSlot)
    
    Class_direct_dispatch(var, class, (Object)SMB_assignFor_to_, 2, nil, value);
}
