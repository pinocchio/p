#include <stdlib.h>
#include <stdio.h>
#include <system/slot/UIntSlot.h>

/* ========================================================================= */

UIntSlot new_UIntSlot(uns_int index, const wchar_t * name) 
{
    NEW_OBJECT(UIntSlot);
    result->index   = index;
    result->name    = (Optr)raw_Symbol(name);
    result->package = (Optr)nil;
    return result;
}

/* ========================================================================= */


static Optr UIntSlot_readFrom_(UIntSlot var, Optr self)
{
    return wrap_int((uns_int)Object_instVarAt_(
						self,
						var->index));
}

static void UIntSlot_assign_on_(UIntSlot var,
                                              Optr value,
                                              Optr self)
{
    Object_instVarAt_put_(self,
						  var->index,
						  (Optr)(uns_int)unwrap_int(value));
}
void UIntSlot_eval(UIntSlot var)
{
    POKE_EXP(0, UIntSlot_readFrom_(var,
                    current_env()->home_context->self));
}

void UIntSlot_assign(UIntSlot var, Optr value)
{
    UIntSlot_assign_on_(var, value, current_env()->home_context->self);
}

/* ========================================================================= */

NATIVE1(UIntSlot_readFrom_)
    Optr receiver = NATIVE_ARG(0);
    RETURN_FROM_NATIVE(
        UIntSlot_readFrom_((UIntSlot)self,
                                         receiver));
}

NATIVE2(UIntSlot_assign_on_)
    Optr value = NATIVE_ARG(0);
    Optr o = NATIVE_ARG(1);
    UIntSlot_assign_on_((UIntSlot)self,
                                value, o);
    RETURN_FROM_NATIVE(value);
}

/* ========================================================================= */

void post_init_UIntSlot()
{
    Dictionary natives = add_plugin(L"Slot.UIntSlot");
    store_native(natives, L"assign:on:", NM_UIntSlot_assign_on_);
    store_native(natives, L"readFrom:" , NM_UIntSlot_readFrom_);
}
