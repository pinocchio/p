#include <stdlib.h>
#include <stdio.h>
#include <system/slot/Slot.h>

/* ========================================================================= */

DECLARE_CLASS(Slot_Slot);

/* ========================================================================= */

Slot_Slot new_Slot_Slot(uns_int index, const wchar_t * name) 
{
    NEW_OBJECT(Slot_Slot);
    result->index   = index;
    result->name    = (Object)new_Symbol_cached(name);
    result->package = (Object)Nil;
    return result;
}

/* ========================================================================= */

static Object Slot_Slot_readFrom_(Slot_Slot var, Object self)
{
    return Object_instVarAt_(self, var->index);
}

static void Slot_Slot_assign_on_(Slot_Slot var, Object value,
                                        Object self)
{
    Object_instVarAt_put_(self,
						  var->index,
						  value);
}

void Slot_Slot_eval(Slot_Slot var)
{
    poke_EXP(0, Slot_Slot_readFrom_(var,
                    current_env()->home_context->self));
}

void Slot_Slot_assign(Slot_Slot var, Object value)
{
    Slot_Slot_assign_on_(var, value, current_env()->home_context->self);
}

/* ========================================================================= */

NATIVE1(Slot_Slot_readFrom_)
    Object receiver = NATIVE_ARG(0); 
    RETURN_FROM_NATIVE(
        Slot_Slot_readFrom_((Slot_Slot)self, receiver));
}

NATIVE2(Slot_Slot_assign_on_)
    Object value = NATIVE_ARG(0);
    Object o = NATIVE_ARG(1);
    Slot_Slot_assign_on_((Slot_Slot)self,
                                value, o);
    RETURN_FROM_NATIVE(value);
}

/* ========================================================================= */

void post_init_Slot_Slot()
{
    change_slot_type(Slot_AbstractSlot_Class, Slot_UIntSlot_Class, 1, 0);

    Collection_Dictionary natives = add_plugin(L"Slot.Slot");
    store_native(natives, SMB_assign_on_, NM_Slot_Slot_assign_on_);
    store_native(natives, SMB_readFrom_ , NM_Slot_Slot_readFrom_);
}
