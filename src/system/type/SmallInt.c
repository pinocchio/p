#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <math.h>
#include <system/type/SmallInt.h>

/* ========================================================================= */

DECLARE_CLASS(Type_SmallInt);

Type_SmallInt* Type_SmallInt_cache;

/* ========================================================================= */

Type_SmallInt new_Type_SmallInt_raw(int value)
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
    return new_Type_SmallInt_raw(value);
}

void pre_init_Type_SmallInt() 
{
    Type_SmallInt_Class = new_Bootstrapping_Class();
    REFER_TO(Type_SmallInt);    
    
    Type_SmallInt_cache  = (Type_SmallInt*)PALLOC(sizeof(Type_SmallInt[INT_CACHE_UPPER-INT_CACHE_LOWER]));
    Type_SmallInt_cache -= INT_CACHE_LOWER;
    
    int i;
    for (i = INT_CACHE_LOWER; i < INT_CACHE_UPPER; i++) {
        Type_SmallInt_cache[i] = new_Type_SmallInt_raw(i);
    }
}

/* ========================================================================= */

#define Type_SmallInt_BINARY_OPERATION(name, op)\
NATIVE1(Type_SmallInt_##name)\
    int value = unwrap_int(NATIVE_ARG(0)); \
    RETURN_FROM_NATIVE(new_Type_SmallInt(((Type_SmallInt) self)->value op value));\
}

Type_SmallInt_BINARY_OPERATION(plus_,       +);
Type_SmallInt_BINARY_OPERATION(minus_,      -);
Type_SmallInt_BINARY_OPERATION(times_,      *);
Type_SmallInt_BINARY_OPERATION(divide_,     /);
Type_SmallInt_BINARY_OPERATION(modulo_,     %);
Type_SmallInt_BINARY_OPERATION(shiftRight_, >>);
Type_SmallInt_BINARY_OPERATION(shiftLeft_,  <<);
Type_SmallInt_BINARY_OPERATION(and_,        &);
Type_SmallInt_BINARY_OPERATION(or_,         |);


// TODO fix this damn typecheck!
// printf("%i "#op" %i\n", number->value, otherNumber->value);
#define Type_SmallInt_COMPARE_OPERATION(name, op)\
NATIVE1(Type_SmallInt##_##name)\
    Object w_arg = NATIVE_ARG(0);\
    if (HEADER(w_arg) == Type_SmallInt_Class) {\
        Type_SmallInt number      = ((Type_SmallInt) self);\
        Type_SmallInt otherNumber = (Type_SmallInt)w_arg; \
        if (number->value op otherNumber->value) {\
            RETURN_FROM_NATIVE(True);\
        } else {\
            RETURN_FROM_NATIVE(False);\
        }\
    } else {\
        /* TODO return false here? */ \
        print_Class(w_arg);\
        assert1(NULL, "Invalid Type for SmallInt Boolean BinOP "#name"\n"); \
    }\
}
//TODO return false on == and != if wrong type given
Type_SmallInt_COMPARE_OPERATION(equals_, ==)
Type_SmallInt_COMPARE_OPERATION(lt_, <)
Type_SmallInt_COMPARE_OPERATION(gt_, >)
Type_SmallInt_COMPARE_OPERATION(notEqual_, !=)

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
    RETURN_FROM_NATIVE(new_Type_Character_fromInt(unwrap_int(self)));
}


/* ========================================================================= */

void post_init_Type_SmallInt()
{
    
    HEADER(Type_SmallInt_Class)->methods = new_Collection_Dictionary();
    HEADER(Type_SmallInt_Class)->layout  = CREATE_OBJECT_TAG(CLASS);
    
    Type_SmallInt_Class->name            = new_Type_String(L"SmallInt");
    Type_SmallInt_Class->methods         = new_Collection_Dictionary();

    Collection_Dictionary natives = add_plugin(L"Type.SmallInt");
    
    store_native(natives, SMB__equal,      NM_Type_SmallInt_equals_);
    store_native(natives, SMB__plus,       NM_Type_SmallInt_plus_);
    store_native(natives, SMB__minus,      NM_Type_SmallInt_minus_);   
    store_native(natives, SMB__times,      NM_Type_SmallInt_times_); 
    store_native(natives, SMB__divide,     NM_Type_SmallInt_divide_);
    store_native(natives, SMB__modulo,     NM_Type_SmallInt_modulo_);
    store_native(natives, SMB__shiftLeft,  NM_Type_SmallInt_shiftLeft_);
    store_native(natives, SMB__shiftRight, NM_Type_SmallInt_shiftRight_);
    store_native(natives, SMB__and,        NM_Type_SmallInt_and_);
    store_native(natives, SMB__or,         NM_Type_SmallInt_or_);
    store_native(natives, SMB__lt,         NM_Type_SmallInt_lt_);
    store_native(natives, SMB__gt,         NM_Type_SmallInt_gt_);
    store_native(natives, SMB__notEqual,   NM_Type_SmallInt_notEqual_);
    store_native(natives, SMB_asString,    NM_Type_SmallInt_asString);
    store_native(natives, SMB_asCharacter, NM_Type_SmallInt_asCharacter);
    
    //assert0(Collection_Dictionary_lookup(Type_SmallInt_Class->methods, (Object)SMB__plus));
    //assert0(Collection_Dictionary_lookup(Type_SmallInt_Class->methods, (Object)SMB__minus));
    //assert0(Collection_Dictionary_lookup(Type_SmallInt_Class->methods, (Object)SMB__equal));
}

/* ========================================================================= */

Object wrap_int(int value)
{
    return (Object)new_Type_SmallInt(value);
}

int unwrap_int(Object integer)
{
    // TODO do more stuff in case we are not an int.
    ASSERT_TAG_LAYOUT(GETTAG(integer), Int);
    //if (GETTAG(class) == INT) {
        return ((Type_SmallInt)integer)->value;
    //}
    //assert1(NULL, "Only SmallInts supported for now\n");
    //return 0;
}
