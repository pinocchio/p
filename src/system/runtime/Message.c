
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Message.h>

/* ========================================================================= */

DECLARE_CLASS(Runtime_Message);

/* ========================================================================= */

void pre_init_Runtime_Message()
{
    Runtime_Message_Class = new_Class(Type_Object_Class);
}

/* ========================================================================= */

Runtime_Message new_Runtime_Message(Object selector, uns_int size)
{
    NEW_ARRAY_OBJECT(Runtime_Message, Object[size]);
    result->size     = size;
    result->selector = (Type_Symbol)selector;
    return result;
}

/* ========================================================================= */

void post_init_Runtime_Message()
{

}
