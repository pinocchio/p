
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Env.h>

/* ======================================================================== */

Type_Class Env_Class;
Object Env;

/* ======================================================================== */

extern Runtime_Env new_Env(Object parent, Object key, Type_Array values)
{
    Runtime_Env result    = NEW_t(Runtime_Env);
    HEADER(result)          = (Object)Env_Class;
    result->parent          = parent;
    result->key             = key;
    result->values          = values;
    return result;
}

extern Runtime_Env new_Env_Sized(Object parent, Object key, int size)
{
    Runtime_Env result    = NEW_t(Runtime_Env);
    HEADER(result)          = (Object)Env_Class;
    result->parent          = parent;
    result->key             = key;
    result->values          = new_Array_With(size, Nil);
    return result;
}

extern void pre_initialize_Env()
{
    Env_Class = new_Named_Class((Object)Object_Class, L"Env");
}

/* =========================================================================*/

extern void Env_lookup(Runtime_Env self, unsigned int index, Object key)
{
    while (self->key != key || self->parent == Nil) {
        if (HEADER(self->parent) == (Object)Env_Class) {
            self = (Runtime_Env)self->parent;
        } else {
            /* TODO Schedule at:in: message send. */
            assert(NULL);
            //Object args[2] = { (Object)new_SmallInt(index), key };
            return;
        }
    }
    /* TODO jump to error handler. */
    assert(self->key == key);
    if (index >= self->values->size->value) {
        printf("Lookup failed, index \"%i\" out of range [0:%i]", index, self->values->size->value);
        assert(index < self->values->size->value);
    }
    
    push_EXP(self->values->values[index]);
}

extern void Env_assign(Runtime_Env self, unsigned int index,
                        Object key, Object value)
{
    while (self->key != key || self->parent == Nil) {
        if (HEADER(self->parent) == (Object)Env_Class) {
            self = (Runtime_Env)self->parent;
        } else {
            /* TODO Schedule at:in: message send. */
            assert(NULL);
            // Object args[2] = { (Object)new_SmallInt(index), key };
            return;
        }
    }
    /* TODO jump to error handler. */
    assert(self->key == key);
    if (index >= self->values->size->value) {
        printf("Lookup failed, index \"%i\" out of range [0:%i]", index, self->values->size->value);
        assert(index < self->values->size->value);
    }
    
    self->values->values[index] = value;
}

extern void push_restore_env()
{
    push_CNT(restore_env);
    poke_EXP(1, current_env());
}

extern Runtime_Env current_env()
{
    return (Runtime_Env) Env;
}

/* =========================================================================*/

extern void post_initialize_Env()
{
    Env = (Object)new_Env_Sized(Nil, Nil, 0);
}
