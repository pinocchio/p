#ifndef RUNTIME_BLOCKCONTEXT_H
#define RUNTIME_BLOCKCONTEXT_H

#include <pinocchio.h>

/* ========================================================================= */

#define IS_CONTEXT(env) (HEADER(env) == Runtime_BlockContext_Class || \
                         HEADER(env) == Runtime_MethodContext_Class)

/* ========================================================================= */

#define RUNTIME_BLOCKCONTEXT_SIZE (RUNTIME_CONTEXT_SIZE + 1)
#define RUNTIME_BLOCKCONTEXT_VARS RUNTIME_CONTEXT_VARS, L"outerScope"

struct Runtime_BlockContext_t {
    uns_int                 size;
    uns_int                 scope_id;
    uns_int                 captured;
    Runtime_BlockClosure    closure;
    Runtime_MethodContext   home_context;
    Runtime_BlockContext    parent_frame;
    Runtime_BlockContext    parent_scope;
    Object                  locals[];
};

CREATE_INITIALIZERS(Runtime_BlockContext)

extern Runtime_BlockContext new_Runtime_BlockContext(Runtime_BlockClosure block);

/* ========================================================================= */

extern Object Runtime_BlockContext_lookup(
    Runtime_BlockContext self, uns_int local_id, uns_int scope_id);
extern void Runtime_BlockContext_assign(
    Runtime_BlockContext self, uns_int local_id, uns_int scope_id, Object value);
extern Runtime_BlockContext optain_context(uns_int size);
extern void free_context(Runtime_BlockContext context);

/* ========================================================================= */

extern Runtime_BlockContext current_env();
extern void set_env(Object env);

/* ========================================================================= */

#endif // RUNTIME_BLOCKCONTEXT_H
