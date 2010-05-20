#ifndef RUNTIME_METHODCONTEXT_H
#define RUNTIME_METHODCONTEXT_H

#include <pinocchio.h>

/* ========================================================================= */

struct Runtime_MethodContext_t {
    uns_int                 size;
    uns_int                 scope_id;
	uns_int					captured;
    Runtime_MethodClosure   closure;
    Runtime_MethodContext   home_context;
    Runtime_BlockContext    parent_frame;
    Object                  self;
    Object                  locals[];
};

CREATE_INITIALIZERS(Runtime_MethodContext)
extern Runtime_MethodContext new_Runtime_MethodContext(Runtime_MethodClosure closure,
                                                       Object self);

extern Runtime_MethodContext new_Empty_Runtime_MethodContext();

/* ========================================================================= */

#endif // RUNTIME_METHODCONTEXT_H
