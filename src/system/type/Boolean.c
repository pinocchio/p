#include <stdlib.h>
#include <stdio.h>
#include <system/type/Boolean.h>

/* ========================================================================= */

Object True;
Object False;
AST_Constant False_Const;
AST_Constant True_Const;

/* ========================================================================= */

Object get_bool(bool value)
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

/* ========================================================================= */

void post_init_Type_Boolean()
{
    True         = instantiate(Type_True_Class);
    True_Const   = new_AST_Constant((Object)True);

    False        = instantiate(Type_False_Class);
    False_Const  = new_AST_Constant((Object)False);

    Collection_Dictionary natives;
    
    natives = add_plugin(L"Type.True");
    store_native(natives, new_Type_Symbol_cached(L"whileTrue:"), NM_Type_True_whileTrue_);
    store_native(natives, new_Type_Symbol_cached(L"ifTrue:ifFalse:"), NM_Type_True_ifTrue_ifFalse_);

    natives = add_plugin(L"Type.False");
    store_native(natives, new_Type_Symbol_cached(L"whileFalse:"), NM_Type_False_whileFalse_);
    store_native(natives, new_Type_Symbol_cached(L"ifTrue:ifFalse:"), NM_Type_False_ifTrue_ifFalse_);
}

