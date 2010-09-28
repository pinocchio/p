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

SmallInt SmallInt_plus_SmallInt(long left, long right) {
    long result = left + right;
    if (right <= 0) {
        assert1(result <= left, "Addition overflow");
    } else {
        assert1(result > left, "Addition underflow");
    }
    return new_SmallInt(result);
}

NATIVE1(SmallInt_plus_)
    Optr right = NATIVE_ARG(0);
    Class type = HEADER(right); 
    if (type == SmallInt_Class) {
        RETURN_FROM_NATIVE(SmallInt_plus_SmallInt(unwrap_int(self), unwrap_int(right)));
    } else if (type == Float_Class) {
        RETURN_FROM_NATIVE(Float_plus_Float(unwrap_int(self), unwrap_float(right)));
    } else {
        assert1(NULL, "unsupported operand for +");
    }
}

SmallInt SmallInt_minus_SmallInt(long left, long right) {
    long result = left - right;
    if (right < 0) {
        assert1(result > left, "Substraction underflow");
    } else {
        assert1(result <= left, "Substraction overflow");
    }
    return new_SmallInt(result);
}

NATIVE1(SmallInt_minus_)
    Optr right = NATIVE_ARG(0);
    Class type = HEADER(right); 
    if (type == SmallInt_Class) {
        RETURN_FROM_NATIVE(SmallInt_minus_SmallInt(unwrap_int(self), unwrap_int(right)));
    } else if (type == Float_Class) {
        RETURN_FROM_NATIVE(Float_minus_Float(unwrap_int(self), unwrap_float(right)));
    } else {
        assert1(NULL, "unsupported operand for (int - XXX) fix MOP");
    }
}

SmallInt SmallInt_times_SmallInt(long left, long right) {
    if (right == 0) {;
        return new_SmallInt(0);
    } else {
        long result = left * right;
        assert1(result / right == left, "Multiplication overflow");
        return new_SmallInt(result);
    }
}

NATIVE1(SmallInt_times_)
    Optr right = NATIVE_ARG(0);
    Class type = HEADER(right); 
    if (type == SmallInt_Class) {
        RETURN_FROM_NATIVE(SmallInt_times_SmallInt(unwrap_int(self), unwrap_int(right)));
    } else if (type == Float_Class) {
        RETURN_FROM_NATIVE(Float_times_Float(unwrap_int(self), unwrap_float(right)));
    } else {
        assert1(NULL, "unsupported operand for (int * XXX) fix MOP");
    }
}

NATIVE1(SmallInt_div_)
    Optr w_arg = NATIVE_ARG(0);
    Class type = HEADER(w_arg); 
    double right;
    if (type == SmallInt_Class) {
        //TODO return a Fraction here
        long value = unwrap_int(w_arg);
        assert1(value != 0, "Division by 0");
        right = value;
    } else if (type == Float_Class) {
        right = unwrap_float(w_arg);
    } else {
        assert1(NULL, "invalid argument type for (int / XXX) fix MOP!");
    }
    Float result = Float_divide_Float(unwrap_int(self), right);
    RETURN_FROM_NATIVE(result);
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
    Class type = HEADER(w_arg);\
    if (type == SmallInt_Class) {\
        RETURN_FROM_NATIVE(get_bool(unwrap_int(self) op unwrap_int(w_arg)));\
    } else if (type == Float_Class) {\
        RETURN_FROM_NATIVE(Float##_##name##Float(unwrap_int(self), unwrap_float(w_arg)));\
    } else {\
        assert1(NULL, "Invalid Type for SmallInt Boolean BinOP "#op" Please extend the MOP\n"); \
    }\
}

SmallInt_COMPARE_OPERATION(lt_,       <)
SmallInt_COMPARE_OPERATION(gt_,       >)
SmallInt_COMPARE_OPERATION(notEqual_, !=) //TODO fix check with Floats

NATIVE0(SmallInt_asFloat)
    RETURN_FROM_NATIVE(wrap_float(unwrap_int(self)));
}

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
        //TODO minor type based checks and fallbock into ST code
        return (Boolean)false;
    }
    return (Boolean)get_bool(self->value == unwrap_int(other));
}

NATIVE1(SmallInt_pequal_)
    Optr arg =  NATIVE_ARG(0);
    RETURN_FROM_NATIVE(SmallInt_pequal_((SmallInt)self, arg));
}


/* ========================================================================= */

void post_init_SmallInt()
{
    PLUGIN natives = add_plugin(L"Number.SmallInt");
    
    store_native(natives, L"=",  NM_SmallInt_pequal_);
    store_native(natives, L"+",  NM_SmallInt_plus_);
    store_native(natives, L"-",  NM_SmallInt_minus_);   
    store_native(natives, L"*",  NM_SmallInt_times_); 
    store_native(natives, L"/",  NM_SmallInt_div_);
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
    store_native(natives, L"asFloat",    NM_SmallInt_asFloat);
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
