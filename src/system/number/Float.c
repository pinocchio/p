#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <pinocchio.h>

/* ========================================================================= */

DECLARE_CLASS(Float);

/* ========================================================================= */

Float new_Float(float value)
{
    NEW_OBJECT(Float);
    result->value = value;
    return result;
}

/* ========================================================================= */

#define Float_BINARY_OPERATION(name, op)\
NATIVE1(Float_##name)\
    Optr w_arg = NATIVE_ARG(0);\
    ASSERT_INSTANCE_OF(w_arg, Float_Class);\
    SmallInt arg = (SmallInt)w_arg;\
    RETURN_FROM_NATIVE(new_SmallInt(((SmallInt) self)->value op arg->value));\
}

Float_BINARY_OPERATION(plus_,       +);
Float_BINARY_OPERATION(minus_,      -);
Float_BINARY_OPERATION(times_,      *);
Float_BINARY_OPERATION(divide_,     /);
Float_BINARY_OPERATION(modulo_,     %);
Float_BINARY_OPERATION(shiftRight_, >>);
Float_BINARY_OPERATION(shiftLeft_,  <<);
Float_BINARY_OPERATION(and_,        &);
Float_BINARY_OPERATION(or_,         |);


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
    float f = unwrap_float(self);
    RETURN_FROM_NATIVE(wrap_int((uns_int)f)); 
}

String Float_asString(float self, uns_int base)
{
    char *chrs;
    long size = asprintf(&chrs, "%f", self);
    assert1(size != -1, "Unable to convert float to string");
    String result = new_String(ascii_to_unicode(chrs));
    free(chrs);
    return result;
}

NATIVE0(Float_asString)
    RETURN_FROM_NATIVE(Float_asString(unwrap_int(self), 10));
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
    Dictionary natives = add_plugin(L"Type.Float");

    store_native(natives, L"=",      NM_Float_pequal_);
    store_native(natives, L"==",     NM_Float_pequal_);
    store_native(natives, L"+",       NM_Float_plus_);
    store_native(natives, L"-",      NM_Float_minus_);   
    store_native(natives, L"*",      NM_Float_times_); 
    store_native(natives, L"//",     NM_Float_divide_);
    store_native(natives, L"%",     NM_Float_modulo_);
    store_native(natives, L"\\\\",     NM_Float_modulo_);
    store_native(natives, L"<<",  NM_Float_shiftLeft_);
    store_native(natives, L">>", NM_Float_shiftRight_);
    store_native(natives, L"&",        NM_Float_and_);
    store_native(natives, L"|",         NM_Float_or_);
    store_native(natives, L"<",         NM_Float_lt_);
    store_native(natives, L">",         NM_Float_gt_);
    store_native(natives, L"!=",         NM_Float_notEqual_);
    store_native(natives, L"~=",         NM_Float_notEqual_);
    store_native(natives, L"hash",        NM_Float_hash);
    store_native(natives, L"asString",    NM_Float_asString);
}

/* ========================================================================= */

float unwrap_float(Optr floatValue)
{
    // TODO do more stuff in case we are not an float.
    ASSERT_TAG_LAYOUT(GETTAG(floatValue), Float);
    //if (GETTAG(class) == Float) {
        return ((Float)floatValue)->value;
    //}
    //assert1(NULL, "Only Floats supported for now\n");
    //return 0;
}
