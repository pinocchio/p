
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Message.h>

/* ========================================================================= */

Runtime_Message new_Runtime_Message(Optr selector, uns_int size)
{
    NEW_ARRAY_OBJECT(Runtime_Message, Optr[size]);
    result->size     = size;
    result->selector = (Symbol)selector;
    return result;
}
