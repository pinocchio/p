#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/MethodContext.h>

/* ========================================================================= */

Runtime_MethodContext new_Runtime_MethodContext(Runtime_MethodClosure closure,
                                                Object self)
{
    uns_int size = closure->code->params->size + closure->code->locals->size;
	Runtime_MethodContext result = (Runtime_MethodContext)optain_context(size);
	HEADER(result)       = Runtime_MethodContext_Class;
	result->closure      = closure;
	result->scope_id     = 0;
	result->home_context = result;
	result->parent_frame = current_env();
	result->self         = self;
    ((Runtime_BlockContext)result)->size = size;
    return result;
}

Runtime_MethodContext new_Empty_Runtime_MethodContext()
{
    NEW_OBJECT(Runtime_MethodContext);
    result->home_context    = result;
    ((Runtime_BlockContext)result)->size = 0;
    result->scope_id        = 0;
    return result;
}
