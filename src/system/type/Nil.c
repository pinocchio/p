
#include <stdio.h>
#include <stdlib.h>
#include <system/type/Nil.h>

/* ========================================================================= */

Type_Class Type_Nil_Class;
Object Nil;
<<<<<<< HEAD
AST_Constant Nil_Const;
=======
Object Nil_Const;
>>>>>>> fixing nil stuff

/* ========================================================================= */

void pre_init_Type_Nil() 
{
    Nil = (Object) NEW_t(Type_Nil);
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
                                     create_type(0, OBJECT));
    HEADER(Nil) = (Object)Type_Nil_Class;
<<<<<<< HEAD

    Nil_Const = new_AST_Constant(Nil);
=======
    Nil_Const   = (Object)new_AST_Constant(Nil);
>>>>>>> fixing nil stuff
    
    store_native_method(Type_Nil_Class, SMB_asString, NM_Type_Nil_asString);
    store_native_method(Type_Nil_Class, SMB_isNil,    NM_Type_Nil_isNil);
    store_native_method(Type_Nil_Class, SMB_isNotNil, NM_Type_Nil_isNotNil);
}
