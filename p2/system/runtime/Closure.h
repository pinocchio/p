#ifndef RUNTIME_CLOSURE_H
#define RUNTIME_CLOSURE_H

#include <pinocchio.h>
#include <system/runtime/BlockContext.h>

/* ======================================================================== */

struct Runtime_Closure_t {
    Object self;
    Object class;
    Runtime_BlockContext env;
    AST_Block code;
};

CREATE_INITIALIZERS(Runtime_Closure)
extern Runtime_Closure new_Runtime_Closure(Object self, Object class,
                                           Runtime_Env env, AST_Block code);

/* ======================================================================== */

/* ======================================================================== */

#endif // RUNTIME_CLOSURE_H
