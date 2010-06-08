#ifndef RUNTIME_BLOCKCONTEXT_H
#define RUNTIME_BLOCKCONTEXT_H

#include <pinocchio.h>

/* ========================================================================= */

#define IS_CONTEXT(env) (HEADER(env) == Runtime_BlockContext_Class || \
                         HEADER(env) == Runtime_MethodContext_Class)

/* ========================================================================= */

struct Runtime_BlockContext_t {
    uns_int                 size;
    uns_int                 scope_id;
    uns_int                 captured;
    Runtime_BlockClosure    closure;
    Runtime_MethodContext   home_context;
    Runtime_BlockContext    parent_frame;
    Runtime_BlockContext    parent_scope;
    Optr                  locals[];
};

extern void post_init_Runtime_BlockContext();

extern Runtime_BlockContext new_Runtime_BlockContext(Runtime_BlockClosure block);

/* ========================================================================= */

extern Optr Runtime_BlockContext_lookup(
    Runtime_BlockContext self, uns_int local_id, uns_int scope_id);
extern void Runtime_BlockContext_assign(
    Runtime_BlockContext self, uns_int local_id, uns_int scope_id, Optr value);
extern Runtime_BlockContext optain_context(uns_int size);
extern void free_context(Runtime_BlockContext context);

/* ========================================================================= */

extern Runtime_BlockContext current_env();
extern void set_env(Optr env);

/* ========================================================================= */

#endif // RUNTIME_BLOCKCONTEXT_H
