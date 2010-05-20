#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <system/number/Float.h>
#include <system/type/String.h>


/* ========================================================================= */

DECLARE_CLASS(Number_Float);

/* ========================================================================= */

Number_Float new_Number_Float(float value)
{
    NEW_OBJECT(Number_Float);
    result->value = value;
    return result;
}

void pre_init_Number_Float()
{
    Number_Float_Class = new_Bootstrapping_Class();
    REFER_TO(Number_Float);
}

/* ========================================================================= */

#define Number_Float_BINARY_OPERATION(name, op)\
NATIVE1(Number_Float_##name)\
    Object w_arg = NATIVE_ARG(0);\
    ASSERT_INSTANCE_OF(w_arg, Number_Float_Class);\
    Number_SmallInt arg = (Number_SmallInt)w_arg;\
    RETURN_FROM_NATIVE(new_Number_SmallInt(((Number_SmallInt) self)->value op arg->value));\
}

Number_Float_BINARY_OPERATION(plus_,       +);
Number_Float_BINARY_OPERATION(minus_,      -);
Number_Float_BINARY_OPERATION(times_,      *);
Number_Float_BINARY_OPERATION(divide_,     /);
Number_Float_BINARY_OPERATION(modulo_,     %);
Number_Float_BINARY_OPERATION(shiftRight_, >>);
Number_Float_BINARY_OPERATION(shiftLeft_,  <<);
Number_Float_BINARY_OPERATION(and_,        &);
Number_Float_BINARY_OPERATION(or_,         |);


// TODO fix this damn typecheck!
// printf("%i "#op" %i\n", number->value, otherNumber->value);
#define Number_Float_COMPARE_OPERATION(name, op)\
NATIVE1(Number_Float##_##name)\
    Object w_arg = NATIVE_ARG(0);\
    if (HEADER(w_arg) == Number_Float_Class) {\
        Number_Float number      = ((Number_Float) self);\
        Number_Float otherNumber = (Number_Float)w_arg; \
        if (number->value op otherNumber->value) {\
            RETURN_FROM_NATIVE(True);\
        } else {\
            RETURN_FROM_NATIVE(False);\
        }\
    } else {\
        assert1(NULL, "Invalid Type for Float Boolean BinOP "#name"\n"); \
    }\
}

Number_Float_COMPARE_OPERATION(equals_, ==)
Number_Float_COMPARE_OPERATION(lt_, <)
Number_Float_COMPARE_OPERATION(gt_, >)
Number_Float_COMPARE_OPERATION(notEqual_, !=)

NATIVE0(Number_Float_hash)
    float f = unwrap_float(self);
    RETURN_FROM_NATIVE(new_Number_SmallInt((uns_int)f)); 
}

Type_String Number_Float_asString(float self, uns_int base)
{
    char *chrs;
    int size = asprintf(&chrs, "%f", self);
    assert1(size != -1, "Unable to convert float to string");
    Type_String result = new_Type_String(ascii_to_unicode(chrs));
    free(chrs);
    return result;
}

NATIVE0(Number_Float_asString)
    RETURN_FROM_NATIVE(Number_Float_asString(unwrap_int(self), 10));
}


/* ========================================================================= */

void post_init_Number_Float()
{
    INIT_CLASS(Number_Float);

    Collection_Dictionary natives = add_plugin(L"Type.Float");

    store_native(natives, SMB__equal,      NM_Number_Float_equals_);
    store_native(natives, SMB__plus,       NM_Number_Float_plus_);
    store_native(natives, SMB__minus,      NM_Number_Float_minus_);   
    store_native(natives, SMB__times,      NM_Number_Float_times_); 
    store_native(natives, SMB__divide,     NM_Number_Float_divide_);
    store_native(natives, SMB__modulo,     NM_Number_Float_modulo_);
    store_native(natives, SMB__shiftLeft,  NM_Number_Float_shiftLeft_);
    store_native(natives, SMB__shiftRight, NM_Number_Float_shiftRight_);
    store_native(natives, SMB__and,        NM_Number_Float_and_);
    store_native(natives, SMB__or,         NM_Number_Float_or_);
    store_native(natives, SMB__lt,         NM_Number_Float_lt_);
    store_native(natives, SMB__gt,         NM_Number_Float_gt_);
    store_native(natives, SMB__notEqual,   NM_Number_Float_notEqual_);
    store_native(natives, SMB_hash,        NM_Number_Float_hash);
    store_native(natives, SMB_asString,    NM_Number_Float_asString);
}

/* ========================================================================= */

float unwrap_float(Object floatValue)
{
    // TODO do more stuff in case we are not an float.
    ASSERT_TAG_LAYOUT(GETTAG(floatValue), Float);
    //if (GETTAG(class) == Float) {
        return ((Number_Float)floatValue)->value;
    //}
    //assert1(NULL, "Only Floats supported for now\n");
    //return 0;
}
