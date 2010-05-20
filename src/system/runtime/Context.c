#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Context.h>

/* ========================================================================= */

DECLARE_CLASS(Runtime_Context);

/* ========================================================================= */

void pre_init_Runtime_Context()
{
    Runtime_Context_Class = new_Class(Type_Object_Class);
    // TODO LAYOUT
    // change_slot_type(Runtime_Context_Class, Slot_UIntSlot_Class, 2, 0, 1);
    REFER_TO(Runtime_Context);
}

void post_init_Runtime_Context()
{

}
