
#include <stdio.h>
#include <stdlib.h>
#include <system/type/Nil.h>

/* =========================================================================*/

Type_Class Nil_Class;
Object Nil;

/* =========================================================================*/

void pre_initialize_Nil() 
{
    Nil = (Object) NEW_t(Type_Nil);
}

/* =========================================================================*/