#ifndef RUNTIME_BLOCKCONTEXT_H
#define RUNTIME_BLOCKCONTEXT_H

#include <pinocchio.h>

/* ========================================================================= */

#define IS_CONTEXT(env) (HEADER(env) == (Object)Runtime_BlockContext_Class || \
                         HEADER(env) == (Object)Runtime_MethodContext_Class)

/* ========================================================================= */

struct Runtime_BlockContext_t {
    Runtime_Closure closure;
    unsigned int    pc;
    Type_Array      values;
    Runtime_MethodContext home_context;
};

extern Object Env;

CREATE_INITIALIZERS(Runtime_BlockContext)

extern Runtime_BlockContext new_Runtime_BlockContext(Runtime_Closure block, Type_Array values);
extern Runtime_BlockContext new_Runtime_BlockContext_Sized(Runtime_Closure block, int size);

/* ========================================================================= */

extern Object Runtime_BlockContext_lookup(Runtime_BlockContext self, unsigned int index, Object key);
extern void Runtime_BlockContext_assign(Runtime_BlockContext self, unsigned int index, Object key, Object value);

/* ========================================================================= */

extern Runtime_BlockContext current_env();
extern void push_restore_env();
extern void CNT_restore_env();
extern void restore_env();

/* ========================================================================= */

#endif // RUNTIME_BLOCKCONTEXT_H
