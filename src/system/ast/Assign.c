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

void post_init_Assign()
{
    SMB_assign_on_ = new_Symbol(L"assign:on:");
}
