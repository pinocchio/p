#ifndef RUNTIME_METHODCONTEXT_H
#define RUNTIME_METHODCONTEXT_H

#include <pinocchio.h>

/* ========================================================================= */

struct Runtime_MethodContext_t {
    Runtime_Closure         closure;
    unsigned long int       pc;
    Type_Array              values;
    Runtime_MethodContext   home_context;
    Object                  self;
    Object                  class;
};

CREATE_INITIALIZERS(Runtime_MethodContext)
extern Runtime_MethodContext new_Runtime_MethodContext(Runtime_Closure closure,
                                            Object self, Object class,
                                            Runtime_MethodContext home_context, 
                                            Type_Array values);

/* ========================================================================= */

/* ========================================================================= */

#endif // RUNTIME_METHODCONTEXT_H
