#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Context.h>

void post_init_Context()
{
    change_slot_type(Context_Class, UIntSlot_Class, 1, 0);
}
