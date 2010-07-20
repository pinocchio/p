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
    cont->exp_offset = EXP_SIZE() - offset + 1;
    cont->cnt_offset = CNT_SIZE() + 1;
    cont->env        = (Optr)current_env();
    return cont;
}

/* ========================================================================= */

void Continue_escape(Continue cont, Optr return_value)
{
    // restore the stack
    tset(_EXP_, cont->exp_offset + &tget(Double_Stack)[-1]);
    tset(_CNT_, (threaded**)(&tget(Double_Stack)[STACK_SIZE]) - cont->cnt_offset);
    set_env(cont->env);
    t_return();
    POKE_EXP(0, return_value);
}

NATIVE1(Continue_escape_)
    Continue_escape((Continue)self, NATIVE_ARG(0));
}

NATIVE1(Continue_on_)
    Continue cont = new_Continue_offset(argc + 1);
    Optr closure  = NATIVE_ARG(0);
    POKE_EXP(0, cont);
    apply(closure, 1);
}

/* ========================================================================= */

void post_init_Continue()
{
    // LAYOUT TODO
    // Array layout = (Array)Continue_Class->layout;
    // HEADER(layout->values[0]) = UIntSlot_Class;
    // HEADER(layout->values[1]) = UIntSlot_Class;
    Dictionary natives = add_plugin(L"Reflection.Reflection");
    store_native(natives, L"continueEscape:message:", NM_Continue_escape_);
    store_native(natives, L"continueOn:message:",     NM_Continue_on_);
}
