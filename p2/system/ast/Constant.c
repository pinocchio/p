
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Constant.h>

/* ======================================================================== */

Type_Class Constant_Class;

/* ======================================================================== */

extern AST_Constant new_Constant(Object constant)
{
    AST_Constant   result = NEW_t(AST_Constant);
    HEADER(result)        = (Object)Constant_Class;
    result->constant      = constant;
    return result;
}

extern void pre_initialize_Constant()
{
    Constant_Class = new_Named_Class((Object)Object_Class, L"Constant");
}

/* ======================================================================== */

extern void AST_Constant_eval(AST_Constant self)
{
    poke_EXP(1, self->constant);
}

/* ======================================================================== */


extern void post_initialize_Constant()
{

}

