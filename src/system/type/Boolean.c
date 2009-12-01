#include <stdlib.h>
#include <stdio.h>
#include <system/type/Boolean.h>

/* ========================================================================= */

Type_Class Type_Boolean_Class;
DECLARE_CLASS(True);
DECLARE_CLASS(False);

AST_Constant False_Const;
Type_Boolean False;

AST_Constant True_Const;
Type_Boolean True;

/* ========================================================================= */

void pre_init_Type_False() {
    False_Class = new_Class_named((Object)Type_Boolean_Class,
                                  L"False",
                                  CREATE_OBJECT_TAG(BOOL));
    REFER_TO(False);
    False = NEW_t(Type_Boolean);
    HEADER(False) = (Object)False_Class;
    False_Const = new_AST_Constant((Object) False);
}

void pre_init_Type_True()
{
    True_Class = new_Class_named((Object)Type_Boolean_Class,
                                 L"True",
                                 CREATE_OBJECT_TAG(BOOL));
    REFER_TO(True);
    True = NEW_t(Type_Boolean);
    HEADER(True) = (Object)True_Class;
    True_Const = new_AST_Constant((Object) True);
}

void pre_init_Type_Boolean()
{
    Type_Boolean_Class = new_Class_named((Object)Type_Object_Class,
                                         L"Type_Boolean",
                                         CREATE_OBJECT_TAG(BOOL));
    pre_init_Type_True();
    pre_init_Type_False();
}

/* ========================================================================= */

AST_Constant get_bool_const(bool value)
{
    return value ? True_Const : False_Const;
}

Type_Boolean get_bool(bool value)
{
    return value ? True : False;
}

/* ========================================================================= */

NATIVE0(True_asString)
    RETURN_FROM_NATIVE(new_Type_String(L"#True"));
}

NATIVE0(True_asSmallInt)
    RETURN_FROM_NATIVE(new_Type_SmallInt(1));
}

NATIVE(True_not)
    RETURN_FROM_NATIVE(False);
}

NATIVE1(True_ifFalse_)
    RETURN_FROM_NATIVE(Nil);
}

METHOD(True_ifTrue_, 1, 0, 1)
    /* TODO look at making this native */
    BLOCK_PARAM(body, 0)->name = (Object)new_Type_Symbol(L"ifTrue");
    AST_Send send = new_AST_Send((Object)BLOCK_PARAM(body, 0), (Object)SMB_apply, 0);
    ADD_STATEMENT(send); 
    return method;
}

METHOD(True_ifTrue_ifFalse_, 2, 0, 1)
    /* TODO look at making this native */
    BLOCK_PARAM(body, 0)->name = (Object)new_Type_Symbol(L"ifTrue");
    AST_Send send = new_AST_Send((Object)BLOCK_PARAM(body, 0), (Object)SMB_apply, 0);
    ADD_STATEMENT(send); 
    return method;
}

/* ========================================================================= */

void post_init_Type_True()
{
    store_method(       True_Class, SMB_ifTrue_,            True_ifTrue_());
    store_native_method(True_Class, SMB_ifFalse_,           NM_True_ifFalse_);
    store_method(       True_Class, SMB_ifTrue_ifFalse_,    True_ifTrue_ifFalse_());
    store_native_method(True_Class, SMB_not,                NM_True_not);
    store_native_method(True_Class, SMB_asString,           NM_True_asString);
    store_native_method(True_Class, SMB_asSmallInt,         NM_True_asSmallInt);
}

/* ========================================================================= */

NATIVE0(False_asString)
    RETURN_FROM_NATIVE(new_Type_String(L"#False"));
}

NATIVE0(False_asSmallInt)
    RETURN_FROM_NATIVE(new_Type_SmallInt(0));
}

NATIVE(False_not)
    RETURN_FROM_NATIVE(True);
}

NATIVE1(False_ifTrue_)
    RETURN_FROM_NATIVE(Nil);
}

METHOD(False_ifFalse_, 1, 0, 1)
    /* TODO look at making this native */
    BLOCK_PARAM(body, 0)->name = (Object)new_Type_Symbol(L"ifFalse");
    AST_Send send = new_AST_Send((Object)BLOCK_PARAM(body, 0), (Object)SMB_apply, 0);
    ADD_STATEMENT(send); 
    return method;
}

METHOD(False_ifTrue_ifFalse_, 2, 0, 1)
    /* TODO look at making this native */
    BLOCK_PARAM(body, 1)->name = (Object)new_Type_Symbol(L"ifFalse");
    AST_Send send = new_AST_Send((Object)BLOCK_PARAM(body, 1), (Object)SMB_apply, 0);
    ADD_STATEMENT(send); 
    return method;
}

/* ========================================================================= */

void post_init_Type_False()
{
    store_native_method(False_Class, SMB_ifTrue_,           NM_False_ifTrue_);
    store_method(       False_Class, SMB_ifFalse_,          False_ifFalse_());
    store_method(       False_Class, SMB_ifTrue_ifFalse_,   False_ifTrue_ifFalse_());
    store_native_method(False_Class, SMB_not,               NM_False_not);
    store_native_method(False_Class, SMB_asString,          NM_False_asString);
    store_native_method(False_Class, SMB_asSmallInt,        NM_False_asSmallInt);
}


/* ========================================================================= */

NATIVE0(Type_Boolean_asBoolean)
    poke_EXP(0, self);
}

/* ========================================================================= */


void post_init_Type_Boolean()
{
    store_native_method(Type_Boolean_Class, SMB_asBoolean, NM_Type_Boolean_asBoolean);
    post_init_Type_True();
    post_init_Type_False();
}

