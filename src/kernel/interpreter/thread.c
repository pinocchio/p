#include <pinocchio.h>

/* ======================================================================= */
Class Thread_class;
/* ======================================================================= */

Thread new_Thread(uns_int size, Object receiver, Symbol message)
{
    NEW_OBJECT(Thread);
    result->stack         = raw_RawArray(STACK_SIZE);
    result->stack_pointer = new_Raw(result->stack->data);
    MethodContext context = new_MethodContext(result, 1);
    context->self         = receiver;
    context->local[0]     = receiver;
    result->context       = (Context)context;
    return result;
}
