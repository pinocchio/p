
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Boolean.h>

/* ======================================================================== */
AST_Constant False_Const;
Type_Boolean False;

AST_Constant True_Const;
Type_Boolean True;

extern void pre_initialize_Type_False() {
    False_Class = new_Named_Class((Object)Boolean_Class, L"False");
    
    False = NEW_t(Type_Boolean);
    HEADER(False) = (Object)False_Class;
    False_Const = new_Constant((Object) False);
}

extern void pre_initialize_Type_True()
{
    True_Class = new_Named_Class((Object)Boolean_Class, L"True");
    
    True = NEW_t(Type_Boolean);
    HEADER(True) = (Object)True_Class;
    True_Const = new_Constant((Object) True);
}

extern void pre_initialize_Type_Boolean()
{
    Boolean_Class = new_Named_Class((Object)Object_Class, L"Boolean");     
    pre_initialize_Type_True();
    pre_initialize_Type_False();
}

/* ========================================================================== */

extern AST_Constant get_bool_const(bool value)
{
    return value ? True_Const : False_Const;
}

extern Type_Boolean get_bool(bool value)
{
    return value ? True : False;
}

/* ========================================================================== */

NATIVE0(True_asString)
    push_EXP(new_String(L"#True"));
}

NATIVE0(True_asSmallInt)
    push_EXP(new_SmallInt(1));
}

NATIVE1(True_ifFalse_)}

NATIVE1(True_ifTrue_)

}

NATIVE(True_not)
    push_EXP(False);
}

/* ========================================================================== */

NATIVE0(False_asString)
    push_EXP(new_String(L"#False"));
}

NATIVE0(False_asSmallInt)
    push_EXP(new_SmallInt(0));
}

NATIVE1(False_ifTrue_)}

NATIVE1(False_ifFalse_)

}

NATIVE(False_not)
    push_EXP(True);
}

/* ========================================================================== */

extern void post_initialize_Type_True()
{
    store_native_method(True_Class, SMB_ifTrue_,    True_ifTrue_);
    store_native_method(True_Class, SMB_ifFalse_,   True_ifFalse_);
    store_native_method(True_Class, SMB_not,        True_not);
    store_native_method(True_Class, SMB_asString,   True_asString);
    store_native_method(True_Class, SMB_asSmallInt, True_asSmallInt);
}

extern void post_initialize_Type_False()
{
    store_native_method(False_Class, SMB_ifTrue_,    False_ifTrue_);
    store_native_method(False_Class, SMB_ifFalse_,   False_ifFalse_);
    store_native_method(False_Class, SMB_not,        False_not);
    store_native_method(False_Class, SMB_asString,   False_asString);
    store_native_method(False_Class, SMB_asSmallInt, False_asSmallInt);
}

extern void post_initialize_Type_Boolean()
{
    post_initialize_Type_True();
    post_initialize_Type_False();
}

