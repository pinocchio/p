
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Info.h>

/* ======================================================================== */

Type_Class AST_Info_Class;

/* ======================================================================== */

AST_Info new_AST_info()
{
    NEW_OBJECT(AST_Info);
    return result;
}

void pre_init_AST_Info()
{
    AST_Info_Class = new_Named_Class((Object)Type_Object_Class, L"AST_Info");
}

/* ======================================================================== */



/* ======================================================================== */

void post_init_AST_Info()
{

}
