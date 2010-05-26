
#include <stdio.h>
#include <stdlib.h>
#include <system/type/Nil.h>

/* ========================================================================= */

Object Nil;
AST_Constant Nil_Const;

/* ========================================================================= */

void post_init_Type_Nil()
{
    HEADER(Nil)        = Type_Nil_Class;
    Nil_Const          = new_AST_Constant(Nil);
}
