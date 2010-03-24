#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/MethodContext.h>

/* ========================================================================= */

Type_Class Runtime_MethodContext_Class;

/* ========================================================================= */

void pre_init_Runtime_MethodContext()
{
    Runtime_MethodContext_Class =
		new_Class_named(Type_Object_Class,
                        L"MethodContext",
                        CREATE_ARRAY_TAG(RUNTIME_METHODCONTEXT));
    Type_Array layout = (Type_Array)Runtime_MethodContext_Class->layout;
    HEADER(layout->values[0]) = AST_UnsintInstVariable_Class;
    HEADER(layout->values[1]) = AST_UnsintInstVariable_Class;
    HEADER(layout->values[2]) = AST_UnsintInstVariable_Class;
}

/* ========================================================================= */

Runtime_MethodContext new_Runtime_MethodContext(Runtime_MethodClosure closure,
                                                Object self, Type_Class class)
{
    uns_int size = closure->code->params->size + closure->code->locals->size;
	Runtime_MethodContext result = (Runtime_MethodContext)optain_context(size);
	HEADER(result)       = Runtime_MethodContext_Class;
	result->closure      = closure;
	result->pc           = 1;
	result->scope_id     = 0;
	result->home_context = result;
	result->parent_frame = current_env();
	result->class        = (Object)class;
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

/* ========================================================================= */

void post_init_Runtime_MethodContext()
{

}
