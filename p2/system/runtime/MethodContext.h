#ifndef RUNTIME_METHODCONTEXT_H
#define RUNTIME_METHODCONTEXT_H

#include <pinocchio.h>

/* ========================================================================= */

#define RUNTIME_METHODCONTEXT_SIZE 7
#define RUNTIME_METHODCONTEXT_VARS\
            L"pc", L"closure", L"values",\
            L"home_context", L"parent", L"self", L"class"

struct Runtime_MethodContext_t {
    unsigned long int       pc;
    Runtime_MethodClosure   closure;
    Type_Array              values;
    Runtime_MethodContext   home_context;
    Runtime_BlockContext    parent;
    Object                  self;
    Object                  class;
};

CREATE_INITIALIZERS(Runtime_MethodContext)
extern Runtime_MethodContext new_Runtime_MethodContext(Runtime_MethodClosure closure,
                                            Object self, Object class,
                                            Type_Array values);

/* ========================================================================= */

/* ========================================================================= */

#endif // RUNTIME_METHODCONTEXT_H
