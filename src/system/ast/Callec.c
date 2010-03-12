#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

DECLARE_CLASS(AST_Callec)

/* ========================================================================= */

AST_Callec new_AST_Callec(Object target)
{
    NEW_OBJECT(AST_Callec);
    result->target = target;
    return result;
}

void pre_init_AST_Callec()
{
    AST_Callec_Class = new_Class_named(Type_Object_Class,
                                       L"Callec",
                                       CREATE_OBJECT_TAG(AST_CALLEC));
    REFER_TO(AST_Callec);
}

/* ========================================================================= */

static void apply(Object closure, uns_int argc)
{
    // TODO in the alternative case, send "apply" message.
    // LOG("cls: %ls\n", HEADER(closure)->name->value);
    assert0(HEADER(closure) == Runtime_BlockClosure_Class);
    Runtime_BlockClosure_apply((Runtime_BlockClosure)closure, argc);
}

NATIVE1(AST_Callec_on_)
    // LOGFUN;
    Runtime_Continue runtimeContinue = new_Runtime_Continue();
    runtimeContinue->exp_offset      = (_EXP_ - &(Double_Stack[0]) - (argc + 1));
    runtimeContinue->cnt_offset      = (&(Double_Stack[STACK_SIZE]) - (Object*)_CNT_);
    runtimeContinue->Env             = (Object)current_env();
    // optimization, reuse array object.
    // make sure to undo when introducing others
    // TODO do this more cleanly!
    Object closure = NATIVE_ARG(0);
    poke_EXP(0, runtimeContinue);
    apply(closure, 1);
}

/* ========================================================================= */

void post_init_AST_Callec()
{
    Collection_Dictionary natives = add_plugin(L"AST.Callec");
    store_native(natives, SMB_on_, NM_AST_Callec_on_);
}
