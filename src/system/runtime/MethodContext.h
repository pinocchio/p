#ifndef RUNTIME_METHODCONTEXT_H
#define RUNTIME_METHODCONTEXT_H

#include <pinocchio.h>

/* ========================================================================= */

struct MethodContext_t {
    uns_int                 size;
    uns_int                 scope_id   : sizeof(Optr) - 2;
    uns_int                 stacked    : 1;
    uns_int                 for_method : 1;
    MethodClosure           closure;
    MethodContext           home_context;
    BlockContext            parent_frame;
    Optr                    self;
    Optr                    locals[];
};

#define CONTEXT_SIZE ((sizeof(struct MethodContext_t) / sizeof(Optr)))

extern MethodContext new_MethodContext(uns_int size);

extern MethodContext new_Empty_MethodContext();

/* ========================================================================= */

#endif // RUNTIME_METHODCONTEXT_H
