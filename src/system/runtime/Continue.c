#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Continue.h>

/* ========================================================================= */

Type_Class Runtime_Continue_Class;

/* ========================================================================= */

Runtime_Continue new_Runtime_Continue()
{
    NEW_OBJECT(Runtime_Continue);
    return result;
}

void pre_init_Runtime_Continue()
{
    Runtime_Continue_Class =
        new_Class_named(Type_Object_Class,
                        L"Continue",
                        CREATE_OBJECT_TAG(RUNTIME_CONTINUE));
}

/* ========================================================================= */

NATIVE1(Runtime_Continue_escape_)
    // LOGFUN;
    REFLECT(SMB_continue_escape_);
    Runtime_Continue ast_cont = (Runtime_Continue)self;
    Object arg = NATIVE_ARG(0);
    // restore the stack
    tset(_EXP_, ast_cont->exp_offset + &(tget(Double_Stack)[0]));
    tset(_CNT_, (cont*)(&(tget(Double_Stack)[STACK_SIZE]) - ast_cont->cnt_offset));
    set_env(ast_cont->Env);
    // Overwrite the top of stack that created the continue.
    poke_EXP(0, arg);
}

static void apply(Object closure, uns_int argc)
{
    // TODO in the alternative case, send "apply" message.
    // LOG("cls: %ls\n", HEADER(closure)->name->value);
    assert0(HEADER(closure) == Runtime_BlockClosure_Class);
    Runtime_BlockClosure_apply((Runtime_BlockClosure)closure, argc);
}

NATIVE1(Runtime_Continue_on_)
    // LOGFUN;
    REFLECT(SMB_continue_on_);
    Runtime_Continue runtimeContinue = new_Runtime_Continue();
    runtimeContinue->exp_offset      = (tget(_EXP_) - &(tget(Double_Stack)[0]) - (argc + 1));
    runtimeContinue->cnt_offset      = (&(tget(Double_Stack)[STACK_SIZE]) - (Object*)tget(_CNT_));
    runtimeContinue->Env             = (Object)current_env();
    // optimization, reuse array object.
    // make sure to undo when introducing others
    // TODO do this more cleanly!
    Object closure = NATIVE_ARG(0);
    poke_EXP(0, runtimeContinue);
    apply(closure, 1);
}

/* ========================================================================= */

void post_init_Runtime_Continue()
{
    Collection_Dictionary natives = add_plugin(L"Runtime.Continue");
    store_native(natives, SMB_escape_, NM_Runtime_Continue_escape_);
    store_native(natives, SMB_on_,     NM_Runtime_Continue_on_);
}
