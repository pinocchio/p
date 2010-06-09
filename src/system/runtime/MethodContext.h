#ifndef RUNTIME_METHODCONTEXT_H
#define RUNTIME_METHODCONTEXT_H

#include <pinocchio.h>

/* ========================================================================= */

struct MethodContext_t {
    uns_int                 size;
    uns_int                 scope_id;
	uns_int					captured;
    MethodClosure   closure;
    MethodContext   home_context;
    BlockContext    parent_frame;
    Optr                  self;
    Optr                  locals[];
};

extern MethodContext
    new_MethodContext(MethodClosure closure,
                              Optr self);

extern MethodContext new_Empty_MethodContext();

/* ========================================================================= */

#endif // RUNTIME_METHODCONTEXT_H
