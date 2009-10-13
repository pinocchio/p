
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Continue.h>

/* ========================================================================= */

Type_Class AST_Continue_Class;

/* ========================================================================= */

AST_Continue new_AST_Continue(Object target)
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

NATIVE1(AST_Continue_eval)
    LOGFUN;
    AST_Continue ast_cont = (AST_Continue) self;
    // restore the stack
    _EXP_ = ast_cont->EXP;
    _CNT_ = ast_cont->CNT;
    // TODO restore the env
    
    // insert the continuation
    poke_EXP(1, args->values[0]);
    //push_CNT(send_Eval);
}

/* ========================================================================= */

void post_init_AST_Continue()
{
    store_native_method(AST_Continue_Class, SMB_eval, NM_AST_Continue_eval);
}
