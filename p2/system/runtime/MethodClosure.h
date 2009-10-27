#ifndef RUNTIME_METHODCLOSURE_H
#define RUNTIME_METHODCLOSURE_H

#include <pinocchio.h>

/* ========================================================================= */

#define RUNTIME_METHODCLOSURE_SIZE 4

/* ========================================================================= */

struct Runtime_MethodClosure_t {
    AST_Method          code;
    Type_Class          class;
    AST_Info            info;
    Object              selector;
};

CREATE_INITIALIZERS(Runtime_MethodClosure)
extern Runtime_MethodClosure new_Runtime_MethodClosure();

/* ========================================================================= */

extern void Runtime_MethodClosure_invoke(Runtime_MethodClosure closure, Object self,
                                   Object class, uns_int argc);

/* ========================================================================= */

#endif // RUNTIME_METHODCLOSURE_H
