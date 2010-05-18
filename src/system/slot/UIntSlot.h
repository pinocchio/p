#ifndef SLOT_UINTSLOT_H
#define SLOT_UINTSLOT_H

#include <pinocchio.h>

/* ========================================================================= */

#define SLOT_UINTSLOT_SIZE 3
#define SLOT_UINTSLOT_VARS L"index", L"name", L"package"

/* ========================================================================= */

struct Slot_UIntSlot_t {
    Number_SmallInt index;
    Object          name;
    Object          package;
};

CREATE_INITIALIZERS(Slot_UIntSlot)
extern Slot_UIntSlot new_Slot_UIntSlot(uns_int index, const wchar_t * name);

/* ========================================================================= */

extern void Slot_UIntSlot_eval(Slot_UIntSlot var);
extern void Slot_UIntSlot_assign(Slot_UIntSlot var, Object value);

/* ========================================================================= */

#endif // SLOT_UINTSLOT_H
