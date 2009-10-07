
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Boolean.h>

/* ======================================================================== */

Type_Class Type_Boolean_Class;
Type_Class True_Class;
Type_Class False_Class;

AST_Constant False_Const;
Type_Boolean False;

AST_Constant True_Const;
Type_Boolean True;

/* ======================================================================== */

void pre_init_Type_False() {
    False_Class = new_Named_Class((Object)Type_Boolean_Class, L"False");
    False = NEW_t(Type_Boolean);
    HEADER(False) = (Object)False_Class;
    False_Const = new_AST_Constant((Object) False);
}

void pre_init_Type_True()
{
    True_Class = new_Named_Class((Object)Type_Boolean_Class, L"True");
    True = NEW_t(Type_Boolean);
    HEADER(True) = (Object)True_Class;
    True_Const = new_AST_Constant((Object) True);
}

void pre_init_Type_Boolean()
{
    Type_Boolean_Class = new_Named_Class((Object)Type_Object_Class, L"Type_Boolean");     
    pre_init_Type_True();
    pre_init_Type_False();
}

/* ========================================================================== */

AST_Constant get_bool_const(bool value)
{
    return value ? True_Const : False_Const;
}

Type_Boolean get_bool(bool value)
{
    return value ? True : False;
}

/* ========================================================================== */

NATIVE0(Type_Boolean_asBoolean)
    // just push myself
}

/* ========================================================================== */

NATIVE0(True_asString)
    push_EXP(new_Type_String(L"#True"));
}

NATIVE0(True_asType_SmallInt)
    push_EXP(new_Type_SmallInt(1));
}

NATIVE1(True_ifFalse_)}

NATIVE1(True_ifTrue_)

}

NATIVE(True_not)
    push_EXP(False);
}

/* ========================================================================== */

NATIVE0(False_asString)
    push_EXP(new_Type_String(L"#False"));
}

NATIVE0(False_asType_SmallInt)
    push_EXP(new_Type_SmallInt(0));
}

NATIVE1(False_ifTrue_)}

NATIVE1(False_ifFalse_)

}

NATIVE(False_not)
    push_EXP(True);
}

/* ========================================================================== */

void post_init_Type_True()
{
    store_native_method(True_Class, SMB_ifTrue_,    NM_True_ifTrue_);
    store_native_method(True_Class, SMB_ifFalse_,   NM_True_ifFalse_);
    store_native_method(True_Class, SMB_not,        NM_True_not);
    store_native_method(True_Class, SMB_asString,   NM_True_asString);
    store_native_method(True_Class, SMB_asSmallInt, NM_True_asType_SmallInt);
}

void post_init_Type_False()
{
    store_native_method(False_Class, SMB_ifTrue_,    NM_False_ifTrue_);
    store_native_method(False_Class, SMB_ifFalse_,   NM_False_ifFalse_);
    store_native_method(False_Class, SMB_not,        NM_False_not);
    store_native_method(False_Class, SMB_asString,   NM_False_asString);
    store_native_method(False_Class, SMB_asSmallInt, NM_False_asType_SmallInt);
}

void post_init_Type_Boolean()
{
    store_native_method(Type_Boolean_Class, SMB_asBoolean, NM_Type_Boolean_asBoolean);
    post_init_Type_True();
    post_init_Type_False();
}

