#ifndef RUNTIME_CLOSURE_H
#define RUNTIME_CLOSURE_H

#include <pinocchio.h>

/* ======================================================================== */

struct Runtime_Closure_t {
    AST_Block code;
    Runtime_BlockContext context;
};

CREATE_INITIALIZERS(Runtime_Closure)
extern Runtime_Closure new_Runtime_Closure(Object self, Object class,
                                           Object env, AST_Block code);

/* ======================================================================== */

extern void Runtime_Closure_invoke(Runtime_Closure closure, Object self,
                                   Object class, Type_Array args);

/* ======================================================================== */

#endif // RUNTIME_CLOSURE_H
