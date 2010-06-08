#ifndef RUNTIME_METHODCLOSURE_H
#define RUNTIME_METHODCLOSURE_H

#include <pinocchio.h>

/* ========================================================================= */

struct Runtime_MethodClosure_t {
    Method          code;
    AST_Info            info;
    Optr              selector;
    Class          host;
};

extern void post_init_Runtime_MethodClosure();
extern Runtime_MethodClosure new_Runtime_MethodClosure(Method code,
                                                       Class host);

/* ========================================================================= */

extern void Runtime_MethodClosure_invoke(Runtime_MethodClosure closure, Optr self,
                                         uns_int argc);

/* ========================================================================= */

#endif // RUNTIME_METHODCLOSURE_H
