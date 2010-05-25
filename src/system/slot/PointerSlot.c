#include <stdlib.h>
#include <stdio.h>
#include <system/slot/PointerSlot.h>

/* ========================================================================= */

Slot_PointerSlot new_Slot_PointerSlot(uns_int index, const wchar_t * name) 
{
    NEW_OBJECT(Slot_PointerSlot);
    result->index   = new_Number_SmallInt(index);
    result->name    = (Object)new_Type_Symbol(name);
    result->package = (Object)Nil;
    return result;
}

/* ========================================================================= */
