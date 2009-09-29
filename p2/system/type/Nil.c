
#include <stdio.h>
#include <stdlib.h>
#include <system/type/Nil.h>

/* =========================================================================*/

Type_Class Nil_Class;
Object Nil;

/* =========================================================================*/

void pre_init_Type_Nil() 
{
    Nil = (Object) NEW_t(Type_Nil);
}

/* =========================================================================*/

void post_init_Type_Nil()
{
}