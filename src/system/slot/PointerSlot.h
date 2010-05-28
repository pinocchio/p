#ifndef SLOT_POINTERSLOT_H
#define SLOT_POINTERSLOT_H

#include <pinocchio.h>

/* ========================================================================= */

struct Slot_PointerSlot_t {
    uns_int index;
    Object  name;
    Object  package;
};

extern Slot_PointerSlot new_Slot_PointerSlot(uns_int index, const wchar_t * name);

/* ========================================================================= */

/* ========================================================================= */

#endif // SLOT_POINTERSLOT_H
