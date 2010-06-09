#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/MethodContext.h>

/* ========================================================================= */

MethodContext new_MethodContext(MethodClosure closure,
                                                Optr self)
{
    uns_int size = closure->code->params->size + closure->code->locals->size;
	MethodContext result = (MethodContext)optain_context(size);
	HEADER(result)       = MethodContext_Class;
	result->closure      = closure;
	result->scope_id     = 0;
	result->home_context = result;
	result->parent_frame = current_env();
	result->self         = self;
    ((BlockContext)result)->size = size;
    return result;
}

MethodContext new_Empty_MethodContext()
{
    NEW_OBJECT(MethodContext);
    result->home_context    = result;
    ((BlockContext)result)->size = 0;
    result->scope_id        = 0;
    return result;
}
