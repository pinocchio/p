
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Constant.h>

/* ========================================================================= */

Type_Class AST_Constant_Class;

/* ========================================================================= */

AST_Constant new_AST_Constant(Object constant)
{
    NEW_OBJECT(AST_Constant);
    result->constant = constant;
    result->info     = empty_AST_Info;
    return result;
}

void pre_init_AST_Constant()
{
    AST_Constant_Class = new_Named_Class((Object)Type_Object_Class,
                                         L"AST_Constant",
                                         create_type(2, OBJECT));
}

/* ========================================================================= */

void AST_Constant_eval(AST_Constant self)
{
    // replace self with the constant
    poke_EXP(0, self->constant);
}

/* ========================================================================= */


void post_init_AST_Constant()
{

}

