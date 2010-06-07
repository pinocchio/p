#ifndef SLOT_UINTSLOT_H
#define SLOT_UINTSLOT_H

#include <pinocchio.h>

/* ========================================================================= */

struct UIntSlot_t {
    uns_int index;
    Object  name;
    Object  package;
};

extern void post_init_UIntSlot();
extern UIntSlot new_UIntSlot(uns_int index, const wchar_t * name);

/* ========================================================================= */

extern void UIntSlot_eval(UIntSlot var);
extern void UIntSlot_assign(UIntSlot var, Object value);

/* ========================================================================= */

#endif // SLOT_UINTSLOT_H
