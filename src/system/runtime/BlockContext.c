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
    NEW_ARRAY_OBJECT(Runtime_BlockContext, Object[size]);
    result->home_context    = closure->context->home_context;
    result->closure         = closure;
    result->pc              = 1;
    result->parent_frame    = current_env();
    Runtime_BlockContext parent = closure->context;
    result->scope_id = parent->scope_id + 1;
    if (!context_locals(parent)->size) {
        parent = parent->parent_scope;
    }
    result->parent_scope = parent;
    context_locals(result)->size = size;
    
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
    Runtime_BlockContext_Class =
        new_Class_named((Object)Type_Object_Class,
                        L"Runtime_BlockContext",
                        CREATE_OBJECT_TAG(RUNTIME_BLOCKCONTEXT));
}

/* ========================================================================= */

Object Runtime_BlockContext_lookup(Runtime_BlockContext self, 
                                   uns_int local_id, uns_int scope_id)
{
    while (scope_id != self->scope_id && (Object)self->parent_scope != Nil) {
        printf("    %lu\n", self->scope_id);
        Object parent_class = HEADER(self->parent_scope);
        if (parent_class == (Object)Runtime_BlockContext_Class) {
            self = (Runtime_BlockContext)self->parent_scope;
        } else {
            /* TODO Schedule at:in: message send. */
            assert1(NULL, "TODO Schedule at:in: message send");
            //Object args[2] = { (Object)new_Type_SmallInt(index), key };
            return NULL;
        }
    }
    /* TODO jump to error handler. */
    assert1(scope_id == self->scope_id, "TODO jump to error handler");
    assert(local_id < context_locals(self)->size,
		   printf("Lookup failed, index \"%"F_I"u\" out of range [0:%"F_I"u]", 
                 local_id, context_locals(self)->size));
    
    return context_locals(self)->values[local_id];
}

void Runtime_BlockContext_assign(Runtime_BlockContext self, uns_int local_id,
                                 uns_int scope_id, Object value)
{
    while (scope_id != self->scope_id && (Object)self->closure->context != Nil) {
        if (HEADER(self->closure->context) == (Object)Runtime_BlockContext_Class) {
            self = (Runtime_BlockContext)self->closure->context;
        } else {
            /* TODO Schedule at:in: message send. */
            assert1(NULL, "TODO Schedule at:in: message send");
            //Object args[2] = { (Object)new_Type_SmallInt(index), key };
            return;
        }
    }
    /* TODO jump to error handler. */
    assert1(scope_id == scope_id, "TODO jump to error handler");
    assert(local_id < context_locals(self)->size,
		   printf("Lookup failed, index \"%"F_I"u\" out of range [0:%"F_I"u]", 
                  local_id, context_locals(self)->size));
    
    context_locals(self)->values[local_id] = value;
}

/* ========================================================================= */

void post_init_Runtime_BlockContext()
{
}
