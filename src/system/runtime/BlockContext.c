#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

DECLARE_CLASS(BlockContext);

/* ========================================================================= */

static BlockContext make_context(uns_int size)
{
    NEW_ARRAY_OBJECT(BlockContext, Optr[size]);
    return result;
}

BlockContext optain_context(uns_int size)
{
    return make_context(size);}

BlockContext new_BlockContext(uns_int size)
{
    BlockContext result         = optain_context(size);
	HEADER(result)              = BlockContext_Class;
    return result;
}

BlockContext current_env()
{
    return (BlockContext)tget(_ENV_);
}

BlockContext capture_current_env()
{
    BlockContext context = current_env();
    BlockContext target;
    uns_int size         = context->size;
    if (context->for_method) {
        target = new_MethodContext(size);
    } else {
        target = new_BlockContext(size);
    }
    size += CONTEXT_SIZE;
    Optr * from = (Optr*)context;
    Optr * to   = (Optr*)target;

    while(size) {
        size--;
        *to++ = *from++;
    }

    set_env(target);
    return target;
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
    Dictionary natives = add_plugin(L"Runtime.BlockClosure");
    store_native(natives, SMB_errorHandler, NM_BlockContext_errorHandler);
    store_native(natives, SMB_errorHandler_, NM_BlockContext_errorHandler_);
}
