#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Constant.h>

/* ========================================================================= */

Constant new_Constant(Optr constant)
{
    NEW_OBJECT(Constant);
    result->constant = constant;
    result->info     = empty_Info;
    return result;
}

/* ========================================================================= */

void Constant_eval(Constant self)
{
    // replace self with the constant
    poke_EXP(0, self->constant);
}
