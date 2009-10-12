
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Object.h>

/* ========================================================================= */

Type_Class Type_Object_Class;

/* ========================================================================= */

void pre_init_Type_Object() 
{
    // explicitely use new_Class not new_Named_Class! to avoid early use
    // of symbols.
    // do manually instanciate since we cannot use dict yet
    Type_Class_Class          = NEW_t(Type_Class);
    Type_Object_Class         = NEW_t(Type_Class);
    
    HEADER(Type_Class_Class)  = (Object)Type_Class_Class;
    Type_Class_Class->super   = (Object)Type_Object_Class;
    
    HEADER(Type_Object_Class) = (Object) Type_Class_Class;
    Type_Object_Class->super  = Nil;
}

/* ========================================================================= */

NATIVE1(Type_Object_equals)
    poke_EXP(1, get_bool(self == args->values[0]));
}

NATIVE0(Type_Object_asString)
    // TODO
}

NATIVE(Type_Object_isNil)
    poke_EXP(1, False);
}

/* ========================================================================= */

void post_init_Type_Object()
{
    // put the names here, now after the Symbols_Class is initialized
    Type_Class_Class->name   = new_Type_String(L"Type_Class");
    Type_Class_Class->methods = new_Type_Dictionary();
    Type_Object_Class->name = new_Type_String(L"Type_Object");
    Type_Object_Class->methods = new_Type_Dictionary();
    
    store_native_method((Type_Class)Type_Object_Class, SMB_equals_, NM_Type_Object_equals);
    store_native_method((Type_Class)Type_Object_Class, SMB_isNil,   NM_Type_Object_isNil);
    
}
