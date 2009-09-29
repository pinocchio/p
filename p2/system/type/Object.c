
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Object.h>

/* ======================================================================== */

Type_Class Type_Object_Class;

/* ======================================================================== */

void pre_init_Type_Object() 
{
    // explicitely use new_Class not new_Named_Class! to avoid early use
    // of symbols.
    // do manually instanciate since we canno use dict yet
    Type_Class_Class          = NEW_t(Type_Class);
    HEADER(Type_Class_Class)  = (Object)Type_Class_Class;
    Type_Class_Class->super   = (Object)Type_Object_Class;
    
    Type_Object_Class         = NEW_t(Type_Class);
    HEADER(Type_Object_Class) = (Object) Type_Class_Class;
    Type_Object_Class->super  = Nil;
}

/* ======================================================================== */

NATIVE1(NM_Type_Object_equals)
    push_EXP(get_bool(self == args->values[0]));
}

NATIVE0(NM_Type_Object_asString)
    // TODO
}

/* ======================================================================== */

void post_init_Type_Object()
{
    // put the names here, now after the Symbols_Class is initialized
    Type_Class_Class->name   = new_Type_String(L"Type_Class");
    Type_Class_Class->methods = new_Type_Dictionary();
    Type_Object_Class->name = new_Type_String(L"Type_Object");
    Type_Object_Class->methods = new_Type_Dictionary();
    
    store_native_method((Type_Class)Type_Object_Class, SMB_equals_, NM_Type_Object_equals);
    
}
