#ifndef SLOT_UINTSLOT_H
#define SLOT_UINTSLOT_H

#include <pinocchio.h>

/* ========================================================================= */

struct UintSlot_t {
    uns_int index;
    Optr  name;
    Optr  package;
};

extern void post_init_UintSlot();
extern UintSlot new_UintSlot(uns_int index, const wchar_t * name);

/* ========================================================================= */

extern void UintSlot_eval(UintSlot var);
extern void UintSlot_assign(UintSlot var, Optr value);

/* ========================================================================= */

#endif // SLOT_UINTSLOT_H
