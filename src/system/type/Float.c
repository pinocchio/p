#include <stdlib.h>
#include <stdio.h>
#include <system/type/Float.h>
#include <system/type/String.h>

/* ========================================================================= */

DECLARE_CLASS(Type_Float);

/* ========================================================================= */

Type_Float new_Type_Float(float value)
{
    NEW_OBJECT(Type_Float);
    result->value = value;
    return result;
}

void pre_init_Type_Float()
{
    Type_Float_Class = new_Bootstrapping_Class();
    REFER_TO(Type_Float);
}

/* ========================================================================= */

#define Type_Float_BINARY_OPERATION(name, op)\
NATIVE1(Type_Float_##name)\
    Object w_arg = NATIVE_ARG(0);\
    ASSERT_INSTANCE_OF(w_arg, Type_Float_Class);\
    Type_SmallInt arg = (Type_SmallInt)w_arg;\
    RETURN_FROM_NATIVE(new_Type_SmallInt(((Type_SmallInt) self)->value op arg->value));\
}

Type_Float_BINARY_OPERATION(plus_,       +);
Type_Float_BINARY_OPERATION(minus_,      -);
Type_Float_BINARY_OPERATION(times_,      *);
Type_Float_BINARY_OPERATION(divide_,     /);
Type_Float_BINARY_OPERATION(modulo_,     %);
Type_Float_BINARY_OPERATION(shiftRight_, >>);
Type_Float_BINARY_OPERATION(shiftLeft_,  <<);
Type_Float_BINARY_OPERATION(and_,        &);
Type_Float_BINARY_OPERATION(or_,         |);


// TODO fix this damn typecheck!
// printf("%i "#op" %i\n", number->value, otherNumber->value);
#define Type_Float_COMPARE_OPERATION(name, op)\
NATIVE1(Type_Float##_##name)\
    Object w_arg = NATIVE_ARG(0);\
    if (HEADER(w_arg) == Type_Float_Class) {\
        Type_Float number      = ((Type_Float) self);\
        Type_Float otherNumber = (Type_Float)w_arg; \
        if (number->value op otherNumber->value) {\
            RETURN_FROM_NATIVE(True);\
        } else {\
            RETURN_FROM_NATIVE(False);\
        }\
    } else {\
        print_Class(w_arg);\
        assert1(NULL, "Invalid Type for Float Boolean BinOP "#name"\n"); \
    }\
}

Type_Float_COMPARE_OPERATION(equals_, ==)
Type_Float_COMPARE_OPERATION(lt_, <)
Type_Float_COMPARE_OPERATION(gt_, >)
Type_Float_COMPARE_OPERATION(notEqual_, !=)

NATIVE0(Type_Float_hash)
    RETURN_FROM_NATIVE(self); 
}

Type_String Type_Float_asString(float self, uns_int base)
{
    char *chrs;
    asprintf(&chrs, "%f", self);
    Type_String result = new_Type_String(ascii_to_unicode(chrs));
    return result;
}

NATIVE0(Type_Float_asString)
    RETURN_FROM_NATIVE(Type_Float_asString(unwrap_int(self), 10));
}


/* ========================================================================= */

void post_init_Type_Float()
{
    HEADER(Type_Float_Class)->methods = new_Collection_Dictionary();
    HEADER(Type_Float_Class)->layout  = CREATE_OBJECT_TAG(CLASS);
    
    Type_Float_Class->name            = new_Type_String(L"Float");
    Type_Float_Class->methods         = new_Collection_Dictionary();

    store_native_method(Type_Float_Class, SMB__equal,      NM_Type_Float_equals_);
    store_native_method(Type_Float_Class, SMB__plus,       NM_Type_Float_plus_);
    store_native_method(Type_Float_Class, SMB__minus,      NM_Type_Float_minus_);   
    store_native_method(Type_Float_Class, SMB__times,      NM_Type_Float_times_); 
    store_native_method(Type_Float_Class, SMB__divide,     NM_Type_Float_divide_);
    store_native_method(Type_Float_Class, SMB__modulo,     NM_Type_Float_modulo_);
    store_native_method(Type_Float_Class, SMB__shiftLeft,  NM_Type_Float_shiftLeft_);
    store_native_method(Type_Float_Class, SMB__shiftRight, NM_Type_Float_shiftRight_);
    store_native_method(Type_Float_Class, SMB__and,        NM_Type_Float_and_);
    store_native_method(Type_Float_Class, SMB__or,         NM_Type_Float_or_);
    store_native_method(Type_Float_Class, SMB__lt,         NM_Type_Float_lt_);
    store_native_method(Type_Float_Class, SMB__gt,         NM_Type_Float_gt_);
    store_native_method(Type_Float_Class, SMB__notEqual,   NM_Type_Float_notEqual_);
    store_native_method(Type_Float_Class, SMB_hash,        NM_Type_Float_hash);
    store_native_method(Type_Float_Class, SMB_asString,    NM_Type_Float_asString);
}

/* ========================================================================= */

float unwrap_float(Object floatValue)
{
    // TODO do more stuff in case we are not an float.
    ASSERT_TAG_LAYOUT(GETTAG(floatValue), Float);
    //if (GETTAG(class) == Float) {
        return ((Type_Float)floatValue)->value;
    //}
    //assert1(NULL, "Only Floats supported for now\n");
    //return 0;
}
