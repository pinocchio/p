#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Continue.h>

/* ========================================================================= */

Type_Class AST_Continue_Class;

/* ========================================================================= */

AST_Continue new_AST_Continue()
{
    NEW_OBJECT(AST_Continue);
    return result;
}

void pre_init_AST_Continue()
{
    AST_Continue_Class = new_Named_Class((Object)Type_Object_Class,
                                         L"AST_Continue",
                                         create_type(4, OBJECT));
}

/* ========================================================================= */

NATIVE1(AST_Continue_escape_)
    LOGFUN;
    AST_Continue ast_cont = (AST_Continue)self;
    Object arg = NATIVE_ARG(0);
    // restore the stack
    _EXP_ = ast_cont->exp_offset + &(Double_Stack[0]);
    _CNT_ = (cont*)(&(Double_Stack[STACK_SIZE]) - ast_cont->cnt_offset);
    set_env(ast_cont->Env);
    // Overwrite the top of stack that created the continue.
    poke_EXP(1, arg);
}

/* ========================================================================= */

void post_init_AST_Continue()
{
    store_native_method(AST_Continue_Class, SMB_escape_, NM_AST_Continue_escape_);
}
