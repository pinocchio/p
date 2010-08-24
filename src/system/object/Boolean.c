#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

Optr true;
Optr false;
Constant false_Const;
Constant true_Const;

/* ========================================================================= */

Optr get_bool(bool value)
{
    return value ? true : false;
}

/* ========================================================================= */

void post_init_Boolean()
{
    HEADER(true)  = True_Class;
    HEADER(false) = False_Class;

    true_Const      = new_Constant((Optr)true);
    false_Const     = new_Constant((Optr)false);
}

