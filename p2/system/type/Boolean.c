
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Boolean.h>

/* ========================================================================= */

Type_Class Type_Boolean_Class;
Type_Class True_Class;
Type_Class False_Class;

AST_Constant False_Const;
Type_Boolean False;

AST_Constant True_Const;
Type_Boolean True;

/* ========================================================================= */

void pre_init_Type_False() {
    False_Class = new_Named_Class((Object)Type_Boolean_Class,
                                  L"False",
                                  create_type(1, OBJECT));
    False = NEW_t(Type_Boolean);
    HEADER(False) = (Object)False_Class;
    False_Const = new_AST_Constant((Object) False);
}

void pre_init_Type_True()
{
    True_Class = new_Named_Class((Object)Type_Boolean_Class,
                                 L"True",
                                 create_type(1, OBJECT));
    True = NEW_t(Type_Boolean);
    HEADER(True) = (Object)True_Class;
    True_Const = new_AST_Constant((Object) True);
}

void pre_init_Type_Boolean()
{
    Type_Boolean_Class = new_Named_Class((Object)Type_Object_Class,
                                         L"Type_Boolean",
                                         create_type(1, OBJECT));     
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
    poke_EXP(1, new_Type_String(L"#True"));
}

NATIVE0(True_asSmallInt)
    poke_EXP(1, new_Type_SmallInt(1));
}

NATIVE(True_not)
    poke_EXP(1, False);
}

NATIVE1(True_ifFalse_)
    poke_EXP(1, Nil);
}

METHOD(True_ifTrue_, 1, 1)
    /* TODO look at making this native */
    AST_Variable arg = new_AST_Variable(L"ifTrue");
    arg->key = (Object)body;
    arg->index = 0;
    AST_Send send = new_AST_Send((Object)arg, (Object)SMB_apply, empty_Type_Array);
    ADD_STATEMENT(send); 
    return method;
}

METHOD(True_ifTrue_ifFalse_, 2, 1)
    /* TODO look at making this native */
    AST_Variable arg = new_AST_Variable(L"ifTrue");
    arg->key = (Object)body;
    arg->index = 0;
    AST_Send send = new_AST_Send((Object)arg, (Object)SMB_apply, empty_Type_Array);
    ADD_STATEMENT(send); 
    return method;
}

/* ========================================================================= */

void post_init_Type_True()
{
    store_closure(       True_Class, SMB_ifTrue_,            True_ifTrue_());
    store_native_method(True_Class, SMB_ifFalse_,           NM_True_ifFalse_);
    store_closure(       True_Class, SMB_ifTrue_ifFalse_,    True_ifTrue_ifFalse_());
    store_native_method(True_Class, SMB_not,                NM_True_not);
    store_native_method(True_Class, SMB_asString,           NM_True_asString);
    store_native_method(True_Class, SMB_asSmallInt,         NM_True_asSmallInt);
}

/* ========================================================================= */

NATIVE0(False_asString)
    poke_EXP(1, new_Type_String(L"#False"));
}

NATIVE0(False_asSmallInt)
    poke_EXP(1, new_Type_SmallInt(0));
}

NATIVE(False_not)
    poke_EXP(1, True);
}

NATIVE1(False_ifTrue_)
    poke_EXP(1, Nil);
}

METHOD(False_ifFalse_, 1, 1)
    /* TODO look at making this native */
    AST_Variable arg = new_AST_Variable(L"ifFalse");
    arg->key = (Object)body;
    arg->index = 0;
    AST_Send send = new_AST_Send((Object)arg, (Object)SMB_apply, empty_Type_Array);
    ADD_STATEMENT(send); 
    return method;
}

METHOD(False_ifTrue_ifFalse_, 2, 1)
    /* TODO look at making this native */
    AST_Variable arg = new_AST_Variable(L"ifFalse");
    arg->key = (Object)body;
    arg->index = 1;
    AST_Send send = new_AST_Send((Object)arg, (Object)SMB_apply, empty_Type_Array);
    ADD_STATEMENT(send); 
    return method;
}

/* ========================================================================= */

void post_init_Type_False()
{
    store_native_method(False_Class, SMB_ifTrue_,           NM_False_ifTrue_);
    store_closure(       False_Class, SMB_ifFalse_,          False_ifFalse_());
    store_closure(       False_Class, SMB_ifTrue_ifFalse_,   False_ifTrue_ifFalse_());
    store_native_method(False_Class, SMB_not,               NM_False_not);
    store_native_method(False_Class, SMB_asString,          NM_False_asString);
    store_native_method(False_Class, SMB_asSmallInt,        NM_False_asSmallInt);
}


/* ========================================================================= */

NATIVE0(Type_Boolean_asBoolean)
    poke_EXP(1, self);
}

/* ========================================================================= */


void post_init_Type_Boolean()
{
    store_native_method(Type_Boolean_Class, SMB_asBoolean, NM_Type_Boolean_asBoolean);
    post_init_Type_True();
    post_init_Type_False();
}

