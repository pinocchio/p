#ifndef RUNTIME_BLOCKCONTEXT_H
#define RUNTIME_BLOCKCONTEXT_H

#include <pinocchio.h>

/* ========================================================================== */

struct Runtime_BlockContext_t {
    Object          self;
    Object          class;
    AST_Method      method;
    AST_Block       block;
    unsigned int    pc;
    Object          parent;
    Object          key;
    Type_Array values;
};

extern Object Env;

CREATE_INITIALIZERS(Runtime_BlockContext)

extern Runtime_BlockContext new_Runtime_BlockContext(Object parent, Object key, Type_Array values);
extern Runtime_BlockContext new_Runtime_BlockContext_Sized(Object parent, Object key, int size);

/* =========================================================================*/

extern void Runtime_BlockContext_lookup(Runtime_BlockContext self, unsigned int index, Object key);
extern void Runtime_BlockContext_assign(Runtime_BlockContext self, unsigned int index, Object key, Object value);

/* =========================================================================*/

extern Runtime_BlockContext current_env();
extern void push_restore_env();
extern void CNT_restore_env();
extern void restore_env();

/* =========================================================================*/

#endif // RUNTIME_BLOCKCONTEXT_H
