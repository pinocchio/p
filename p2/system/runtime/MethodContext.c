
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/MethodContext.h>

/* ======================================================================== */

Type_Class Runtime_MethodContext_Class;

/* ======================================================================== */

void pre_init_Runtime_MethodContext()
{
    Runtime_MethodContext_Class = new_Named_Class((Object)Type_Object_Class, L"Runtime_MethodContext");
}

/* ======================================================================== */



/* ======================================================================== */

void post_init_Runtime_MethodContext()
{

}
