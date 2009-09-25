
#include <stdlib.h>
#include <stdio.h>
#include <system/type/SmallInt.h>

/* ======================================================================== */

Type_Class SmallInt_Class;

Type_SmallInt* SmallInt_cache;

/* ======================================================================== */

Type_SmallInt new_raw_SmallInt(int value)
{
    Type_SmallInt result = NEW_t(Type_SmallInt);
    HEADER(result)         = (Object) SmallInt_Class;
    result->value          = value;
    return result;
}

Type_SmallInt new_SmallInt(int value)
{
    if (INT_CACHE_LOWER <= value && value < INT_CACHE_UPPER) {
        return SmallInt_cache[value];
    }
    return new_raw_SmallInt(value);
}

void pre_initialize_Type_SmallInt() 
{
    SmallInt_Class         = NEW_t(Type_Class);
    HEADER(SmallInt_Class) = (Object)Class_Class;
    SmallInt_Class->super  = (Object)Object_Class;
    
    SmallInt_cache = (Type_SmallInt*)PALLOC(sizeof(Type_SmallInt[INT_CACHE_UPPER-INT_CACHE_LOWER]));
    SmallInt_cache -= INT_CACHE_LOWER;
    
    int i;
    for (i = INT_CACHE_LOWER; i < INT_CACHE_UPPER; i++) {
        SmallInt_cache[i] = new_raw_SmallInt(i);
    }
}

/* =========================================================================*/

#define SMALLINT_BINARY_OPERATION(Name, op)\
NATIVE1(Name)\
    ASSERT_ARG_TYPE(0, SmallInt_Class);\
    Type_SmallInt arg = (Type_SmallInt)args->values[0];\
    poke_EXP(1, new_SmallInt(((Type_SmallInt) self)->value op arg->value));\
}

SMALLINT_BINARY_OPERATION(NM_SmallInt_plus_,       +);
SMALLINT_BINARY_OPERATION(NM_SmallInt_minus_,      -);
SMALLINT_BINARY_OPERATION(NM_SmallInt_times_,      *);
SMALLINT_BINARY_OPERATION(NM_SmallInt_divide_,     /);
SMALLINT_BINARY_OPERATION(NM_SmallInt_shiftRight_, >>);
SMALLINT_BINARY_OPERATION(NM_SmallInt_shiftLeft_,  <<);


NATIVE1(NM_SmallInt_equals_)
    ASSERT_ARG_TYPE(0, SmallInt_Class);
    
    Type_SmallInt number = ((Type_SmallInt) self);
    if (number->value == ((Type_SmallInt) args->values[0])->value) {
        push_EXP(True);        
    } else {
        push_EXP(False);
    }
}

/* =========================================================================*/

void post_initialize_Type_SmallInt()
{
    SmallInt_Class->name    = new_String(L"SmallInt");
    SmallInt_Class->methods = new_Dictionary();
    
    store_native_method((Type_Class)SmallInt_Class, SMB_equals_,     NM_SmallInt_equals_);
    store_native_method((Type_Class)SmallInt_Class, SMB_plus_,       NM_SmallInt_plus_);
    store_native_method((Type_Class)SmallInt_Class, SMB_minus_,      NM_SmallInt_minus_);   
    store_native_method((Type_Class)SmallInt_Class, SMB_times_,      NM_SmallInt_times_); 
    store_native_method((Type_Class)SmallInt_Class, SMB_divide_,     NM_SmallInt_divide_);
    store_native_method((Type_Class)SmallInt_Class, SMB_shiftLeft_,  NM_SmallInt_shiftLeft_);
    store_native_method((Type_Class)SmallInt_Class, SMB_shiftRight_, NM_SmallInt_shiftRight_);
    
    assert(Dictionary_lookup(SmallInt_Class->methods, SMB_plus_));
    assert(Dictionary_lookup(SmallInt_Class->methods, SMB_minus_));
    assert(Dictionary_lookup(SmallInt_Class->methods, SMB_equals_));
}
