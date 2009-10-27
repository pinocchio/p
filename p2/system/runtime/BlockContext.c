
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockContext.h>
#include <pinocchio.h>

/* ========================================================================= */

Type_Class Runtime_BlockContext_Class;
static Object _Env_;

/* ========================================================================= */

Runtime_BlockContext new_Runtime_BlockContext(Runtime_BlockClosure closure,
                                              Type_Array values)
{
    NEW_OBJECT(Runtime_BlockContext);
    result->home_context   = closure->context->home_context;
    result->closure        = closure;
    result->values         = values;
    result->pc             = 0;
    result->parent         = current_env();
    return result;
}

Runtime_BlockContext current_env()
{
    return (Runtime_BlockContext)_Env_;
}

void set_env(Object env)
{
    _Env_ = env;
}

void pre_init_Runtime_BlockContext()
{
    Runtime_BlockContext_Class = new_Named_Class((Object)Type_Object_Class,
                                                 L"Runtime_BlockContext",
                                                 create_type(4, OBJECT));
}

/* ========================================================================= */

Object Runtime_BlockContext_lookup(Runtime_BlockContext self, 
                                 uns_int index, Object key)
{
    while ((Object)self->closure->code != key && (Object)self->closure->context != Nil) {
        if (HEADER(self->closure->context) == (Object)Runtime_BlockContext_Class) {
            self = (Runtime_BlockContext)self->closure->context;
        } else {
            /* TODO Schedule at:in: message send. */
            assert1(NULL, "TODO Schedule at:in: message send");
            //Object args[2] = { (Object)new_Type_SmallInt(index), key };
            return NULL;
        }
    }
    /* TODO jump to error handler. */
    assert1((Object)self->closure->code == key, "TODO jump to error handler");
    assert(index < self->values->size,
		   printf("Lookup failed, index \"%"F_I"u\" out of range [0:%"F_I"u]", 
                 index, self->values->size));
    
    return self->values->values[index];
}

void Runtime_BlockContext_assign(Runtime_BlockContext self, uns_int index,
                        Object key, Object value)
{
    while ((Object)self->closure->code != key || (Object)self->closure->context == Nil) {
        if (HEADER(self->closure->context) == (Object)Runtime_BlockContext_Class) {
            self = (Runtime_BlockContext)self->closure->context;
        } else {
            /* TODO Schedule at:in: message send. */
            assert1(NULL, "TODO Schedule at:in: message send");
            //Object args[2] = { (Object)new_Type_SmallInt(index), key };
            return;
        }
    }
    /* TODO jump to error handler. */
    assert1((Object)self->closure->code == key, "TODO jump to error handler");
    assert(index < self->values->size,
		   printf("Lookup failed, index \"%"F_I"u\" out of range [0:%"F_I"u]", index, self->values->size));
    
    self->values->values[index] = value;
}

/* ========================================================================= */

void post_init_Runtime_BlockContext()
{
}
