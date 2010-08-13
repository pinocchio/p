#include <stdlib.h>
#include <stdio.h>
#include <system/slot/PointerSlot.h>

/* ========================================================================= */

PointerSlot new_PointerSlot(uns_int index, const wchar_t * name) 
{
    NEW_OBJECT(PointerSlot);
    result->index   = index;
    result->name    = (Optr)raw_Symbol(name);
    result->package = (Optr)nil;
    return result;
}

/* ========================================================================= */
