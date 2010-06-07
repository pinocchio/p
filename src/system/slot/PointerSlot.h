#ifndef SLOT_POINTERSLOT_H
#define SLOT_POINTERSLOT_H

#include <pinocchio.h>

/* ========================================================================= */

struct PointerSlot_t {
    uns_int index;
    Object  name;
    Object  package;
};

extern PointerSlot new_PointerSlot(uns_int index, const wchar_t * name);

/* ========================================================================= */

/* ========================================================================= */

#endif // SLOT_POINTERSLOT_H
