#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <math.h>
#include <system/number/SmallInt.h>

/* ========================================================================= */

DECLARE_CLASS(SmallInt);

SmallInt* SmallInt_cache;

/* ========================================================================= */

SmallInt new_SmallInt_raw(long value)
{
    NEW_OBJECT(SmallInt);
    result->value = value;
    return result;
}

SmallInt new_SmallInt(long value)
{
    if (INT_CACHE_LOWER <= value && value < INT_CACHE_UPPER) {
        return SmallInt_cache[value];
    }
    return new_SmallInt_raw(value);
}

/* ========================================================================= */

void init_numbercache()
{
    SmallInt_cache   = (SmallInt*)PALLOC(sizeof(SmallInt[INT_CACHE_UPPER-INT_CACHE_LOWER]));
    SmallInt_cache -= INT_CACHE_LOWER;
    
    long i;
    for (i = INT_CACHE_LOWER; i < INT_CACHE_UPPER; i++) {
        SmallInt_cache[i] = new_SmallInt_raw(i);
    }
}

/* ========================================================================= */

#define SmallInt_BINARY_OPERATION(name, op)\
NATIVE1(SmallInt_##name)\
    long value = unwrap_int(NATIVE_ARG(0)); \
    RETURN_FROM_NATIVE(new_SmallInt(((SmallInt) self)->value op value));\
}

SmallInt_BINARY_OPERATION(plus_,       +);
SmallInt_BINARY_OPERATION(minus_,      -);
SmallInt_BINARY_OPERATION(times_,      *);
SmallInt_BINARY_OPERATION(divide_,     /);
SmallInt_BINARY_OPERATION(modulo_,     %);
SmallInt_BINARY_OPERATION(shiftRight_, >>);
SmallInt_BINARY_OPERATION(shiftLeft_,  <<);
SmallInt_BINARY_OPERATION(and_,        &);
SmallInt_BINARY_OPERATION(or_,         |);


// TODO fix this damn typecheck!
// printf("%i "#op" %i\n", number->value, otherNumber->value);
#define SmallInt_COMPARE_OPERATION(name, op)\
NATIVE1(SmallInt##_##name)\
    Optr w_arg = NATIVE_ARG(0);\
    if (HEADER(w_arg) == SmallInt_Class) {\
        SmallInt number      = ((SmallInt) self);\
        SmallInt otherNumber = (SmallInt)w_arg; \
        if (number->value op otherNumber->value) {\
            RETURN_FROM_NATIVE(true);\
        } else {\
            RETURN_FROM_NATIVE(false);\
        }\
    } else {\
        assert1(NULL, "Invalid Type for SmallInt Boolean BinOP "#name"\n"); \
    }\
}
//TODO return false on == and != if wrong type given
SmallInt_COMPARE_OPERATION(equals_, ==)
SmallInt_COMPARE_OPERATION(lt_, <)
SmallInt_COMPARE_OPERATION(gt_, >)
SmallInt_COMPARE_OPERATION(notEqual_, !=)

String SmallInt_asString(long self, uns_int base)
{
    long size;
    if (self == 0) { 
        size = 1; 
    } else {
        size = 1+(long)floorl(log10l(labs(self)));
    }
    if (self < 0) { size += 1; };
    size += 1;
    wchar_t wchar_copy[size];
    swprintf(&wchar_copy[0], size, L"%li", self);
    String result   =  new_String(wchar_copy);
    return result;
}

NATIVE0(SmallInt_asString)
    RETURN_FROM_NATIVE(SmallInt_asString(unwrap_int(self), 10));
}

NATIVE0(SmallInt_asCharacter)
    RETURN_FROM_NATIVE(new_Character_fromInt(unwrap_int(self)));
}


/* ========================================================================= */

void post_init_SmallInt()
{
    SmallInt_Class->layout = int_layout;
    init_numbercache();
    Dictionary natives = add_plugin(L"Type.SmallInt");
    
    store_native(natives, SMB__equal,      NM_SmallInt_equals_);
    store_native(natives, SMB__plus,       NM_SmallInt_plus_);
    store_native(natives, SMB__minus,      NM_SmallInt_minus_);   
    store_native(natives, SMB__times,      NM_SmallInt_times_); 
    store_native(natives, SMB__divide,     NM_SmallInt_divide_);
    store_native(natives, SMB__modulo,     NM_SmallInt_modulo_);
    store_native(natives, SMB__shiftLeft,  NM_SmallInt_shiftLeft_);
    store_native(natives, SMB__shiftRight, NM_SmallInt_shiftRight_);
    store_native(natives, SMB__and,        NM_SmallInt_and_);
    store_native(natives, SMB__or,         NM_SmallInt_or_);
    store_native(natives, SMB__lt,         NM_SmallInt_lt_);
    store_native(natives, SMB__gt,         NM_SmallInt_gt_);
    store_native(natives, SMB__notEqual,   NM_SmallInt_notEqual_);
    store_native(natives, SMB_asString,    NM_SmallInt_asString);
    store_native(natives, SMB_asCharacter, NM_SmallInt_asCharacter);
    
    //assert0(Dictionary_lookup(SmallInt_Class->methods, (Optr)SMB__plus));
    //assert0(Dictionary_lookup(SmallInt_Class->methods, (Optr)SMB__minus));
    //assert0(Dictionary_lookup(SmallInt_Class->methods, (Optr)SMB__equal));
}

/* ========================================================================= */

Optr wrap_int(long value)
{
    return (Optr)new_SmallInt(value);
}

long unwrap_int(Optr integer)
{
    // TODO do more stuff in case we are not an int.
    ASSERT_TAG_LAYOUT(GETTAG(integer), Int);
    //if (GETTAG(class) == INT) {
        return ((SmallInt)integer)->value;
    //}
    //assert1(NULL, "Only SmallInts supported for now\n");
    //return 0;
}
