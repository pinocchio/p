#ifndef RUNTIME_METHODCONTEXT_H
#define RUNTIME_METHODCONTEXT_H

#include <pinocchio.h>

/* ========================================================================= */

struct Runtime_MethodContext_t {
    unsigned long int       pc;
    Runtime_Closure         closure;
    Type_Array              values;
    Runtime_MethodContext   home_context;
    Object                  self;
    Object                  class;
};

CREATE_INITIALIZERS(Runtime_MethodContext)
extern Runtime_MethodContext new_Runtime_MethodContext(Runtime_Closure closure,
                                            Object self, Object class,
                                            Type_Array values);

/* ========================================================================= */

/* ========================================================================= */

#endif // RUNTIME_METHODCONTEXT_H
