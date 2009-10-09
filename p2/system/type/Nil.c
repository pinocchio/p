
#include <stdio.h>
#include <stdlib.h>
#include <system/type/Nil.h>

/* ========================================================================= */

Type_Class Type_Nil_Class;
Object Nil;

/* ========================================================================= */

void pre_init_Type_Nil() 
{
    Nil = (Object) NEW_t(Type_Nil);
}

/* ========================================================================= */

NATIVE(Type_Nil_asString)
    push_EXP(new_Type_String(L"Nil"));
}

NATIVE(Type_Nil_isNil)
    push_EXP(True);
}

NATIVE(Type_Nil_isNotNil)
    push_EXP(False);
}

/* ========================================================================= */

void post_init_Type_Nil()
{
    Type_Nil_Class = new_Named_Class(NULL, L"Type_Nil");
    HEADER(Nil) = (Object)Type_Nil_Class;
    
    store_native_method(Type_Nil_Class, SMB_asString, NM_Type_Nil_asString);
    store_native_method(Type_Nil_Class, SMB_isNil,    NM_Type_Nil_isNil);
    store_native_method(Type_Nil_Class, SMB_isNotNil, NM_Type_Nil_isNotNil);
}