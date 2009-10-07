
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Env.h>
#include <pinocchio.h>

/* ======================================================================== */

Type_Class Runtime_Env_Class;
Object Env;

/* ======================================================================== */

Runtime_Env new_Runtime_Env(Object parent, Object key, Type_Array values)
{
    Runtime_Env result    = NEW_t(Runtime_Env);
    HEADER(result)          = (Object)Runtime_Env_Class;
    result->parent          = parent;
    result->key             = key;
    result->values          = values;
    return result;
}

Runtime_Env new_Runtime_Env_Sized(Object parent, Object key, int size)
{
    Runtime_Env result    = NEW_t(Runtime_Env);
    HEADER(result)          = (Object)Runtime_Env_Class;
    result->parent          = parent;
    result->key             = key;
    result->values          = new_Type_Array_With(size, Nil);
    return result;
}

Runtime_Env current_env()
{
    return (Runtime_Env) Env;
}

void pre_init_Runtime_Env()
{
    Runtime_Env_Class = new_Named_Class((Object)Type_Object_Class, L"Runtime_Env");
}

/* =========================================================================*/

void Runtime_Env_lookup(Runtime_Env self, unsigned int index, Object key)
{
    while (self->key != key || self->parent == Nil) {
        if (HEADER(self->parent) == (Object)Runtime_Env_Class) {
            self = (Runtime_Env)self->parent;
        } else {
            /* TODO Schedule at:in: message send. */
            assert1(NULL, "TODO Schedule at:in: message send");
            //Object args[2] = { (Object)new_Type_SmallInt(index), key };
            return;
        }
    }
    /* TODO jump to error handler. */
    assert1(self->key == key, "TODO jump to error handler");
    assert(index < self->values->size->value,
		   printf("Lookup failed, index \"%i\" out of range [0:%i]", index, self->values->size->value));
    
    push_EXP(self->values->values[index]);
}

void Runtime_Env_assign(Runtime_Env self, unsigned int index,
                        Object key, Object value)
{
    while (self->key != key || self->parent == Nil) {
        if (HEADER(self->parent) == (Object)Runtime_Env_Class) {
            self = (Runtime_Env)self->parent;
        } else {
            /* TODO Schedule at:in: message send. */
            assert0(NULL);
            // Object args[2] = { (Object)new_Type_SmallInt(index), key };
            return;
        }
    }
    /* TODO jump to error handler. */
    assert0(self->key == key);
    assert(index < self->values->size->value,
		   printf("Lookup failed, index \"%i\" out of range [0:%i]", index, self->values->size->value));
    
    self->values->values[index] = value;
}


void push_restore_env()
{
    push_CNT(restore_env);
    poke_EXP(1, current_env());
}

CNT(restore_env)
    Object result = pop_EXP();
    Env = peek_EXP(1);
    poke_EXP(1, result);
}

/* =========================================================================*/

void post_init_Runtime_Env()
{
    Env = (Object)new_Runtime_Env_Sized(Nil, Nil, 0);
}
