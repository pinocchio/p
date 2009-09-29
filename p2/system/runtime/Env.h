#ifndef ENV_H
#define ENV_H

#include <pinocchio.h>

/* ========================================================================== */

struct Runtime_Env_t {
    Object          self;
    Object          class;
    AST_Method method;
    unsigned int    pc;
    Object          parent;
    Object          key;
    Type_Array values;
};

extern Object Type_Runtime_Env;

CREATE_INITIALIZERS(Type_Runtime_Env)

extern Runtime_Env new_Type_Runtime_Env(Object parent, Object key, Type_Array values);
extern Runtime_Env new_Type_Runtime_Env_Sized(Object parent, Object key, int size);

/* =========================================================================*/

extern void Type_Runtime_Env_lookup(Runtime_Env self, unsigned int index, Object key);
extern void Type_Runtime_Env_assign(Runtime_Env self, unsigned int index, Object key, Object value);

/* =========================================================================*/

extern Runtime_Env current_env();
extern void push_restore_env();
extern void CNT_restore_env();
extern void restore_env();

/* =========================================================================*/

#endif // ENV_H
