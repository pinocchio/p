
#include <stdio.h>
#include <stdlib.h>
#include <system/type/Nil.h>

/* ========================================================================== */

Object Nil;

extern void pre_initialize_Nil() 
{
    Nil = (Object) NEW_t(Type_Nil);
}

/* ========================================================================== */