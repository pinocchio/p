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
    Runtime_Continue_Class = new_Class_named((Object)Type_Object_Class,
                                         L"Runtime_Continue",
                                         CREATE_OBJECT_TAG(RUNTIME_CONTINUE));
}

/* ========================================================================= */

NATIVE1(Runtime_Continue_escape_)
    LOGFUN;
    printf("Continue\n");
    Runtime_Continue ast_cont = (Runtime_Continue)self;
    Object arg = NATIVE_ARG(0);
    // restore the stack
    _EXP_ = ast_cont->exp_offset + &(Double_Stack[0]);
    _CNT_ = (cont*)(&(Double_Stack[STACK_SIZE]) - ast_cont->cnt_offset);
    set_env(ast_cont->Env);
    // Overwrite the top of stack that created the continue.
    poke_EXP(0, arg);
}

/* ========================================================================= */

void post_init_Runtime_Continue()
{
    store_native_method(Runtime_Continue_Class, SMB_escape_, NM_Runtime_Continue_escape_);
}
