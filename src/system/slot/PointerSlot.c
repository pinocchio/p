#include <stdlib.h>
#include <stdio.h>
#include <system/slot/PointerSlot.h>

/* ========================================================================= */

DECLARE_CLASS(Slot_PointerSlot);

/* ========================================================================= */

Slot_PointerSlot new_Slot_PointerSlot(uns_int index, const wchar_t * name) 
{
    NEW_OBJECT(Slot_PointerSlot);
    result->index   = new_Number_SmallInt(index);
    result->name    = (Object)new_Type_Symbol(name);
    result->package = (Object)Nil;
    return result;
}


void pre_init_Slot_PointerSlot()
{
    Slot_PointerSlot_Class = new_Class_named(Type_Object_Class, L"PointerSlot",
							    CREATE_OBJECT_TAG(SLOT_POINTERSLOT));
    REFER_TO(Slot_PointerSlot);
}

/* ========================================================================= */

// NATIVES GO HERE

/* ========================================================================= */

void post_init_Slot_PointerSlot()
{

}
