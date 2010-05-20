#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Constant.h>

/* ========================================================================= */

AST_Constant new_AST_Constant(Object constant)
{
    NEW_OBJECT(AST_Constant);
    result->constant = constant;
    result->info     = empty_AST_Info;
    return result;
}

/* ========================================================================= */

void AST_Constant_eval(AST_Constant self)
{
    // replace self with the constant
    poke_EXP(0, self->constant);
}
