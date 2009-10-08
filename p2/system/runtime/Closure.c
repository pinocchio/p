
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Closure.h>

/* ======================================================================== */

Type_Class Runtime_Closure_Class;

/* ======================================================================== */

void pre_init_Runtime_Closure()
{
    Runtime_Closure_Class = new_Named_Class((Object)Type_Object_Class, L"Runtime_Closure");
}

/* ======================================================================== */



/* ======================================================================== */

void post_init_Runtime_Closure()
{

}
