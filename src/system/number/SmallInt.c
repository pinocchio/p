#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <math.h>
#include <system/number/SmallInt.h>

/* ========================================================================= */

DECLARE_CLASS(SmallInt);

SmallInt* SmallInt_cache;

/* ========================================================================= */

SmallInt raw_SmallInt(long value)
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
    return raw_SmallInt(value);
}

/* ========================================================================= */

void init_numbercache()
{
    SmallInt_cache   = (SmallInt*)PALLOC(sizeof(SmallInt[INT_CACHE_UPPER-INT_CACHE_LOWER]));
    SmallInt_cache -= INT_CACHE_LOWER;
    
    long i;
    for (i = INT_CACHE_LOWER; i < INT_CACHE_UPPER; i++) {
        SmallInt_cache[i] = raw_SmallInt(i);
    }
}

/* ========================================================================= */

NATIVE1(SmallInt_plus_)
    long left = unwrap_int(self);
    long right = unwrap_int(NATIVE_ARG(0));
    long result = left + right;
    if (right <= 0) {
        assert1(result <= left, "Addition overflow");
    } else {
        assert1(result > left, "Addition underflow");
    }
    RETURN_FROM_NATIVE(new_SmallInt(result));
}

NATIVE1(SmallInt_minus_)
    long left = unwrap_int(self);
    long right = unwrap_int(NATIVE_ARG(0));
    long result = left - right;
    if (right < 0) {
        assert1(result > left, "Substraction underflow");
    } else {
        assert1(result <= left, "Substraction overflow");
    }
    RETURN_FROM_NATIVE(new_SmallInt(result));
}

NATIVE1(SmallInt_times_)
    long left = unwrap_int(self);
    long right = unwrap_int(NATIVE_ARG(0));
    long result = left * right;
    assert1(result / right == left, "Multiplication overflow");
    RETURN_FROM_NATIVE(new_SmallInt(result));
}

NATIVE1(SmallInt_divide_)
    long left = unwrap_int(self);
    long right = unwrap_int(NATIVE_ARG(0));
    assert1(right != 0, "Division by zero");
    RETURN_FROM_NATIVE(new_SmallInt(left / right));
}

NATIVE1(SmallInt_modulo_)
    long left = unwrap_int(self);
    long right = unwrap_int(NATIVE_ARG(0));
    RETURN_FROM_NATIVE(new_SmallInt(left % right));
}

NATIVE1(SmallInt_shiftLeft_)
    long left = unwrap_int(self);
    long right = unwrap_int(NATIVE_ARG(0));
    if (left != 0) {
        long bits = log2l(abs(left));
        assert1(right + bits < sizeof(long) * 8 - 1, "Bitshift overflow");
    }
    RETURN_FROM_NATIVE(new_SmallInt(left << right));
}

NATIVE1(SmallInt_shiftRight_)
    long left = unwrap_int(self);
    long right = unwrap_int(NATIVE_ARG(0));
    RETURN_FROM_NATIVE(new_SmallInt(left >> right));
}

NATIVE1(SmallInt_and_)
    long left = unwrap_int(self);
    long right = unwrap_int(NATIVE_ARG(0));
    RETURN_FROM_NATIVE(new_SmallInt(left & right));
}

NATIVE1(SmallInt_or_)
    long left = unwrap_int(self);
    long right = unwrap_int(NATIVE_ARG(0));
    RETURN_FROM_NATIVE(new_SmallInt(left | right));
}

// TODO fix this damn typecheck!
// printf("%i "#op" %i\n", number->value, otherNumber->value);
#define SmallInt_COMPARE_OPERATION(name, op)\
NATIVE1(SmallInt##_##name)\
    Optr w_arg = NATIVE_ARG(0);\
    if (HEADER(w_arg) == SmallInt_Class) {\
        SmallInt number      = ((SmallInt)self);\
        SmallInt otherNumber = (SmallInt)w_arg; \
        RETURN_FROM_NATIVE(get_bool(number->value op otherNumber->value));\
    } else {\
        assert1(NULL, "Invalid Type for SmallInt Boolean BinOP "#name"\n"); \
    }\
}
SmallInt_COMPARE_OPERATION(lt_,       <)
SmallInt_COMPARE_OPERATION(gt_,       >)
SmallInt_COMPARE_OPERATION(notEqual_, !=)

String SmallInt_asString(long self, uns_int base)
{
    wchar_t buffer[LONG_MAX_DIGITS + 2];
    int len = swprintf(buffer, sizeof buffer / sizeof *buffer, L"%li", self);
    assert0(len < LONG_MAX_DIGITS + 2);
    String result = new_String(buffer);
    return result;
}

NATIVE0(SmallInt_asString)
    RETURN_FROM_NATIVE(SmallInt_asString(unwrap_int(self), 10));
}

NATIVE0(SmallInt_asCharacter)
    RETURN_FROM_NATIVE(new_Character_fromInt(unwrap_int(self)));
}

Boolean SmallInt_pequal_(SmallInt self, Optr other) 
{
    if (HEADER(other) != SmallInt_Class) {
        return (Boolean)false;
    }
    return (Boolean)get_bool(self->value == ((SmallInt)other)->value);
}

NATIVE1(SmallInt_pequal_)
    Optr arg =  NATIVE_ARG(0);
    RETURN_FROM_NATIVE(SmallInt_pequal_((SmallInt)self, arg));
}


/* ========================================================================= */

void post_init_SmallInt()
{
    SmallInt_Class->layout = int_layout;
    init_numbercache();
    Dictionary natives = add_plugin(L"Type.SmallInt");
    
    store_native(natives, L"=",  NM_SmallInt_pequal_);
    store_native(natives, L"+",  NM_SmallInt_plus_);
    store_native(natives, L"-",  NM_SmallInt_minus_);   
    store_native(natives, L"*",  NM_SmallInt_times_); 
    store_native(natives, L"//",  NM_SmallInt_divide_);
    store_native(natives, L"%",  NM_SmallInt_modulo_);
    store_native(natives, L"\\\\", NM_SmallInt_modulo_);
    store_native(natives, L"<<", NM_SmallInt_shiftLeft_);
    store_native(natives, L">>", NM_SmallInt_shiftRight_);
    store_native(natives, L"&",  NM_SmallInt_and_);
    store_native(natives, L"|",  NM_SmallInt_or_);
    store_native(natives, L"<",  NM_SmallInt_lt_);
    store_native(natives, L">",  NM_SmallInt_gt_);
    store_native(natives, L"~=", NM_SmallInt_notEqual_);
    store_native(natives, L"asString",    NM_SmallInt_asString);
    store_native(natives, L"asCharacter", NM_SmallInt_asCharacter);
}

/* ========================================================================= */

Optr wrap_int(long value)
{
    return (Optr)new_SmallInt(value);
}

long unwrap_int(Optr integer)
{
    ASSERT_TAG_LAYOUT(GETTAG(integer), Int);
    return ((SmallInt)integer)->value;
}
