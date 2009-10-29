#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <math.h>
#include <system/type/SmallInt.h>

/* ========================================================================= */

Type_Class Type_SmallInt_Class;

Type_SmallInt* Type_SmallInt_cache;

/* ========================================================================= */

Type_SmallInt new_raw_Type_SmallInt(int value)
{
    NEW_OBJECT(Type_SmallInt);
    result->value = value;
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
    Type_SmallInt_Class = new_Bootstrapping_Class((Object)Type_Object_Class);
    
    Type_SmallInt_cache  = (Type_SmallInt*)PALLOC(sizeof(Type_SmallInt[INT_CACHE_UPPER-INT_CACHE_LOWER]));
    Type_SmallInt_cache -= INT_CACHE_LOWER;
    
    int i;
    for (i = INT_CACHE_LOWER; i < INT_CACHE_UPPER; i++) {
        Type_SmallInt_cache[i] = new_raw_Type_SmallInt(i);
    }
}

/* ========================================================================= */

#define Type_SmallInt_BINARY_OPERATION(name, op)\
NATIVE1(Type_SmallInt_##name)\
    Object w_arg = NATIVE_ARG(0);\
    ASSERT_INSTANCE_OF(w_arg, Type_SmallInt_Class);\
    Type_SmallInt arg = (Type_SmallInt)w_arg;\
    RETURN_FROM_NATIVE(new_Type_SmallInt(((Type_SmallInt) self)->value op arg->value));\
}

Type_SmallInt_BINARY_OPERATION(plus_,       +);
Type_SmallInt_BINARY_OPERATION(minus_,      -);
Type_SmallInt_BINARY_OPERATION(times_,      *);
Type_SmallInt_BINARY_OPERATION(divide_,     /);
Type_SmallInt_BINARY_OPERATION(shiftRight_, >>);
Type_SmallInt_BINARY_OPERATION(shiftLeft_,  <<);
Type_SmallInt_BINARY_OPERATION(and_,        &);
Type_SmallInt_BINARY_OPERATION(or_,         |);


// TODO fix this damn typecheck!
#define Type_SmallInt_COMPARE_OPERATION(name, op)\
NATIVE1(Type_SmallInt##_##name)\
    Object w_arg = NATIVE_ARG(0);\
    if (HEADER(w_arg) == (Object)Type_SmallInt_Class) {\
        Type_SmallInt number = ((Type_SmallInt) self);\
        Type_SmallInt otherNumber = (Type_SmallInt)w_arg; \
        if (number->value op otherNumber->value) {\
            RETURN_FROM_NATIVE(True);\
        } else {\
            RETURN_FROM_NATIVE(False);\
        }\
    } else {\
        assert1(NULL, "Invalid Type for SmallInt Boolean BinOP "#name"\n"); \
    }\
}

Type_SmallInt_COMPARE_OPERATION(equals_, ==)
Type_SmallInt_COMPARE_OPERATION(lt_, <)
Type_SmallInt_COMPARE_OPERATION(gt_, >)
Type_SmallInt_COMPARE_OPERATION(notEquals_, !=)

NATIVE0(Type_SmallInt_hash)
    RETURN_FROM_NATIVE(self); 
}

Type_String Type_SmallInt_asString(int self, uns_int base)
{
    int size = 1;
    if (self == 0) { 
        size = 1; 
    } else {
        size = 1+(int)floor(log10(abs(self)));
    }
    if (self < 0) { size += 1; };
    size += 1;
    wchar_t wchar_copy[size];
    swprintf(&wchar_copy[0], size, L"%i", self);
    Type_String result   =  new_Type_String(wchar_copy);
    return result;
}

NATIVE0(Type_SmallInt_asString)
    RETURN_FROM_NATIVE(Type_SmallInt_asString(unwrap_int(self), 10));
}

NATIVE0(Type_SmallInt_asCharacter)
    RETURN_FROM_NATIVE(new_Type_Character_WithInt(unwrap_int(self)));
}


/* ========================================================================= */

void post_init_Type_SmallInt()
{
    
    ((Type_Class)HEADER(Type_SmallInt_Class))->methods = new_Type_Dictionary();
    ((Type_Class)HEADER(Type_SmallInt_Class))->type = create_object_tag(CLASS);
    
    Type_SmallInt_Class->type    = create_type(0, INT);
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
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_lt_,         NM_Type_SmallInt_lt_);
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_gt_,         NM_Type_SmallInt_gt_);
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_notEquals_,  NM_Type_SmallInt_notEquals_);
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_hash,        NM_Type_SmallInt_hash);
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_asString,    NM_Type_SmallInt_asString);
    store_native_method((Type_Class)Type_SmallInt_Class, SMB_asCharacter, NM_Type_SmallInt_asCharacter);
    
    assert0(Type_Dictionary_lookup(Type_SmallInt_Class->methods, (Object)SMB_plus_));
    assert0(Type_Dictionary_lookup(Type_SmallInt_Class->methods, (Object)SMB_minus_));
    assert0(Type_Dictionary_lookup(Type_SmallInt_Class->methods, (Object)SMB_equals_));
}

/* ========================================================================= */

int unwrap_int(Object integer)
{
    // TODO do more stuff in case we are not an int.
    assertTagType(gettag(integer), Int);
    //if (gettag(class) == INT) {
        return ((Type_SmallInt)integer)->value;
    //}
    //assert1(NULL, "Only SmallInts supported for now\n");
    //return 0;
}
