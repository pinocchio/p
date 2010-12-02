#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Continue.h>

/* ========================================================================= */

Continue new_Continue()
{
    NEW_OBJECT(Continue);
    return result;
}

Continue new_Continue_offset(int offset)
{
    Continue cont    = new_Continue();
    cont->env        = current_env();
    return cont;
}

/* ========================================================================= */

void Continue_escape(Continue cont, Optr return_value)
{
    SET_CONTEXT(cont->env);
    direct_return(return_value);
}

NATIVE1(Continue_escape_)
    Continue_escape((Continue)self, NATIVE_ARG(0));
}

NATIVE1(Continue_on_)
    Continue cont = new_Continue_offset(argc);
    Optr closure  = NATIVE_ARG(0);
    // FIXME new way of closure application!
    apply(closure);
}

/* ========================================================================= */

void post_init_Continue()
{
    // LAYOUT TODO
    // Array layout = (Array)Continue_Class->layout;
    // HEADER(layout->values[0]) = UIntSlot_Class;
    // HEADER(layout->values[1]) = UIntSlot_Class;
    PLUGIN natives = add_plugin(L"Reflection.Reflection");
    store_native(natives, L"continueEscape:message:", NM_Continue_escape_);
    store_native(natives, L"continueOn:message:",     NM_Continue_on_);
}
