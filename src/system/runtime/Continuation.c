#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Continuation.h>

/* ========================================================================= */

DECLARE_CLASS(Runtime_Continuation);

/* ========================================================================= */

Runtime_Continuation new_Runtime_Continuation()
{
    NEW_OBJECT(Runtime_Continuation);
    return result;
}

void pre_init_Runtime_Continuation()
{
    Runtime_Continuation_Class =
        new_Class_named(Type_Object_Class,
                        L"Continuation",
                        CREATE_OBJECT_TAG(RUNTIME_CONTINUATION));
    
    REFER_TO(Runtime_Continuation);
}

/* ========================================================================= */

NATIVE1(Runtime_Continuation_escape_)
    // LOGFUN;
    Runtime_Continuation ast_cont = (Runtime_Continuation)self;
    Object arg = NATIVE_ARG(0);
    // restore the stack
    tset(_EXP_, ast_cont->exp_stack->size + &(tget(Double_Stack)[0]));
    // TODO copy back all the EXP values!
    tset(_CNT_, (cont*)(&(tget(Double_Stack)[STACK_SIZE]) - ast_cont->cnt_stack->size));
    // TODO copy back all the CNT values!
    // TODO copy back ISS
    set_env(ast_cont->Env);
    // Overwrite the top of stack that created the continuation.
    poke_EXP(0, arg);
}

static void apply(Object closure, uns_int argc)
{
    // TODO in the alternative case, send "apply" message.
    // LOG("cls: %ls\n", HEADER(closure)->name->value);
    assert0(HEADER(closure) == Runtime_BlockClosure_Class);
    Runtime_BlockClosure_apply((Runtime_BlockClosure)closure, argc);
}

NATIVE1(Runtime_Continuation_on_)
    Object * ds = tget(Double_Stack);
    Runtime_Continuation cont = new_Runtime_Continuation();
    cont->exp_stack = new_Type_Array(EXP_size() - (argc + 1), ds);
    cont->cnt_stack = new_Type_Array_raw((&ds[STACK_SIZE]) - (Object*)tget(_CNT_));
    int c = 0;
    while (c < cont->cnt_stack->size) {
        cont->cnt_stack->values[c] = ds[STACK_SIZE - c - 1];
        c++;
    }
    cont->ISS = (Object)tget(_ISS_);
    cont->Env = (Object)current_env();
    Object closure = NATIVE_ARG(0);
    poke_EXP(0, cont);
    apply(closure, 1);
}

/* ========================================================================= */

void post_init_Runtime_Continuation()
{
    Collection_Dictionary natives = add_plugin(L"Reflection.Reflection");
    store_native(natives, SMB_continuationContinue_message_, NM_Runtime_Continuation_escape_);
    store_native(natives, SMB_continuationOn_message_,     NM_Runtime_Continuation_on_);
}
