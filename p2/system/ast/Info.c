
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Info.h>

/* ======================================================================== */

Type_Class Info_Type_Class;

/* ======================================================================== */

void pre_init_Info()
{
    Info_Type_Class = new_Named_Type_Class((Object)Type_Object_Type_Class, L"Info");
}

/* ======================================================================== */



/* ======================================================================== */

void post_init_Info()
{

}
