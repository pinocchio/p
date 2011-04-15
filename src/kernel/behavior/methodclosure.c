#include <pinocchio.h>

/* ======================================================================= */
Class MethodClosure_class;
/* ======================================================================= */

MethodClosure new_MethodClosure(Behavior cls, Symbol selector, RawArray code)
{
    NEW_OBJECT(MethodClosure);
    result->code     = code;
    result->class    = cls;
    result->selector = selector;
    MethodDictionary_store(cls->methods, selector, result);
    return result;
}
