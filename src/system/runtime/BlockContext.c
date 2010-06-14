#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

#define CONTEXT_CACHE_SIZE 128

DECLARE_CLASS(BlockContext);
static Array unused_contexts;

/* ========================================================================= */

static BlockContext make_context(uns_int size)
{
    NEW_ARRAY_OBJECT(BlockContext, Optr[size]);
    result->captured = 0;
    return result;
}

BlockContext optain_context(uns_int size)
{
    if (size >= unused_contexts->size) { return make_context(size); }
    BlockContext context =
        (BlockContext)unused_contexts->values[size];
    if ((Optr)context == nil) {
        /*gc();
        context = (BlockContext)unused_contexts->values[size];
        if ((Optr)context == nil) {
        */
        return make_context(size);
        /*}*/
    }
    unused_contexts->values[size] = (Optr)context->parent_frame;
    return context;
}

void free_context(BlockContext context)
{
    if (context->captured) { return; }
    uns_int size = context->size;
    Optr next = unused_contexts->values[size];
    context->closure = (BlockClosure)nil;
    context->home_context = (MethodContext)nil;
    context->parent_frame = (BlockContext)next;
    context->parent_scope = (BlockContext)nil;
    long i;
    for (i = 0; i < size; i++) {
        context->locals[i] = nil;
    }
    unused_contexts->values[size] = (Optr)context;
}

/*
void free_context(BlockContext context)
{
    uns_int size          = context_locals(context)->size;
    if (size >= unused_contexts->size) { return; }
    Optr next           = unused_contexts->values[size];
    context->parent_frame = (BlockContext)next;
    unused_contexts->values[size] = (Optr)context;
}
*/

BlockContext new_BlockContext(BlockClosure closure)
{
    uns_int size                = closure->code->params->size + closure->code->locals->size;
    BlockContext result = optain_context(size);
	HEADER(result)              = BlockContext_Class;
    result->home_context        = closure->context->home_context;
    result->closure             = closure;
    result->parent_frame        = current_env();
    BlockContext parent = closure->context;
    result->scope_id            = parent->scope_id + 1;
    if (!parent->size) {
        parent = parent->parent_scope;
    }
    result->parent_scope = parent;
    result->size = size;
    
    return result;
}

BlockContext current_env()
{
    return (BlockContext)tget(_ENV_);
}

void set_env(Optr env)
{
    tset(_ENV_, env);
}

/* ========================================================================= */

Optr BlockContext_lookup(BlockContext self, 
                                   uns_int local_id, uns_int scope_id)
{
    while (scope_id != self->scope_id && (Optr)self->parent_scope != nil) {
        if (IS_CONTEXT(self->parent_scope)) {
            self = (BlockContext)self->parent_scope;
        } else {
            /* TODO Schedule at:in: message send. */
            assert1(NULL, "TODO Schedule at:in: message send.");
            //Optr args[2] = { (Optr)new_SmallInt(index), key };
            return NULL;
        }
    }
    /* TODO jump to error handler. */
    assert1(scope_id == self->scope_id, "TODO jump to error handler");
    assert(local_id < self->size,
		   printf("Lookup failed, index \"%lu\" out of range [0:%lu]", 
                 local_id, self->size));
    
    return self->locals[local_id];
}

void BlockContext_assign(BlockContext self, uns_int local_id,
                                 uns_int scope_id, Optr value)
{
    while (scope_id != self->scope_id && (Optr)self->closure->context != nil) {
        if (IS_CONTEXT(self->closure->context)) {
            self = (BlockContext)self->closure->context;
        } else {
            /* TODO Schedule at:in: message send. */
            assert1(NULL, "TODO Schedule at:in: message send");
            //Optr args[2] = { (Optr)new_SmallInt(index), key };
            return;
        }
    }
    /* TODO jump to error handler. */
    assert1(scope_id == scope_id, "TODO jump to error handler");
    assert(local_id < self->size,
		   printf("Lookup failed, index \"%lu\" out of range [0:%lu]", 
                  local_id, self->size));

    self->locals[local_id] = value;
}

NATIVE(BlockContext_errorHandler)
    RETURN_FROM_NATIVE(tget(Error_Handler));
}

NATIVE1(BlockContext_errorHandler_)
    tset(Error_Handler, NATIVE_ARG(1));
    RETURN_FROM_NATIVE(self);
}

/* ========================================================================= */

void pre_init_BlockContext() { }
void post_init_BlockContext()
{
    unused_contexts = new_Array_withAll(CONTEXT_CACHE_SIZE, nil);
    
    Dictionary natives = add_plugin(L"Runtime.BlockClosure");
    store_native(natives, SMB_errorHandler, NM_BlockContext_errorHandler);
    store_native(natives, SMB_errorHandler_, NM_BlockContext_errorHandler_);
}
