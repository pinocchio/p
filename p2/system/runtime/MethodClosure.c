
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/MethodClosure.h>

/* ========================================================================= */

Type_Class Runtime_MethodClosure_Class;

/* ========================================================================= */

void pre_init_Runtime_MethodClosure()
{
    Runtime_MethodClosure_Class = 
        new_Named_Class((Object)Type_Object_Class,
                        L"Runtime_MethodClosure",
                        create_type(RUNTIME_METHODCLOSURE_SIZE, OBJECT));
}

/* ========================================================================= */



/* ========================================================================= */

void post_init_Runtime_MethodClosure()
{

}
