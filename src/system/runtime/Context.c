#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Context.h>

/* ========================================================================= */

DECLARE_CLASS(Runtime_Context);

/* ========================================================================= */

void pre_init_Runtime_Context()
{
    Runtime_Context_Class =
		new_Class_named(Type_Object_Class,
                        L"Context",
                        CREATE_ARRAY_TAG(RUNTIME_CONTEXT));
    Collection_Array layout = (Collection_Array)Runtime_Context_Class->layout;
    HEADER(layout->values[0]) = Slot_UIntSlot_Class;
    HEADER(layout->values[1]) = Slot_UIntSlot_Class;
    REFER_TO(Runtime_Context);
}

void post_init_Runtime_Context()
{

}
