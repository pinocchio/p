#include <stdlib.h>
#include <stdio.h>
#include <system/type/Boolean.h>

/* ========================================================================= */

Optr true;
Optr false;
Constant false_Const;
Constant true_Const;

/* ========================================================================= */

Optr get_bool(bool value)
{
    return value ? true : false;
}

/* ========================================================================= */

NATIVE2(True_ifTrue_ifFalse_)
    Optr closure = NATIVE_ARG(0);
	ZAP_NATIVE_INPUT();
	PUSH_EXP(closure);
    apply(closure, 0);
}

NATIVE2(False_ifTrue_ifFalse_)
    Optr closure = NATIVE_ARG(1);
	ZAP_NATIVE_INPUT();
	PUSH_EXP(closure);
    apply(closure, 0);
}

/* ========================================================================= */

void post_init_Boolean()
{
    true         = instantiate(True_Class);
    true_Const   = new_Constant((Optr)true);

    false        = instantiate(False_Class);
    false_Const  = new_Constant((Optr)false);

    Dictionary natives;
    
    natives = add_plugin(L"Type.True");
    store_native(natives, new_Symbol_cached(L"ifTrue:ifFalse:"), NM_True_ifTrue_ifFalse_);

    natives = add_plugin(L"Type.False");
    store_native(natives, new_Symbol_cached(L"ifTrue:ifFalse:"), NM_False_ifTrue_ifFalse_);
}

