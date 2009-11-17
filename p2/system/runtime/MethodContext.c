#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/MethodContext.h>

/* ========================================================================= */

Type_Class Runtime_MethodContext_Class;

/* ========================================================================= */

void pre_init_Runtime_MethodContext()
{
    Runtime_MethodContext_Class = new_Class_named((Object)Type_Object_Class,
                                                  L"Runtime_MethodContext",
                                                  CREATE_OBJECT_TAG(RUNTIME_METHODCONTEXT));
}

/* ========================================================================= */

Runtime_MethodContext new_Runtime_MethodContext(Runtime_MethodClosure closure,
                                                Object self, Object class)
{
    uns_int size = closure->code->params->size + closure->code->locals->size;
    uns_int context_size    = (size == 0 ? 0 : 1);
    NEW_CONTEXT(Method, context_size);
    result->closure         = closure;
    result->pc              = 0;
    result->home_context    = result;
    result->parent          = current_env();
    result->class           = class;
    result->self            = self;
    Type_Array locals       = context_locals((Runtime_BlockContext)result);
    if (size > 0) {
        locals->values[0]   = (Object)new_Type_Array_withAll(size, Nil);
    }
    return result;
}

Runtime_MethodContext new_Empty_Runtime_MethodContext()
{
    NEW_OBJECT(Runtime_MethodContext);
    result->home_context    = result;
    Type_Array locals       = context_locals((Runtime_BlockContext)result);
    locals->size            = 1;
    return result;
}

/* ========================================================================= */

void post_init_Runtime_MethodContext()
{

}
