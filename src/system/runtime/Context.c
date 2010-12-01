#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Context.h>

MethodContext allocate_context(uns_int argc)
{
    MethodContext context = (MethodContext)&PEEK_EXP(0);
    CLAIM_EXP(CONTEXT_SIZE + argc);
    context->size = argc;
    return context;
}

void post_init_Context()
{
    change_slot_type(Context_Class, UintSlot_Class, 1, 0);
}
