
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

Runtime_MethodContext new_Runtime_MethodContext(Runtime_Closure closure,
                                            Object self, Object class,
                                            Runtime_MethodContext home_context, 
                                            Type_Array values) {
    NEW_OBJECT(Runtime_MethodContext);
    result->closure         = closure;
    result->pc              = 0;
    result->values          = values;
    result->home_context    = home_context;
    result->class           = class;
    result->self            = self;
    return result;
}


/* ======================================================================== */

void post_init_Runtime_MethodContext()
{

}
