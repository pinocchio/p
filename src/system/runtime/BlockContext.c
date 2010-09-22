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
    return make_context(size);
}

BlockContext capture_current_env()
{
    BlockContext target;
    BlockContext context = current_env();
    if (context->stacked == false) {
		return context;
    }
    uns_int size   = context->size;
    target         = optain_context(size);
    HEADER(target) = HEADER(context);
    size          += CONTEXT_SIZE;
    Optr * from    = (Optr*)context;
    Optr * to      = (Optr*)target;

    while(size) {
        size--;
        *to++ = *from++;
    }

    if (context->home_context == (MethodContext)context) {
        target->home_context = (MethodContext)target;
    }

    /* Mark & keep a pointer to the new version
     * This is used by "BlockContext alive_env(BlockContext context)" to
     * retrieve the actual context
     */
    HEADER(context) = NULL;
    context->stacked = (Optr)target;

    target->stacked = false;
    set_env(target);
    return target;
}

/* Retrieves the actual context in case the stacked context was unstacked in the
 * meanwhile
 */
BlockContext alive_env(BlockContext context)
{
    if (HEADER(context) == NULL) {
        return (BlockContext)context->stacked;
    }
    return context;
}

/* ========================================================================= */

Optr BlockContext_lookup(BlockContext self, uns_int local_id, uns_int scope_id)
{
    while (scope_id < self->scope_id && (Optr)self->outer_scope != nil) {
        self = self->outer_scope;
    }
    assert1(scope_id == self->scope_id, "Failed to locate scope.");
    assert1(local_id < self->size, "Variable index out of range");

    return self->locals[local_id];
}

void BlockContext_assign(BlockContext self, uns_int local_id,
                         uns_int scope_id, Optr value)
{
    while (scope_id < self->scope_id && (Optr)self->outer_scope != nil) {
        self = self->outer_scope;
    }
    assert1(scope_id == scope_id, "Failed to locate scope.");
    assert1(local_id < self->size, "Variable index out of range");

    self->locals[local_id] = value;
}
