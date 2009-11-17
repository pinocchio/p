#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

Type_Class Runtime_BlockContext_Class;
static Object _Env_;

/* ========================================================================= */

Type_Array context_locals(Runtime_BlockContext context)
{
    return &context->locals;
}

Runtime_BlockContext new_Runtime_BlockContext(Runtime_BlockClosure closure)
{
    uns_int size = closure->code->params->size + closure->code->locals->size;
    Runtime_BlockContext parent = current_env();
    uns_int scope_id        = context_locals(parent)->size;
    uns_int context_size    = scope_id + (size == 0 ? 0 : 1);
    NEW_CONTEXT(Block, context_size);
    result->home_context    = closure->context->home_context;
    result->closure         = closure;
    result->pc              = 0;
    result->parent          = parent;
    Type_Array locals       = context_locals(result);

    int i;
    for (i = 0; i < scope_id; i++) {
        locals->values[i] = context_locals(parent)->values[i];
    }
    if (size > 0) {
        locals->values[scope_id] = (Object)new_Type_Array_withAll(size, Nil);
    }
    
    return result;
}

Runtime_BlockContext current_env()
{
    return (Runtime_BlockContext)_Env_;
}

void set_env(Object env)
{
    _Env_ = env;
}

void pre_init_Runtime_BlockContext()
{
    Runtime_BlockContext_Class = new_Class_named((Object)Type_Object_Class,
                                                 L"Runtime_BlockContext",
                                                 CREATE_OBJECT_TAG(RUNTIME_BLOCKCONTEXT));
}

/* ========================================================================= */

Object Runtime_BlockContext_lookup(Runtime_BlockContext self, 
                                   uns_int local_id, uns_int scope_id)
{
    Type_Array scopes = context_locals(self);
    assert1(scope_id < scopes->size, "Invalid scope identifier");
    Type_Array locals = (Type_Array)scopes->values[scope_id];

    assert(local_id < locals->size,
		   printf("Lookup failed, index \"%"F_I"u\" out of range [0:%"F_I"u]", 
                 local_id, context_locals(self)->size));
    
    return locals->values[local_id];
}

void Runtime_BlockContext_assign(Runtime_BlockContext self, uns_int local_id,
                                 uns_int scope_id, Object value)
{

    Type_Array scopes = context_locals(self);
    assert1(scope_id < scopes->size, "Invalid scope identifier");
    Type_Array locals = (Type_Array)scopes->values[scope_id];

    assert(local_id < locals->size,
		   printf("Lookup failed, index \"%"F_I"u\" out of range [0:%"F_I"u]", 
                 local_id, context_locals(self)->size));
    
    locals->values[local_id] = value;
}

/* ========================================================================= */

void post_init_Runtime_BlockContext()
{
}
