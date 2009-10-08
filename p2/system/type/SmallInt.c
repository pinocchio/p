
#include <stdlib.h>
#include <stdio.h>
#include <system/type/SmallInt.h>

/* ======================================================================== */

Type_Class Type_SmallInt_Class;

Type_SmallInt* Type_SmallInt_cache;

/* ======================================================================== */

Type_SmallInt new_raw_Type_SmallInt(int value)
{
    NEW_OBJECT(Type_SmallInt);
    result->value          = value;
    return result;
}

Type_SmallInt new_Type_SmallInt(int value)
{
    if (INT_CACHE_LOWER <= value && value < INT_CACHE_UPPER) {
        return Type_SmallInt_cache[value];
    }
    return new_raw_Type_SmallInt(value);
}

void pre_init_Type_SmallInt() 
{
    Type_SmallInt_Class         = NEW_t(Type_Class);
    HEADER(Type_SmallInt_Class) = (Object)Type_Class_Class;
    Type_SmallInt_Class->super  = (Object)Type_Object_Class;
    
    Type_SmallInt_cache = (Type_SmallInt*)PALLOC(sizeof(Type_SmallInt[INT_CACHE_UPPER-INT_CACHE_LOWER]));
    Type_SmallInt_cache -= INT_CACHE_LOWER;
    
    int i;
    for (i = INT_CACHE_LOWER; i < INT_CACHE_UPPER; i++) {
        Type_SmallInt_cache[i] = new_raw_Type_SmallInt(i);
    }
}

/* ========================================================================= */

#define Type_SmallInt_BINARY_OPERATION(name, op)\
NATIVE1(Type_SmallInt_##name)\
    ASSERT_ARG_TYPE(0, Type_SmallInt_Class);\
    Type_SmallInt arg = (Type_SmallInt)args->values[0];\
    poke_EXP(1, new_Type_SmallInt(((Type_SmallInt) self)->value op arg->value));\
}

Type_SmallInt_BINARY_OPERATION(plus_,       +);
Type_SmallInt_BINARY_OPERATION(minus_,      -);
Type_SmallInt_BINARY_OPERATION(times_,      *);
Type_SmallInt_BINARY_OPERATION(divide_,     /);
Type_SmallInt_BINARY_OPERATION(shiftRight_, >>);
Type_SmallInt_BINARY_OPERATION(shiftLeft_,  <<);
Type_SmallInt_BINARY_OPERATION(and_,        &);
Type_SmallInt_BINARY_OPERATION(or_,         |);


NATIVE1(Type_SmallInt_equals_)
    if (HEADER(args->values[0]) == (Object)Type_SmallInt_Class) {
        Type_SmallInt number = ((Type_SmallInt) self);
        if (number->value == ((Type_SmallInt) args->values[0])->value) {
            push_EXP(True);        
        } else {
            push_EXP(False);
        }
    } else {
        NM_Type_Object_equals(self, class, args);
    }
}

NATIVE0(Type_SmallInt_hash)
    // just return self
}

/* ========================================================================= */

void post_init_Type_SmallInt()
{
    Type_SmallInt_Class->name    = new_Type_String(L"Type_SmallInt");
    Type_SmallInt_Class->methods = new_Type_Dictionary();
    
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_equals_,     NM_Type_SmallInt_equals_);
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_plus_,       NM_Type_SmallInt_plus_);
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_minus_,      NM_Type_SmallInt_minus_);   
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_times_,      NM_Type_SmallInt_times_); 
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_divide_,     NM_Type_SmallInt_divide_);
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_shiftLeft_,  NM_Type_SmallInt_shiftLeft_);
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_shiftRight_, NM_Type_SmallInt_shiftRight_);
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_and_,        NM_Type_SmallInt_and_);
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_or_,         NM_Type_SmallInt_or_);
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_hash, NM_Type_SmallInt_hash);
    
    assert0(Type_Dictionary_lookup(Type_SmallInt_Class->methods, SMB_plus_));
    assert0(Type_Dictionary_lookup(Type_SmallInt_Class->methods, SMB_minus_));
    assert0(Type_Dictionary_lookup(Type_SmallInt_Class->methods, SMB_equals_));
}
