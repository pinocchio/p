#include <pinocchio.h>

/* ======================================================================= */
Class MethodContext_class;
Class BlockContext_class;
/* ======================================================================= */

Context new_MethodContext(uns_int size)
{
    // NEW_STACK_OBJECT(Context, MethodContext_class, Object, size);
    // return result;
    return NULL;
}

Context new_BlockContext(uns_int size)
{
    // NEW_STACK_OBJECT(Context, MethodContext_class, Object, size);
    // return result;
    return NULL;
}

Object Context_direct_load(Context context, uns_int index)
{
    return context->local[index];
}

void Context_direct_store(Context context, uns_int index, Object value)
{
    context->local[index] = value;
}

Object Context_load(Context context, uns_int depth, uns_int index)
{
    while (depth--) {
        context = ((BlockContext)context)->outer_context;
    }
    return Context_direct_load(context, index);
}

void Context_store(Context context, uns_int depth, uns_int index, Object value)
{
    while (depth--) {
        context = ((BlockContext)context)->outer_context;
    }
    Context_direct_store(context, index, value);
}
