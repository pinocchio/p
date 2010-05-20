#include <stdlib.h>
#include <stdio.h>
#include <system/type/Boolean.h>

/* ========================================================================= */

DECLARE_CLASS(Type_Boolean);
DECLARE_CLASS(True);
DECLARE_CLASS(False);

AST_Constant False_Const;
Type_Boolean False;

AST_Constant True_Const;
Type_Boolean True;

/* ========================================================================= */

void pre_init_Type_False() {
    False_Class = new_Class(Type_Boolean_Class);
    False         = NEW_t(Type_Boolean);
    False->hash   = Type_Object_hash((Type_Object)False);
    HEADER(False) = False_Class;
}

void pre_init_Type_True()
{
    True_Class = new_Class(Type_Boolean_Class);
    True         = NEW_t(Type_Boolean);
    True->hash   = Type_Object_hash((Type_Object)True);
    HEADER(True) = True_Class;
}

void pre_init_Type_Boolean()
{
    Type_Boolean_Class = new_Class(Type_Object_Class);
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

void CNT_loop_apply()
{
    Object closure = peek_EXP(1);
    push_EXP(closure);
    Runtime_BlockClosure_apply((Runtime_BlockClosure)closure, 0);
}

/* ========================================================================= */

NATIVE1(Type_True_whileTrue_)
    push_CNT(loop_apply);
    push_EXP(Nil);
}

NATIVE1(Type_False_whileFalse_)
    push_CNT(loop_apply);
    push_EXP(Nil);
}

NATIVE2(Type_True_ifTrue_ifFalse_)
    Object closure = NATIVE_ARG(0);
    zapn_EXP(2);
    Runtime_BlockClosure_apply((Runtime_BlockClosure)closure, 0);
}

NATIVE2(Type_False_ifTrue_ifFalse_)
    Object closure = NATIVE_ARG(1);
    zapn_EXP(2);
    Runtime_BlockClosure_apply((Runtime_BlockClosure)closure, 0);
}

NATIVE0(Type_Boolean_hash)
    RETURN_FROM_NATIVE(((Type_Boolean)self)->hash)
}

void post_init_Type_Boolean()
{
    True_Const  = new_AST_Constant((Object)True);
    False_Const = new_AST_Constant((Object)False);
    Collection_Dictionary natives = add_plugin(L"Type.Boolean");
    store_native(natives, SMB_hash,       NM_Type_Boolean_hash);
    
    natives = add_plugin(L"Type.True");
    store_native(natives, new_Type_Symbol_cached(L"whileTrue:"), NM_Type_True_whileTrue_);
    store_native(natives, new_Type_Symbol_cached(L"ifTrue:ifFalse:"), NM_Type_True_ifTrue_ifFalse_);

    natives = add_plugin(L"Type.False");
    store_native(natives, new_Type_Symbol_cached(L"whileFalse:"), NM_Type_False_whileFalse_);
    store_native(natives, new_Type_Symbol_cached(L"ifTrue:ifFalse:"), NM_Type_False_ifTrue_ifFalse_);
}

