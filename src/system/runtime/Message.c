
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Message.h>

/* ========================================================================= */

DECLARE_CLASS(Runtime_Message);

/* ========================================================================= */

void pre_init_Runtime_Message()
{
    Runtime_Message_Class =
        new_Class_named((Object)Type_Object_Class,
                        L"Runtime_Message",
                        CREATE_OBJECT_TAG(RUNTIME_MESSAGE));
}

/* ========================================================================= */

Runtime_Message new_Runtime_Message(Object selector, uns_int size)
{
    NEW_ARRAY_OBJECT(Runtime_Message, Object[size]);
    result->size     = size;
    result->selector = selector;
    return result;
}

/* ========================================================================= */

void post_init_Runtime_Message()
{

}
