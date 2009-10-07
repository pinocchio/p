
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Block.h>

/* ======================================================================== */

Type_Class AST_Block_Class;

/* ======================================================================== */

AST_Block new_AST_Block(unsigned int paramCount, Type_Array body)
{
    NEW_OBJECT(AST_Block);
    result->body = body;
    result->paramCount = new_Type_SmallInt(paramCount);
    return result;
}

void pre_init_AST_Block()
{
    AST_Block_Class = new_Named_Class((Object)Type_Object_Class, L"AST_Block");
}

/* ======================================================================== */



/* ======================================================================== */

void post_init_AST_Block()
{

}
