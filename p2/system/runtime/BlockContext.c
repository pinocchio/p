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
    uns_int context_size    = context_locals(parent)->size + 1;
    NEW_ARRAY_OBJECT(Runtime_BlockContext, Object[context_size]);
    result->home_context    = closure->context->home_context;
    result->closure         = closure;
    result->pc              = 0;
    result->parent          = parent;
    Type_Array locals       = context_locals(result);
    locals->size            = context_size;
    // TODO copy over the other scopes
    locals->values[context_size - 1] = (Object)new_Type_Array_withAll(size, Nil);
    
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
    while (scope_id != context_locals(self)->size-1 && (Object)self->closure->context != Nil) {
        Runtime_BlockContext next_context = self->closure->context;
        Object next_class = HEADER(next_context);
        if (next_class == (Object)Runtime_BlockContext_Class) {
            self = next_context;
        } else {
            print_Class((Object)next_context);
            /* TODO Schedule at:in: message send. */
            assert1(NULL, "TODO Schedule at:in: message send");
            //Object args[2] = { (Object)new_Type_SmallInt(index), key };
            return NULL;
        }
    }
    /* TODO jump to error handler. */
    assert1(scope_id == context_locals(self)->size-1, "TODO jump to error handler");

    Type_Array locals = (Type_Array)context_locals(self)->values[scope_id];

    assert(local_id < locals->size,
		   printf("Lookup failed, index \"%"F_I"u\" out of range [0:%"F_I"u]", 
                 local_id, context_locals(self)->size));
    
    return locals->values[local_id];
}

void Runtime_BlockContext_assign(Runtime_BlockContext self, uns_int local_id,
                                 uns_int scope_id, Object value)
{
    while (scope_id != context_locals(self)->size - 1 && (Object)self->closure->context != Nil) {
        Runtime_BlockContext next_context = self->closure->context;
        Object next_class = HEADER(next_context);
        if (next_class == (Object)Runtime_BlockContext_Class) {
            self = next_context;
        } else {
            /* TODO Schedule at:in: message send. */
            assert1(NULL, "TODO Schedule at:in: message send");
            //Object args[2] = { (Object)new_Type_SmallInt(index), key };
            return;
        }
    }
    /* TODO1jump to error handler. */
    assert1(scope_id == context_locals(self)->size - 1, "TODO jump to error handler");

    Type_Array locals = (Type_Array)context_locals(self)->values[scope_id];

    assert(local_id < locals->size,
		   printf("Lookup failed, index \"%"F_I"u\" out of range [0:%"F_I"u]", 
                  local_id, context_locals(self)->size));
    
    locals->values[local_id] = value;
}

/* ========================================================================= */

void post_init_Runtime_BlockContext()
{
}
