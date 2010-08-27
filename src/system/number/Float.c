#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
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

Float Float_plus_Float(double left, double right) {
   return wrap_float(left + right); 
}

NATIVE(Float_plus_)
    Optr w_arg = NATIVE_ARG(0);
    Class type = HEADER(w_arg);
    double right;
    if (type == Float_Class) {
        right = unwrap_float(w_arg);
    } else if (type == SmallInt_Class) {
        right = unwrap_int(w_arg);
    }
    RETURN_FROM_NATIVE(Float_plus_Float(((Float)self)->value, right));
}

#define Float_BINARY_OPERATION(name, op)\
NATIVE1(Float_##name)\
    Optr w_arg = NATIVE_ARG(0);\
    ASSERT_INSTANCE_OF(w_arg, Float_Class);\
    Float arg = (Float)w_arg;\
    RETURN_FROM_NATIVE(new_Float(((Float) self)->value op arg->value));\
}

Float_BINARY_OPERATION(minus_,      -);
Float_BINARY_OPERATION(times_,      *);
Float_BINARY_OPERATION(divide_,     /);


// TODO fix this damn typecheck!
// printf("%i "#op" %i\n", number->value, otherNumber->value);
#define Float_COMPARE_OPERATION(name, op)\
NATIVE1(Float##_##name)\
    Optr w_arg = NATIVE_ARG(0);\
    if (HEADER(w_arg) == Float_Class) {\
        Float number      = ((Float) self);\
        Float otherNumber = (Float)w_arg; \
        if (number->value op otherNumber->value) {\
            RETURN_FROM_NATIVE(true);\
        } else {\
            RETURN_FROM_NATIVE(false);\
        }\
    } else {\
        assert1(NULL, "Invalid Type for Float Boolean BinOP "#name"\n"); \
    }\
}

Float_COMPARE_OPERATION(lt_, <)
Float_COMPARE_OPERATION(gt_, >)
Float_COMPARE_OPERATION(notEqual_, !=)

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
    long size = asprintf(&chrs, "%g", self);
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

    Dictionary natives = add_plugin(L"Type.Float");

    store_native(natives, L"=",      NM_Float_pequal_);
    store_native(natives, L"==",     NM_Float_pequal_);
    store_native(natives, L"+",       NM_Float_plus_);
    store_native(natives, L"-",      NM_Float_minus_);   
    store_native(natives, L"*",      NM_Float_times_); 
    store_native(natives, L"//",     NM_Float_divide_);
    store_native(natives, L"<",         NM_Float_lt_);
    store_native(natives, L">",         NM_Float_gt_);
    store_native(natives, L"!=",         NM_Float_notEqual_);
    store_native(natives, L"~=",         NM_Float_notEqual_);
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
