
#include <stdio.h>
#include <stdlib.h>
#include <system/type/Nil.h>

/* ========================================================================= */

DECLARE_CLASS(Type_Nil);
Type_Class Type_Nil_Class;
Object Nil;
AST_Constant Nil_Const;

/* ========================================================================= */

void pre_init_Type_Nil() 
{
    Nil = (Object) NEW_t(Type_Nil);
    REFER_TO(Type_Nil);
}

/* ========================================================================= */

NATIVE(Type_Nil_asString)
    RETURN_FROM_NATIVE(new_Type_String(L"Nil"));
}

NATIVE(Type_Nil_isNil)
    RETURN_FROM_NATIVE(True);
}

NATIVE(Type_Nil_isNotNil)
    RETURN_FROM_NATIVE(False);
}

/* ========================================================================= */

void post_init_Type_Nil()
{
    Type_Nil_Class = new_Class_named((Object)Type_Object_Class,
                                     L"Type_Nil",
                                     create_layout(0, OBJECT));
    HEADER(Nil) = (Object)Type_Nil_Class;
    Nil_Const = new_AST_Constant(Nil);
    
    store_native_method(Type_Nil_Class, SMB_asString, NM_Type_Nil_asString);
    store_native_method(Type_Nil_Class, SMB_isNil,    NM_Type_Nil_isNil);
    store_native_method(Type_Nil_Class, SMB_isNotNil, NM_Type_Nil_isNotNil);
}
