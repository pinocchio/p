
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Env.h>
#include <pinocchio.h>

/* ======================================================================== */

Type_Class Type_Runtime_Env_Type_Class;
Object Type_Runtime_Env;

/* ======================================================================== */

Runtime_Env new_Type_Runtime_Env(Object parent, Object key, Type_Array values)
{
    Runtime_Env result    = NEW_t(Runtime_Env);
    HEADER(result)          = (Object)Type_Runtime_Env_Type_Class;
    result->parent          = parent;
    result->key             = key;
    result->values          = values;
    return result;
}

Runtime_Env new_Type_Runtime_Env_Sized(Object parent, Object key, int size)
{
    Runtime_Env result    = NEW_t(Runtime_Env);
    HEADER(result)          = (Object)Type_Runtime_Env_Type_Class;
    result->parent          = parent;
    result->key             = key;
    result->values          = new_Type_Array_With(size, Nil);
    return result;
}

Runtime_Env current_env()
{
    return (Runtime_Env) Type_Runtime_Env;
}

void pre_init_Type_Runtime_Env()
{
    Type_Runtime_Env_Type_Class = new_Named_Type_Class((Object)Type_Object_Type_Class, L"Type_Runtime_Env");
}

/* =========================================================================*/

void Type_Runtime_Env_lookup(Runtime_Env self, unsigned int index, Object key)
{
    while (self->key != key || self->parent == Nil) {
        if (HEADER(self->parent) == (Object)Type_Runtime_Env_Type_Class) {
            self = (Runtime_Env)self->parent;
        } else {
            /* TODO Schedule at:in: message send. */
            assert(NULL);
            //Object args[2] = { (Object)new_Type_SmallInt(index), key };
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

void Type_Runtime_Env_assign(Runtime_Env self, unsigned int index,
                        Object key, Object value)
{
    while (self->key != key || self->parent == Nil) {
        if (HEADER(self->parent) == (Object)Type_Runtime_Env_Type_Class) {
            self = (Runtime_Env)self->parent;
        } else {
            /* TODO Schedule at:in: message send. */
            assert(NULL);
            // Object args[2] = { (Object)new_Type_SmallInt(index), key };
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


void push_restore_env()
{
    push_CNT(CNT_restore_env);
    poke_EXP(1, current_env());
}

void CNT_restore_env()
{
    zap_CNT();
    Object result = pop_EXP();
    Type_Runtime_Env = peek_EXP(1);
    poke_EXP(1, result);
}

/* =========================================================================*/

void post_init_Type_Runtime_Env()
{
    Type_Runtime_Env = (Object)new_Type_Runtime_Env_Sized(Nil, Nil, 0);
}
