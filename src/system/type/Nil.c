
#include <stdio.h>
#include <stdlib.h>
#include <system/type/Nil.h>

/* ========================================================================= */

Optr nil;
Constant nil_Const;

/* ========================================================================= */

void post_init_Nil()
{
    HEADER(nil)        = Nil_Class;
    nil_Const          = new_Constant(nil);
}
