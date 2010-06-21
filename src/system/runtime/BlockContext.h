#ifndef RUNTIME_BLOCKCONTEXT_H
#define RUNTIME_BLOCKCONTEXT_H

#include <pinocchio.h>

/* ========================================================================= */

#define IS_CONTEXT(env) (HEADER(env) == BlockContext_Class || \
                         HEADER(env) == MethodContext_Class)

/* ========================================================================= */

struct BlockContext_t {
    uns_int                 size;
    uns_int                 scope_id;
    BlockClosure            closure;
    MethodContext           home_context;
    BlockContext            parent_frame;
    BlockContext            parent_scope;
    Optr                    locals[];
};

extern void post_init_BlockContext();

extern BlockContext new_BlockContext(BlockClosure block);

/* ========================================================================= */

extern Optr BlockContext_lookup(
    BlockContext self, uns_int local_id, uns_int scope_id);
extern void BlockContext_assign(
    BlockContext self, uns_int local_id, uns_int scope_id, Optr value);
extern BlockContext optain_context(uns_int size);

/* ========================================================================= */

extern BlockContext current_env();
extern void set_env(Optr env);

/* ========================================================================= */

#endif // RUNTIME_BLOCKCONTEXT_H
