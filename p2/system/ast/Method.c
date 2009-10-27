
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Method.h>

/* ========================================================================= */

Type_Class AST_Method_Class;

/* ========================================================================= */

void pre_init_AST_Method()
{
    AST_Method_Class = new_Named_Class((Object)Type_Object_Class,
                                       L"AST_Method",
                                       create_type(AST_METHOD_SIZE, OBJECT));
}

/* ========================================================================= */



/* ========================================================================= */

void post_init_AST_Method()
{

}
