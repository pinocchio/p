
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
    Type_Class Object_mclass  = (Type_Class)instantiate(Metaclass);
    Object_mclass->type       = create_type(4, OBJECT);
    Type_Object_Class         = (Type_Class)instantiate(Object_mclass);
    Type_Object_Class->type   = create_type(0, OBJECT);
    Type_Object_Class->super  = Nil;

    /*
    Type_Class_Class          = NEW_t(Type_Class);
    Type_Class_Class->type    = create_type(4, OBJECT);
    
    HEADER(Type_Class_Class)  = (Object)Type_Class_Class;
    Type_Class_Class->super   = (Object)Type_Object_Class;
    Type_Object_Class->type   = create_type(0, OBJECT);
    
    HEADER(Type_Object_Class) = (Object) Type_Class_Class;
    Type_Object_Class->super  = Nil;
    */
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

NATIVE1(Type_Object_at_)
    int index = unwrap_int(args->values[0]);
    Type_Class cls = (Type_Class)HEADER(self);
    assert0(gettag(cls) == OBJECT);
    assert0(getsize(cls) > index);
    assert0(0 <= index);
    poke_EXP(1, ((Type_Object)self)->ivals[index]);
}

NATIVE1(Type_Object_at_put_)
    int index = unwrap_int(args->values[0]);
    Type_Class cls = (Type_Class)HEADER(self);
    assert0(gettag(cls) == OBJECT);
    assert0(getsize(cls) > index);
    assert0(0 <= index);
    ((Type_Object)self)->ivals[index] = args->values[1];
}

/* ========================================================================= */

void post_init_Type_Object()
{
    // put the names here, now after the Symbols_Class is initialized
    /* 
    Type_Class_Class->name   = new_Type_String(L"Type_Class");
    Type_Class_Class->methods = new_Type_Dictionary();
    */
    ((Type_Class)HEADER(Type_Object_Class))->methods = new_Type_Dictionary();
    Type_Object_Class->name = new_Type_String(L"Object");
    Type_Object_Class->methods = new_Type_Dictionary();
    
    store_native_method((Type_Class)Type_Object_Class, SMB_equals_, NM_Type_Object_equals);
    store_native_method((Type_Class)Type_Object_Class, SMB_isNil,   NM_Type_Object_isNil);
}
