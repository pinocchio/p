
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Message.h>

/* ========================================================================= */

Runtime_Message new_Runtime_Message(Object selector, uns_int size)
{
    NEW_ARRAY_OBJECT(Runtime_Message, Object[size]);
    result->size     = size;
    result->selector = (Symbol)selector;
    return result;
}
