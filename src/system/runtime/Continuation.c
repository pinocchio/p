#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Continuation.h>

/* ========================================================================= */

Runtime_Continuation new_Runtime_Continuation()
{
    NEW_OBJECT(Runtime_Continuation);
    return result;
}

/* ========================================================================= */

NATIVE1(Runtime_Continuation_continue_)
    // LOGFUN;
    Runtime_Continuation cont = (Runtime_Continuation)self;
    Object * ds = tget(Double_Stack);
    Object arg  = NATIVE_ARG(0);
    // restore the stack
    tset(_EXP_, cont->exp_stack->size + (&ds[-1]));
    tset(_CNT_, (&ds[STACK_SIZE]) - cont->cnt_stack->size);

    int i;
    for (i = 0; i < cont->exp_stack->size; i++) {
        ds[i] = cont->exp_stack->values[i];
    }

    ds = tget(_CNT_);
    
    for (i = 0; i < cont->cnt_stack->size; i++) {
        ds[i] = cont->cnt_stack->values[i];
    }

    set_env(cont->env);
    tset(_ISS_, cont->iss);
    // Overwrite the top of stack that created the continuation.
    poke_EXP(0, arg);
}

NATIVE1(Runtime_Continuation_on_)
    Runtime_Continuation cont = new_Runtime_Continuation();
    cont->exp_stack = new_Array(EXP_size() - (argc + 1),
                                     tget(Double_Stack));
    cont->cnt_stack = new_Array(CNT_size(), tget(_CNT_));
    cont->iss       = (Object)tget(_ISS_);
    cont->env       = (Object)current_env();
    Object closure  = NATIVE_ARG(0);
    poke_EXP(0, cont);
    apply(closure, 1);
}

/* ========================================================================= */

void post_init_Runtime_Continuation()
{
    Dictionary natives = add_plugin(L"Reflection.Reflection");
    store_native(natives, SMB_continuationContinue_message_, 
                          NM_Runtime_Continuation_continue_);
    store_native(natives, SMB_continuationOn_message_,       
                          NM_Runtime_Continuation_on_);
}
