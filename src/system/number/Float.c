#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <pinocchio.h>

/* ========================================================================= */

DECLARE_CLASS(Float);

/* ========================================================================= */

Float new_Float(double value)
{
    NEW_OBJECT(Float);
    result->value = value;
    return result;
}

/* ========================================================================= */

#define FLOAT_BINOP_TYPE_SWITCH(op) \
    Optr w_arg = NATIVE_ARG(0);\
    Class type = HEADER(w_arg);\
    double right;\
    if (type == Float_Class) {\
        right = unwrap_float(w_arg);\
    } else if (type == SmallInt_Class) {\
        right = unwrap_int(w_arg);\
    } else {\
        assert1(NULL, "missing MOP for Float "#op" \n");\
    }


Float Float_plus_Float(double left, double right) {
   return wrap_float(left + right); 
}

Float Float_minus_Float(double left, double right) {
   return wrap_float(left - right); 
}

Float Float_times_Float(double left, double right) {
   return wrap_float(left * right); 
}

Float Float_divide_Float(double left, double right) {
   return wrap_float(left / right); 
}

NATIVE(Float_divide_)
    Optr w_arg = NATIVE_ARG(0);
    Class type = HEADER(w_arg);
    double right;
    if (type == Float_Class) {
        right = unwrap_float(w_arg);
    } else if (type == SmallInt_Class) {
        long value = unwrap_int(w_arg);
        assert1(value != 0, "Division by 0");
        right = value;
    } else {
        assert1(NULL, "missing MOP for Float + \n");
    }
 
    RETURN_FROM_NATIVE(Float_divide_Float(unwrap_float(self), right));
}


Float Float_raisedTo_(double left, double right) {
	return wrap_float(pow(left, right));
}

NATIVE1(Float_raisedTo_)    
	FLOAT_BINOP_TYPE_SWITCH(raisedTo:)
	RETURN_FROM_NATIVE(Float_raisedTo_(unwrap_float(self), right));
}


#define FLOAT_BINARY_OPERATION(name, op)\
NATIVE1(Float_##name##_)\
    FLOAT_BINOP_TYPE_SWITCH(op);\
    RETURN_FROM_NATIVE(Float_##name##_Float(unwrap_float(self), right));\
}

FLOAT_BINARY_OPERATION(minus,     -);
FLOAT_BINARY_OPERATION(plus,      +);
FLOAT_BINARY_OPERATION(times,     *);




// TODO fix this damn typecheck!
// printf("%i "#op" %i\n", number->value, otherNumber->value);
#define FLOAT_COMPARE_OPERATION(name, op)\
Boolean Float_##name##Float(double left, double right) {\
	return (Boolean)get_bool(left op right);\
}\
NATIVE1(Float##_##name)\
    Optr w_arg = NATIVE_ARG(0);\
	Class type = HEADER(w_arg);\
    double right;\
	if (type == Float_Class) {\
        right = unwrap_float(w_arg); \
	} else if (type == SmallInt_Class) {\
        right = unwrap_int(w_arg); \
    } else {\
        assert1(NULL, "Invalid Type for Float Boolean BinOP "#name"\n");\
    }\
	RETURN_FROM_NATIVE(Float_##name##Float(unwrap_float(self), right));\
}

FLOAT_COMPARE_OPERATION(lt_, <)
FLOAT_COMPARE_OPERATION(gt_, >)
FLOAT_COMPARE_OPERATION(notEqual_, !=)


Float Float_sqrt(double value) {
	assert1(value >= 0, "taking squareroot of negative number. "
					    "add complex number support");
	return wrap_float(sqrt(value));
}
NATIVE1(Float_sqrt)    
	double value = unwrap_float(self);
	RETURN_FROM_NATIVE(Float_sqrt(value));
}

Float Float_log(double value) {
	assert1(value >= 0, "taking squareroot of negative number. "
					    "add complex number support");
	return wrap_float(log(value));
}
NATIVE1(Float_log)    
	double value = unwrap_float(self);
	RETURN_FROM_NATIVE(Float_log(value));
}



SmallInt Float_floor(double value) {
	return (SmallInt)wrap_int(floor(value));
}
NATIVE1(Float_floor)    
	double value = unwrap_float(self);
	RETURN_FROM_NATIVE(Float_floor(value));
}

SmallInt Float_ceil(double value) {
	return (SmallInt)wrap_int(ceil(value));
}
NATIVE1(Float_ceil)    
	double value = unwrap_float(self);
	RETURN_FROM_NATIVE(Float_ceil(value));
}

SmallInt Float_rounded(double value) {
	return (SmallInt)wrap_int(round(value));
}
NATIVE1(Float_rounded)    
	double value = unwrap_float(self);
	RETURN_FROM_NATIVE(Float_rounded(value));
}

// ============================================================================
//
NATIVE0(Float_hash)
    double f = unwrap_float(self);
    RETURN_FROM_NATIVE(wrap_int((uns_int)f)); 
}

NATIVE0(Float_asInteger)
    RETURN_FROM_NATIVE(wrap_int((long)unwrap_float(self)));
}

String Float_asString(double self, uns_int base)
{
    char *chrs;
    long size = asprintf(&chrs, "%-.6f", self);
    assert1(size != -1, "Unable to convert float to string");
    String result = new_String(ascii_to_unicode(chrs));
    free(chrs);
    return result;
}

NATIVE0(Float_asString)
    RETURN_FROM_NATIVE(Float_asString(unwrap_float(self), 10));
}

Boolean Float_pequal_(Float self, Optr other) 
{
    if (HEADER(other) != Float_Class) {
        return (Boolean)false;
    }
    return (Boolean)get_bool(self->value == ((Float)other)->value);
}

NATIVE1(Float_pequal_)
    Optr arg =  NATIVE_ARG(0);
    RETURN_FROM_NATIVE(Float_pequal_((Float)self, arg));
}


/* ========================================================================= */

void post_init_Float()
{
    Float_Class->layout = float_layout;

    PLUGIN natives = add_plugin(L"Number.Float");

    store_native(natives, L"=",      NM_Float_pequal_);
    store_native(natives, L"==",     NM_Float_pequal_);
    store_native(natives, L"+",       NM_Float_plus_);
    store_native(natives, L"-",      NM_Float_minus_);   
    store_native(natives, L"*",      NM_Float_times_); 
    store_native(natives, L"//",     NM_Float_divide_);
    store_native(natives, L"/",      NM_Float_divide_);
    store_native(natives, L"<",         NM_Float_lt_);
    store_native(natives, L">",         NM_Float_gt_);
    store_native(natives, L"!=",         NM_Float_notEqual_);
    store_native(natives, L"~=",         NM_Float_notEqual_);
    store_native(natives, L"sqrt",         NM_Float_sqrt);
    store_native(natives, L"log",         NM_Float_log);
    store_native(natives, L"raisedTo:",         NM_Float_raisedTo_);
    store_native(natives, L"floor",         NM_Float_floor);
    store_native(natives, L"ceil",         NM_Float_ceil);
    store_native(natives, L"rounded",         NM_Float_rounded);
    store_native(natives, L"hash",        NM_Float_hash);
    store_native(natives, L"asString",    NM_Float_asString);
    store_native(natives, L"asInteger",    NM_Float_asInteger);
}

/* ========================================================================= */

Float wrap_float(double value) {
    return new_Float(value);
}

double unwrap_float(Optr floatValue)
{
    // TODO do more stuff in case we are not an float.
    ASSERT_TAG_LAYOUT(GETTAG(floatValue), Float);
    //if (GETTAG(class) == Float) {
        return ((Float)floatValue)->value;
    //}
    //assert1(NULL, "Only Floats supported for now\n");
    //return 0;
}
