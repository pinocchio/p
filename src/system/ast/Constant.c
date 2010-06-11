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
