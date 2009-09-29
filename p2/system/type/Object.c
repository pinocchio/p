
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
    Class_Class          = NEW_t(Type_Class);
    HEADER(Class_Class)  = (Object)Class_Class;
    Class_Class->super   = (Object)Class_Class;
    
    Type_Object_Class         = NEW_t(Type_Class);
    HEADER(Type_Object_Class) = (Object) Class_Class;
    Type_Object_Class->super  = (Object)Class_Class;;
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
    Class_Class->name   = new_Type_String(L"Class");
    Class_Class->methods = new_Type_Dictionary();
    Type_Object_Class->name = new_Type_String(L"Type_Object");
    Type_Object_Class->methods = new_Type_Dictionary();
    
    store_native_method((Type_Class)Type_Object_Class,SMB_equals_, NM_Type_Object_equals);
    
    assert(Type_Dictionary_lookup(Type_Object_Class->methods,SMB_equals_));
    assert(HEADER((AST_Native_Method)Type_Dictionary_lookup(Type_Object_Class->methods,SMB_equals_)) == (Object)Native_Method_Class);
}