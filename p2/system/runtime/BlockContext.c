
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockContext.h>
#include <pinocchio.h>

/* ======================================================================== */

Type_Class Runtime_BlockContext_Class;
Object Env;

/* ======================================================================== */

Runtime_BlockContext new_Runtime_BlockContext(Object parent, Object key, Type_Array values)
{
    NEW_OBJECT(Runtime_BlockContext);
    result->parent          = parent;
    result->key             = key;
    result->values          = values;
    return result;
}

Runtime_BlockContext new_Runtime_BlockContext_Sized(Object parent, Object key, int size)
{
    NEW_OBJECT(Runtime_BlockContext);
    result->parent          = parent;
    result->key             = key;
    result->values          = new_Type_Array_With(size, Nil);
    return result;
}

Runtime_BlockContext current_env()
{
    return (Runtime_BlockContext) Env;
}

void pre_init_Runtime_BlockContext()
{
    Runtime_BlockContext_Class = new_Named_Class((Object)Type_Object_Class, L"Runtime_BlockContext");
}

/* =========================================================================*/

void Runtime_BlockContext_lookup(Runtime_BlockContext self, unsigned int index, Object key)
{
    while (self->key != key || self->parent == Nil) {
        if (HEADER(self->parent) == (Object)Runtime_BlockContext_Class) {
            self = (Runtime_BlockContext)self->parent;
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

void Runtime_BlockContext_assign(Runtime_BlockContext self, unsigned int index,
                        Object key, Object value)
{
    while (self->key != key || self->parent == Nil) {
        if (HEADER(self->parent) == (Object)Runtime_BlockContext_Class) {
            self = (Runtime_BlockContext)self->parent;
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

void post_init_Runtime_BlockContext()
{
    Env = (Object)new_Runtime_BlockContext_Sized(Nil, Nil, 0);
}
