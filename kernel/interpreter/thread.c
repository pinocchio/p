#include <pinocchio.h>

/* ======================================================================= */
Class Thread_class;
/* ======================================================================= */

Thread new_Thread(uns_int size)
{
    NEW_OBJECT(Thread);
    result->stack         = new_Array(STACK_SIZE);
    result->stack_pointer = new_Raw((void**)&result->stack->value[0]);
    return result;
}
