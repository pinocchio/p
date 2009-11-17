#ifndef RUNTIME_METHODCONTEXT_H
#define RUNTIME_METHODCONTEXT_H

#include <pinocchio.h>

/* ========================================================================= */

#define RUNTIME_METHODCONTEXT_SIZE 7
#define RUNTIME_METHODCONTEXT_VARS\
            L"pc", L"closure", L"values",\
            L"home_context", L"parent", L"self", L"class"

struct Runtime_MethodContext_t {
    uns_int                 pc;
    Runtime_MethodClosure   closure;
    Runtime_MethodContext   home_context;
    Runtime_BlockContext    parent;
    Object                  self;
    Object                  class;
    struct Type_Array_t     locals;
};

CREATE_INITIALIZERS(Runtime_MethodContext)
extern Runtime_MethodContext new_Runtime_MethodContext(Runtime_MethodClosure closure,
                                                       Object self, Object class);

extern Runtime_MethodContext new_Empty_Runtime_MethodContext();

/* ========================================================================= */

/* ========================================================================= */

#endif // RUNTIME_METHODCONTEXT_H
