#ifndef RUNTIME_METHODCONTEXT_H
#define RUNTIME_METHODCONTEXT_H

#include <pinocchio.h>

/* ========================================================================= */

#define RUNTIME_METHODCONTEXT_SIZE 8
#define RUNTIME_METHODCONTEXT_VARS\
    L"pc", L"scopeId", L"captured", L"closure",\
    L"homeContext", L"returnContext", L"receiver", L"methodClass"

struct Runtime_MethodContext_t {
    uns_int                 size;
    uns_int                 pc;
    uns_int                 scope_id;
	uns_int					captured;
    Runtime_MethodClosure   closure;
    Runtime_MethodContext   home_context;
    Runtime_BlockContext    parent_frame;
    Object                  self;
    Object                  class;
    Object                  locals[];
};

CREATE_INITIALIZERS(Runtime_MethodContext)
extern Runtime_MethodContext new_Runtime_MethodContext(Runtime_MethodClosure closure,
                                                       Object self, Type_Class class);

extern Runtime_MethodContext new_Empty_Runtime_MethodContext();

/* ========================================================================= */

#endif // RUNTIME_METHODCONTEXT_H
