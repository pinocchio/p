
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Continue.h>

/* ======================================================================== */

Type_Class Continue_Class;

/* ======================================================================== */

AST_Continue new_Continue(Object target)
{
    AST_Continue result = NEW_t(AST_Continue);
    HEADER(result)        = (Object)Continue_Class;
    return result;
}

void pre_init_Continue()
{
    Continue_Class = new_Named_Class((Object)Object_Class, L"Continue");
}

/* ======================================================================== */

NATIVE1(NM_AST_Continue_eval)
    LOGFUN;
    AST_Continue ast_cont = (AST_Continue) self;
    // restore the stack
    _EXP_ = ast_cont->EXP;
    _CNT_ = ast_cont->CNT;
    // TODO restore the env
    
    // insert the continuation
    push_EXP(args->values[0]);
    //push_CNT(CNT_send_Eval);
}

/* ======================================================================== */

void post_init_Continue()
{
    store_native_method(Continue_Class,SMB_eval, NM_AST_Continue_eval);
}