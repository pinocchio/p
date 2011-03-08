#include <pinocchio.h>

/* ======================================================================= */
Class MethodClosure_class;
/* ======================================================================= */

MethodClosure new_MethodClosure(Behavior cls, Symbol selector, Method method)
{
    NEW_OBJECT(MethodClosure);
    result->class    = cls;
    result->method   = method;
    result->selector = selector;
    MethodDictionary_store(cls->methods, selector, result);
    return result;
}
