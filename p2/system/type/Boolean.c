
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Boolean.h>

/* ======================================================================== */

Type_Class Boolean_Class;
Type_Class True_Class;
Type_Class False_Class;

AST_Constant False_Const;
Type_Boolean False;

AST_Constant True_Const;
Type_Boolean True;

/* ======================================================================== */

void pre_init_Type_False() {
    False_Class = new_Named_Class((Object)Boolean_Class, L"False");
    
    False = NEW_t(Type_Boolean);
    HEADER(False) = (Object)False_Class;
    False_Const = new_Constant((Object) False);
}

void pre_init_Type_True()
{
    True_Class = new_Named_Class((Object)Boolean_Class, L"True");
    
    True = NEW_t(Type_Boolean);
    HEADER(True) = (Object)True_Class;
    True_Const = new_Constant((Object) True);
}

void pre_init_Type_Boolean()
{
    Boolean_Class = new_Named_Class((Object)Object_Class, L"Boolean");     
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
    store_native_method(True_Class, SMB_ifTrue_,    True_ifTrue_);
    store_native_method(True_Class, SMB_ifFalse_,   True_ifFalse_);
    store_native_method(True_Class, SMB_not,        True_not);
    store_native_method(True_Class, SMB_asString,   True_asString);
    store_native_method(True_Class, SMB_asType_SmallInt, True_asType_SmallInt);
}

void post_init_Type_False()
{
    store_native_method(False_Class, SMB_ifTrue_,    False_ifTrue_);
    store_native_method(False_Class, SMB_ifFalse_,   False_ifFalse_);
    store_native_method(False_Class, SMB_not,        False_not);
    store_native_method(False_Class, SMB_asString,   False_asString);
    store_native_method(False_Class, SMB_asType_SmallInt, False_asType_SmallInt);
}

void post_init_Type_Boolean()
{
    post_init_Type_True();
    post_init_Type_False();
}

