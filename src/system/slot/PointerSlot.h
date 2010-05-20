#ifndef SLOT_POINTERSLOT_H
#define SLOT_POINTERSLOT_H

#include <pinocchio.h>

/* ========================================================================= */

struct Slot_PointerSlot_t {
    Number_SmallInt   index;
    Object          name;
    Object          package;
};

CREATE_INITIALIZERS(Slot_PointerSlot);
extern Slot_PointerSlot new_Slot_PointerSlot(uns_int index, const wchar_t * name);

/* ========================================================================= */

/* ========================================================================= */

#endif // SLOT_POINTERSLOT_H
