#ifndef RUNTIME_METHODCLOSURE_H
#define RUNTIME_METHODCLOSURE_H

#include <pinocchio.h>

/* ========================================================================= */

struct MethodClosure_t {
    Method code;
    Symbol selector;
    Class  host;
};

extern void post_init_MethodClosure();
extern MethodClosure new_MethodClosure(Method code, Class host);

/* ========================================================================= */

extern void MethodClosure_invoke(MethodClosure closure);

/* ========================================================================= */

#endif // RUNTIME_METHODCLOSURE_H
