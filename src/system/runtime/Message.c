
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



/* ========================================================================= */

void post_init_Runtime_Message()
{

}
