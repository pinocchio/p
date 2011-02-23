#include <pinocchio.h>

/* ======================================================================= */
Class MethodClosure_class;
/* ======================================================================= */

MethodClosure new_MethodClosure(Behavior cls, Method method)
{
    NEW_OBJECT(MethodClosure);
    result->class  = cls;
    result->method = method;
    return result;
}
