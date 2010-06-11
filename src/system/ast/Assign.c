#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Variable.h>
#include <system/ast/Assign.h>

/* ========================================================================= */

Assign new_Assign(Optr variable, Optr expression)
{
    NEW_OBJECT(Assign);
    result->variable   = variable;
    result->expression = expression;
    result->info       = empty_Info;
    return result;
}

/* ========================================================================= */

#define ASSIGN_IF(name) \
    if (class == name##_Class) {\
        return name##_assign((name)var, value);\
    }

void do_assign()
{
    Optr value  = pop_EXP();
    Assign self = (Assign)peek_EXP(0);
    Optr var    = self->variable;
    /* result of evaluating expression is result of assignment */
    poke_EXP(0, value);

    Class class = HEADER(var);
    
    ASSIGN_IF(Variable)
    ASSIGN_IF(Slot)
    ASSIGN_IF(UIntSlot)
    
    Class_direct_dispatch(var, class, (Optr)SMB_assignFor_to_, 2, nil, value);
}

CNT(Assign_assign)
    do_assign();
}
