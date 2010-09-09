#ifndef RUNTIME_METHODCLOSURE_H
#define RUNTIME_METHODCLOSURE_H

#include <pinocchio.h>

/* ========================================================================= */

struct MethodClosure_t {
    Method code;
    Optr   selector;
    Class  host;
};

extern void post_init_MethodClosure();
extern MethodClosure new_MethodClosure(Method code,
                                                       Class host);

/* ========================================================================= */

extern void MethodClosure_invoke(MethodClosure closure, Optr self,
                                 uns_int argc);

/* ========================================================================= */

#endif // RUNTIME_METHODCLOSURE_H
