#include <stdlib.h>
#include <stdio.h>
#include <system/slot/PointerSlot.h>

/* ========================================================================= */

PointerSlot new_PointerSlot(uns_int index, const wchar_t * name) 
{
    NEW_OBJECT(PointerSlot);
    result->index   = index;
    result->name    = (Object)new_Symbol(name);
    result->package = (Object)Nil;
    return result;
}

/* ========================================================================= */
