
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Constant.h>

/* ======================================================================== */

Type_Class Constant_Class;

/* ======================================================================== */

AST_Constant new_Constant(Object constant)
{
    AST_Constant   result = NEW_t(AST_Constant);
    HEADER(result)        = (Object)Constant_Class;
    result->constant      = constant;
    return result;
}

void pre_init_Constant()
{
    Constant_Class = new_Named_Class((Object)Type_Object_Class, L"Constant");
}

/* ======================================================================== */

void AST_Constant_eval(AST_Constant self)
{
    poke_EXP(1, self->constant);
}

/* ======================================================================== */


void post_init_Constant()
{

}

