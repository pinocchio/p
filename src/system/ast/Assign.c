#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Variable.h>
#include <system/ast/Assign.h>

/* ========================================================================= */
static Symbol SMB_assign_on_;
/* ========================================================================= */

Assign new_Assign(Optr variable, Optr expression)
{
    NEW_OBJECT(Assign);
    result->variable   = variable;
    result->expression = expression;
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
    Assign self = (Assign)PEEK_EXP(0);
    Optr var    = self->variable;
    /* result of evaluating expression is result of assignment */
    POKE_EXP(0, value);

    Class class = HEADER(var);
    
    ASSIGN_IF(Variable)
    ASSIGN_IF(Slot)
    ASSIGN_IF(UintSlot)

    ZAP_EXP();
    
    Class_direct_dispatch(var, class, (Optr)SMB_assign_on_, 2, value, current_env());
}

/* ========================================================================= */

void post_init_Assign()
{
    SMB_assign_on_ = new_Symbol(L"assign:on:");
}
