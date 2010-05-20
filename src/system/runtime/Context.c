#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Context.h>

void post_init_Runtime_Context()
{
    change_slot_type(Runtime_Context_Class, Slot_UIntSlot_Class, 2, 0, 1);
}
