#ifndef RUNTIME_BLOCKCONTEXT_H
#define RUNTIME_BLOCKCONTEXT_H

#include <pinocchio.h>

/* ========================================================================= */

#define IS_CONTEXT(env) (HEADER(env) == (Object)Runtime_BlockContext_Class || \
                         HEADER(env) == (Object)Runtime_MethodContext_Class)

/* ========================================================================= */

struct Runtime_BlockContext_t {
    unsigned long int       pc;
    Runtime_Block_Closure         closure;
    Type_Array              values;
    Runtime_MethodContext   home_context;
};

CREATE_INITIALIZERS(Runtime_BlockContext)

extern Runtime_BlockContext new_Runtime_BlockContext(Runtime_Block_Closure block, Type_Array values);

/* ========================================================================= */

extern Object Runtime_BlockContext_lookup(
    Runtime_BlockContext self, uns_int index, Object key);
extern void Runtime_BlockContext_assign(
    Runtime_BlockContext self, uns_int index, Object key, Object value);

/* ========================================================================= */

extern Runtime_BlockContext current_env();
extern void set_env(Object env);
extern void push_restore_env();

/* ========================================================================= */

#endif // RUNTIME_BLOCKCONTEXT_H
