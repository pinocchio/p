#include <stdlib.h>
#include <stdio.h>
#include <system/slot/UIntSlot.h>

/* ========================================================================= */

DECLARE_CLASS(Slot_UIntSlot);

/* ========================================================================= */

Slot_UIntSlot new_Slot_UIntSlot(uns_int index, const wchar_t * name) 
{
    NEW_OBJECT(Slot_UIntSlot);
    result->index   = new_Number_SmallInt(index);
    result->name    = (Object)new_Type_Symbol(name);
    result->package = (Object)Nil;
    return result;
}

void pre_init_Slot_UIntSlot()
{
    Slot_UIntSlot_Class =
        new_Class_named(Type_Object_Class,
                        L"UIntSlot",
                        CREATE_OBJECT_TAG(SLOT_UINTSLOT));
    REFER_TO(Slot_UIntSlot);
}

/* ========================================================================= */


static Object Slot_UIntSlot_readFrom_(Slot_UIntSlot var, Object self)
{
    return wrap_int((uns_int)Object_instVarAt_(
						self,
						unwrap_int((Object)var->index)));
}

static void Slot_UIntSlot_assign_on_(Slot_UIntSlot var,
                                              Object value,
                                              Object self)
{
    Object_instVarAt_put_(self,
						  unwrap_int((Object)var->index),
						  (Object)(uns_int)unwrap_int(value));
}
void Slot_UIntSlot_eval(Slot_UIntSlot var)
{
    poke_EXP(0, Slot_UIntSlot_readFrom_(var,
                    current_env()->home_context->self));
}

void Slot_UIntSlot_assign(Slot_UIntSlot var, Object value)
{
    Slot_UIntSlot_assign_on_(var, value, current_env()->home_context->self);
}

/* ========================================================================= */

NATIVE1(Slot_UIntSlot_readFrom_)
    Object receiver = NATIVE_ARG(0);
    RETURN_FROM_NATIVE(
        Slot_UIntSlot_readFrom_((Slot_UIntSlot)self,
                                         receiver));
}

NATIVE2(Slot_UIntSlot_assign_on_)
    Object value = NATIVE_ARG(0);
    Object o = NATIVE_ARG(1);
    Slot_UIntSlot_assign_on_((Slot_UIntSlot)self,
                                value, o);
    RETURN_FROM_NATIVE(value);
}

/* ========================================================================= */

void post_init_Slot_UIntSlot()
{
    Collection_Dictionary natives = add_plugin(L"Slot.UIntSlot");
    store_native(natives, SMB_assign_on_, NM_Slot_UIntSlot_assign_on_);
    store_native(natives, SMB_readFrom_ , NM_Slot_UIntSlot_readFrom_);
}
