
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Block.h>

/* ======================================================================== */

Type_Class AST_Block_Class;

/* ======================================================================== */

void pre_init_AST_Block()
{
    AST_Block_Class = new_Named_Class((Object)Type_Object_Class, L"AST_Block");
}

/* ======================================================================== */



/* ======================================================================== */

void post_init_AST_Block()
{

}
