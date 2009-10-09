
#include <stdio.h>
#include <stdlib.h>
#include <system/type/Nil.h>

/* ========================================================================= */

Type_Class Nil_Class;
Object Nil;

/* ========================================================================= */

void pre_init_Type_Nil() 
{
    Nil = (Object) NEW_t(Type_Nil);
}

/* ========================================================================= */

NATIVE(Type_Nil_asString)
    push_EXP(new_Type_String(L"NIL"));
}

NATIVE(Type_Nil_isNil)
    push_EXP(True);
}

/* ========================================================================= */

void post_init_Type_Nil()
{
    store_native_method(Nil_Class, SMB_asString, NM_Type_Nil_asString);
    store_native_method(Nil_Class, SMB_isNil,    NM_Type_Nil_isNil);
}