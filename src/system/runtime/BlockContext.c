#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

#define CONTEXT_CACHE_SIZE 128

DECLARE_CLASS(Runtime_BlockContext);
static Array unused_contexts;

/* ========================================================================= */

static Runtime_BlockContext make_context(uns_int size)
{
    NEW_ARRAY_OBJECT(Runtime_BlockContext, Object[size]);
    result->captured = 0;
    return result;
}

Runtime_BlockContext optain_context(uns_int size)
{
    if (size >= unused_contexts->size) { return make_context(size); }
    Runtime_BlockContext context =
        (Runtime_BlockContext)unused_contexts->values[size];
    if ((Object)context == nil) {
        /*gc();
        context = (Runtime_BlockContext)unused_contexts->values[size];
        if ((Object)context == nil) {
        */
        return make_context(size);
        /*}*/
    }
    unused_contexts->values[size] = (Object)context->parent_frame;
    return context;
}

void free_context(Runtime_BlockContext context)
{
    if (context->captured) { return; }
    uns_int size = context->size;
    Object next = unused_contexts->values[size];
    context->closure = (Runtime_BlockClosure)nil;
    context->home_context = (Runtime_MethodContext)nil;
    context->parent_frame = (Runtime_BlockContext)next;
    context->parent_scope = (Runtime_BlockContext)nil;
    int i;
    for (i = 0; i < size; i++) {
        context->locals[i] = nil;
    }
    unused_contexts->values[size] = (Object)context;
}

/*
void free_context(Runtime_BlockContext context)
{
    uns_int size          = context_locals(context)->size;
    if (size >= unused_contexts->size) { return; }
    Object next           = unused_contexts->values[size];
    context->parent_frame = (Runtime_BlockContext)next;
    unused_contexts->values[size] = (Object)context;
}
*/

Runtime_BlockContext new_Runtime_BlockContext(Runtime_BlockClosure closure)
{
    uns_int size                = closure->code->params->size + closure->code->locals->size;
    Runtime_BlockContext result = optain_context(size);
	HEADER(result)              = Runtime_BlockContext_Class;
    result->home_context        = closure->context->home_context;
    result->closure             = closure;
    result->parent_frame        = current_env();
    Runtime_BlockContext parent = closure->context;
    result->scope_id            = parent->scope_id + 1;
    if (!parent->size) {
        parent = parent->parent_scope;
    }
    result->parent_scope = parent;
    result->size = size;
    
    return result;
}

Runtime_BlockContext current_env()
{
    return (Runtime_BlockContext)tget(_ENV_);
}

void set_env(Object env)
{
    tset(_ENV_, env);
}

/* ========================================================================= */

Object Runtime_BlockContext_lookup(Runtime_BlockContext self, 
                                   uns_int local_id, uns_int scope_id)
{
    while (scope_id != self->scope_id && (Object)self->parent_scope != nil) {
        if (IS_CONTEXT(self->parent_scope)) {
            self = (Runtime_BlockContext)self->parent_scope;
        } else {
            /* TODO Schedule at:in: message send. */
            assert1(NULL, "TODO Schedule at:in: message send.");
            //Object args[2] = { (Object)new_SmallInt(index), key };
            return NULL;
        }
    }
    /* TODO jump to error handler. */
    assert1(scope_id == self->scope_id, "TODO jump to error handler");
    assert(local_id < self->size,
		   printf("Lookup failed, index \"%"F_I"u\" out of range [0:%"F_I"u]", 
                 local_id, self->size));
    
    return self->locals[local_id];
}

void Runtime_BlockContext_assign(Runtime_BlockContext self, uns_int local_id,
                                 uns_int scope_id, Object value)
{
    while (scope_id != self->scope_id && (Object)self->closure->context != nil) {
        if (IS_CONTEXT(self->closure->context)) {
            self = (Runtime_BlockContext)self->closure->context;
        } else {
            /* TODO Schedule at:in: message send. */
            assert1(NULL, "TODO Schedule at:in: message send");
            //Object args[2] = { (Object)new_SmallInt(index), key };
            return;
        }
    }
    /* TODO jump to error handler. */
    assert1(scope_id == scope_id, "TODO jump to error handler");
    assert(local_id < self->size,
		   printf("Lookup failed, index \"%"F_I"u\" out of range [0:%"F_I"u]", 
                  local_id, self->size));

    self->locals[local_id] = value;
}

NATIVE(Runtime_BlockContext_errorHandler)
    RETURN_FROM_NATIVE(tget(Error_Handler));
}

NATIVE1(Runtime_BlockContext_errorHandler_)
    tset(Error_Handler, NATIVE_ARG(1));
    RETURN_FROM_NATIVE(self);
}

/* ========================================================================= */

void pre_init_Runtime_BlockContext() { }
void post_init_Runtime_BlockContext()
{
    unused_contexts = new_Array_withAll(CONTEXT_CACHE_SIZE, nil);
    
    Dictionary natives = add_plugin(L"Runtime.BlockClosure");
    store_native(natives, SMB_errorHandler, NM_Runtime_BlockContext_errorHandler);
    store_native(natives, SMB_errorHandler_, NM_Runtime_BlockContext_errorHandler_);
}
