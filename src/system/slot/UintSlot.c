#include <stdlib.h>
#include <stdio.h>
#include <system/slot/UintSlot.h>

/* ========================================================================= */

UintSlot new_UintSlot(uns_int index, const wchar_t * name) 
{
    NEW_OBJECT(UintSlot);
    result->index   = index;
    result->name    = (Optr)raw_Symbol(name);
    result->package = (Optr)nil;
    return result;
}

/* ========================================================================= */


static Optr UintSlot_readFrom_(UintSlot var, Optr self)
{
    return wrap_int((uns_int)Object_instVarAt_(
						self,
						var->index));
}

static void UintSlot_assign_on_(UintSlot var,
                                              Optr value,
                                              Optr self)
{
    Object_instVarAt_put_(self,
						  var->index,
						  (Optr)(uns_int)unwrap_int(value));
}

void UintSlot_assign(UintSlot var, Optr value)
{
    UintSlot_assign_on_(var, value, current_env()->home_context->self);
}

/* ========================================================================= */

NATIVE1(UintSlot_readFrom_)
    Optr receiver = NATIVE_ARG(0);
    RETURN_FROM_NATIVE(
        UintSlot_readFrom_((UintSlot)self,
                                         receiver));
}

NATIVE2(UintSlot_assign_on_)
    Optr value = NATIVE_ARG(0);
    Optr o = NATIVE_ARG(1);
    UintSlot_assign_on_((UintSlot)self,
                                value, o);
    RETURN_FROM_NATIVE(value);
}

/* ========================================================================= */

void post_init_UintSlot()
{
    PLUGIN natives = add_plugin(L"Slot.UintSlot");
    store_native(natives, L"assign:on:", NM_UintSlot_assign_on_);
    store_native(natives, L"readFrom:" , NM_UintSlot_readFrom_);
}
