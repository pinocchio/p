#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Continuation.h>

/* ========================================================================= */

Continuation new_Continuation()
{
    NEW_OBJECT(Continuation);
    return result;
}

/* ========================================================================= */

NATIVE1(Continuation_continue_)
    // LOGFUN;
    Continuation cont = (Continuation)self;
    Optr * ds = tget(Double_Stack);
    Optr arg  = NATIVE_ARG(0);
    // restore the stack
    tset(_EXP_, cont->exp_stack->size + (&ds[-1]));
    tset(_CNT_, (threaded**)(&ds[STACK_SIZE]) - cont->cnt_stack->size);

    int i;
    for (i = 0; i < cont->exp_stack->size; i++) {
        ds[i] = cont->exp_stack->values[i];
    }

    ds = (Optr *)tget(_CNT_);
    
    for (i = 0; i < cont->cnt_stack->size; i++) {
        ds[i] = cont->cnt_stack->values[i];
    }

    set_env(cont->env);
    t_return();
    PUSH_EXP(arg);
}

NATIVE1(Continuation_on_)
    Continuation cont    = new_Continuation();
    Optr closure         = NATIVE_ARG(0);
    cont->exp_stack      = new_Array(EXP_SIZE() - (argc + 1),
                                     tget(Double_Stack));
    PUSH_CNT(pc);
    cont->cnt_stack      = new_Array(CNT_SIZE(),
                                     (Optr *)tget(_CNT_));
    ZAP_CNT();
    cont->env            = (Optr)current_env();

    POKE_EXP(0, cont);
    apply(closure, 1);
}

/* ========================================================================= */

void post_init_Continuation()
{
    PLUGIN natives = add_plugin(L"Reflection.Reflection");
    store_native(natives, L"continuationContinue:message:", 
                          NM_Continuation_continue_);
    store_native(natives, L"continuationOn:message:",       
                          NM_Continuation_on_);
}
