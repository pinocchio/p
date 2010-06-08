#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Continue.h>

/* ========================================================================= */

Runtime_Continue new_Runtime_Continue()
{
    NEW_OBJECT(Runtime_Continue);
    return result;
}

Runtime_Continue new_Runtime_Continue_offset(int offset)
{
    Runtime_Continue cont = new_Runtime_Continue();
    cont->exp_offset      = EXP_size() - offset;
    cont->cnt_offset      = CNT_size();
    cont->iss             = (Optr)tget(_ISS_);
    cont->env             = (Optr)current_env();
    return cont;
}

/* ========================================================================= */

void Runtime_Continue_escape(Runtime_Continue cont, Optr return_value)
{
    // restore the stack
    tset(_EXP_, cont->exp_offset + &tget(Double_Stack)[-1]);
    tset(_CNT_, (&tget(Double_Stack)[STACK_SIZE]) - cont->cnt_offset);
    tset(_ISS_, cont->iss);
    set_env(cont->env);
    // Overwrite the top of stack that created the continue.
    poke_EXP(0, return_value);
}

NATIVE1(Runtime_Continue_escape_)
    Runtime_Continue_escape((Runtime_Continue)self, NATIVE_ARG(0));
}

NATIVE1(Runtime_Continue_on_)
    Runtime_Continue cont = new_Runtime_Continue_offset(argc + 1);
    Optr closure        = NATIVE_ARG(0);
    poke_EXP(0, cont);
    apply(closure, 1);
}

/* ========================================================================= */

void post_init_Runtime_Continue()
{
    // LAYOUT TODO
    // Array layout = (Array)Runtime_Continue_Class->layout;
    // HEADER(layout->values[0]) = UIntSlot_Class;
    // HEADER(layout->values[1]) = UIntSlot_Class;
    Dictionary natives = add_plugin(L"Reflection.Reflection");
    store_native(natives, SMB_continueEscape_message_, NM_Runtime_Continue_escape_);
    store_native(natives, SMB_continueOn_message_,     NM_Runtime_Continue_on_);
}
