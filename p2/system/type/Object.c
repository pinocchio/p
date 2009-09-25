
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Object.h>

/* ======================================================================== */

extern void pre_initialize_Object() 
{
    // explicitely use new_Class not new_Named_Class! to avoid early use
    // of symbols.
    // do manually instanciate since we canno use dict yet
    Class_Class          = NEW_t(Type_Class);
    HEADER(Class_Class)  = (Object)Class_Class;
    Class_Class->super   = (Object)Class_Class;
    
    Object_Class         = NEW_t(Type_Class);
    HEADER(Object_Class) = (Object) Class_Class;
    Object_Class->super  = (Object)Class_Class;;
}

/* ======================================================================== */

NATIVE1(NM_Object_equals)
    push_EXP(get_bool(self == args->values[0]));
}

NATIVE0(NM_Object_asString)
    // TODO
}

/* ======================================================================== */

extern void post_initialize_Object()
{
    // put the names here, now after the Symbols_Class is initialized
    Class_Class->name   = new_String(L"Class");
    Class_Class->methods = new_Dictionary();
    Object_Class->name = new_String(L"Object");
    Object_Class->methods = new_Dictionary();
    
    store_native_method((Type_Class)Object_Class,SMB_equals_, NM_Object_equals);
    
    assert(Dictionary_lookup(Object_Class->methods,SMB_equals_));
    assert(HEADER((AST_Native_Method)Dictionary_lookup(Object_Class->methods,SMB_equals_)) == (Object)Native_Method_Class);
}