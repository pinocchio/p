#include <pinocchio.h>

/* ======================================================================= */
Class Thread_class;
/* ======================================================================= */

Thread new_Thread(uns_int size)
{
    NEW_OBJECT(Thread);
    result->stack         = raw_RawArray(STACK_SIZE);
    result->stack_pointer = new_Raw((void**)&result->stack->data[0]);
    return result;
}

Object Thread_return(Thread thread, Object value)
{
    return nil;
}
