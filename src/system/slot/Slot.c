#include <stdlib.h>
#include <stdio.h>
#include <system/slot/Slot.h>

/* ========================================================================= */

DECLARE_CLASS(Slot);

/* ========================================================================= */

Slot new_Slot(uns_int index, const wchar_t * name) 
{
    NEW_OBJECT(Slot);
    result->index   = index;
    result->name    = (Object)new_Symbol_cached(name);
    result->package = (Object)Nil;
    return result;
}

/* ========================================================================= */

static Object Slot_readFrom_(Slot var, Object self)
{
    return Object_instVarAt_(self, var->index);
}

static void Slot_assign_on_(Slot var, Object value,
                                        Object self)
{
    Object_instVarAt_put_(self,
						  var->index,
						  value);
}

void Slot_eval(Slot var)
{
    poke_EXP(0, Slot_readFrom_(var,
                    current_env()->home_context->self));
}

void Slot_assign(Slot var, Object value)
{
    Slot_assign_on_(var, value, current_env()->home_context->self);
}

/* ========================================================================= */

NATIVE1(Slot_readFrom_)
    Object receiver = NATIVE_ARG(0); 
    RETURN_FROM_NATIVE(
        Slot_readFrom_((Slot)self, receiver));
}

NATIVE2(Slot_assign_on_)
    Object value = NATIVE_ARG(0);
    Object o = NATIVE_ARG(1);
    Slot_assign_on_((Slot)self,
                                value, o);
    RETURN_FROM_NATIVE(value);
}

/* ========================================================================= */

void post_init_Slot()
{
    change_slot_type(AbstractSlot_Class, UIntSlot_Class, 1, 0);

    Dictionary natives = add_plugin(L"Slot.Slot");
    store_native(natives, SMB_assign_on_, NM_Slot_assign_on_);
    store_native(natives, SMB_readFrom_ , NM_Slot_readFrom_);
}
