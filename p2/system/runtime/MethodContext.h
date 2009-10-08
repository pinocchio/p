#ifndef RUNTIME_METHODCONTEXT_H
#define RUNTIME_METHODCONTEXT_H

#include <pinocchio.h>

/* ======================================================================== */

struct Runtime_MethodContext_t {
    Runtime_Closure block;
    unsigned int    pc;
    Type_Array      values;
    Object          self;
    Object          class;
};

CREATE_INITIALIZERS(Runtime_MethodContext)
extern Runtime_MethodContext new_Runtime_MethodContext();

/* ======================================================================== */

/* ======================================================================== */

#endif // RUNTIME_METHODCONTEXT_H
