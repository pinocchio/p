
#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>
#include <system/ast/Continue.h>
#include <system/ast/Callec.h>

/* ======================================================================== */

/* ======================================================================== */

extern AST_Callec new_Callec()
{
    AST_Callec result = NEW_t(AST_Callec);
    HEADER(result)    = (Object)Callec_Class;
    result->cont      = new_Continue((Object)result);
    return result;
}

extern void pre_initialize_Callec()
{
    Callec_Class = new_Named_Class((Object)Object_Class, L"Callec");
}

/* ======================================================================== */

extern void AST_Callec_eval(AST_Callec self)
{
    LOGFUN;
    self->cont->EXP = _EXP_;
    self->cont->CNT = _CNT_;
    push_EXP(self->target);
    push_CNT(CNT_send_Eval);
}

/* ======================================================================== */

extern void post_initialize_Callec()
{
}