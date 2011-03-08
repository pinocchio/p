#include <pinocchio.h>

/* ======================================================================= */
Class MethodContext_class;
Class BlockContext_class;
/* ======================================================================= */

MethodContext new_MethodContext(Thread thread, uns_int size)
{
    NEW_STACK_OBJECT(Context, MethodContext, size);
    while (size--) {
        result->local[size] = nil;
    }
    result->home = result;
    return result;
}

BlockContext new_BlockContext(Thread thread, uns_int size)
{
    NEW_STACK_OBJECT(Context, BlockContext, size);
    while (size--) {
        result->local[size] = nil;
    }
    return result;
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
        context = ((BlockContext)context)->outer;
    }
    return Context_direct_load(context, index);
}

void Context_store(Context context, uns_int depth, uns_int index, Object value)
{
    while (depth--) {
        context = ((BlockContext)context)->outer;
    }
    Context_direct_store(context, index, value);
}
