#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <math.h>
#include <system/number/SmallInt.h>

/* ========================================================================= */

DECLARE_CLASS(Number_SmallInt);

Number_SmallInt* Number_SmallInt_cache;

/* ========================================================================= */

Number_SmallInt new_Number_SmallInt_raw(int value)
{
    NEW_OBJECT(Number_SmallInt);
    result->value = value;
    return result;
}

Number_SmallInt new_Number_SmallInt(int value)
{
    if (INT_CACHE_LOWER <= value && value < INT_CACHE_UPPER) {
        return Number_SmallInt_cache[value];
    }
    return new_Number_SmallInt_raw(value);
}

/* ========================================================================= */

void init_numbercache()
{
    Number_SmallInt_cache   = (Number_SmallInt*)PALLOC(sizeof(Number_SmallInt[INT_CACHE_UPPER-INT_CACHE_LOWER]));
    Number_SmallInt_cache -= INT_CACHE_LOWER;
    
    int i;
    for (i = INT_CACHE_LOWER; i < INT_CACHE_UPPER; i++) {
        Number_SmallInt_cache[i] = new_Number_SmallInt_raw(i);
    }
}

/* ========================================================================= */

#define Number_SmallInt_BINARY_OPERATION(name, op)\
NATIVE1(Number_SmallInt_##name)\
    int value = unwrap_int(NATIVE_ARG(0)); \
    RETURN_FROM_NATIVE(new_Number_SmallInt(((Number_SmallInt) self)->value op value));\
}

Number_SmallInt_BINARY_OPERATION(plus_,       +);
Number_SmallInt_BINARY_OPERATION(minus_,      -);
Number_SmallInt_BINARY_OPERATION(times_,      *);
Number_SmallInt_BINARY_OPERATION(divide_,     /);
Number_SmallInt_BINARY_OPERATION(modulo_,     %);
Number_SmallInt_BINARY_OPERATION(shiftRight_, >>);
Number_SmallInt_BINARY_OPERATION(shiftLeft_,  <<);
Number_SmallInt_BINARY_OPERATION(and_,        &);
Number_SmallInt_BINARY_OPERATION(or_,         |);


// TODO fix this damn typecheck!
// printf("%i "#op" %i\n", number->value, otherNumber->value);
#define Number_SmallInt_COMPARE_OPERATION(name, op)\
NATIVE1(Number_SmallInt##_##name)\
    Object w_arg = NATIVE_ARG(0);\
    if (HEADER(w_arg) == Number_SmallInt_Class) {\
        Number_SmallInt number      = ((Number_SmallInt) self);\
        Number_SmallInt otherNumber = (Number_SmallInt)w_arg; \
        if (number->value op otherNumber->value) {\
            RETURN_FROM_NATIVE(True);\
        } else {\
            RETURN_FROM_NATIVE(False);\
        }\
    } else {\
        assert1(NULL, "Invalid Type for SmallInt Boolean BinOP "#name"\n"); \
    }\
}
//TODO return false on == and != if wrong type given
Number_SmallInt_COMPARE_OPERATION(equals_, ==)
Number_SmallInt_COMPARE_OPERATION(lt_, <)
Number_SmallInt_COMPARE_OPERATION(gt_, >)
Number_SmallInt_COMPARE_OPERATION(notEqual_, !=)

Type_String Number_SmallInt_asString(int self, uns_int base)
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

NATIVE0(Number_SmallInt_asString)
    RETURN_FROM_NATIVE(Number_SmallInt_asString(unwrap_int(self), 10));
}

NATIVE0(Number_SmallInt_asCharacter)
    RETURN_FROM_NATIVE(new_Type_Character_fromInt(unwrap_int(self)));
}


/* ========================================================================= */

void post_init_Number_SmallInt()
{
    Number_SmallInt_Class->layout = int_layout;
    init_numbercache();
    Collection_Dictionary natives = add_plugin(L"Type.SmallInt");
    
    store_native(natives, SMB__equal,      NM_Number_SmallInt_equals_);
    store_native(natives, SMB__plus,       NM_Number_SmallInt_plus_);
    store_native(natives, SMB__minus,      NM_Number_SmallInt_minus_);   
    store_native(natives, SMB__times,      NM_Number_SmallInt_times_); 
    store_native(natives, SMB__divide,     NM_Number_SmallInt_divide_);
    store_native(natives, SMB__modulo,     NM_Number_SmallInt_modulo_);
    store_native(natives, SMB__shiftLeft,  NM_Number_SmallInt_shiftLeft_);
    store_native(natives, SMB__shiftRight, NM_Number_SmallInt_shiftRight_);
    store_native(natives, SMB__and,        NM_Number_SmallInt_and_);
    store_native(natives, SMB__or,         NM_Number_SmallInt_or_);
    store_native(natives, SMB__lt,         NM_Number_SmallInt_lt_);
    store_native(natives, SMB__gt,         NM_Number_SmallInt_gt_);
    store_native(natives, SMB__notEqual,   NM_Number_SmallInt_notEqual_);
    store_native(natives, SMB_asString,    NM_Number_SmallInt_asString);
    store_native(natives, SMB_asCharacter, NM_Number_SmallInt_asCharacter);
    
    //assert0(Collection_Dictionary_lookup(Number_SmallInt_Class->methods, (Object)SMB__plus));
    //assert0(Collection_Dictionary_lookup(Number_SmallInt_Class->methods, (Object)SMB__minus));
    //assert0(Collection_Dictionary_lookup(Number_SmallInt_Class->methods, (Object)SMB__equal));
}

/* ========================================================================= */

Object wrap_int(int value)
{
    return (Object)new_Number_SmallInt(value);
}

int unwrap_int(Object integer)
{
    // TODO do more stuff in case we are not an int.
    ASSERT_TAG_LAYOUT(GETTAG(integer), Int);
    //if (GETTAG(class) == INT) {
        return ((Number_SmallInt)integer)->value;
    //}
    //assert1(NULL, "Only SmallInts supported for now\n");
    //return 0;
}
