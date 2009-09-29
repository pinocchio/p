
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Info.h>

/* ======================================================================== */

Type_Class Info_Class;

/* ======================================================================== */

void pre_initialize_Info()
{
    Info_Class = new_Named_Class((Object)Object_Class, L"Info");
}

/* ======================================================================== */



/* ======================================================================== */

void post_initialize_Info()
{

}
