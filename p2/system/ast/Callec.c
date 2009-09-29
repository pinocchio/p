
#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>
#include <system/ast/Continue.h>
#include <system/ast/Callec.h>

/* ======================================================================== */

Type_Class Callec_Type_Class;

/* ======================================================================== */

AST_Callec new_Callec()
{
    AST_Callec result = NEW_t(AST_Callec);
    HEADER(result)    = (Object)Callec_Type_Class;
    result->cont      = new_Continue((Object)result);
    return result;
}

void pre_init_Callec()
{
    Callec_Type_Class = new_Named_Type_Class((Object)Type_Object_Type_Class, L"Callec");
}

/* ======================================================================== */

void AST_Callec_eval(AST_Callec self)
{
    LOGFUN;
    self->cont->EXP = _EXP_;
    self->cont->CNT = _CNT_;
    push_EXP(self->target);
    push_CNT(CNT_send_Eval);
}

/* ======================================================================== */

void post_init_Callec()
{
}