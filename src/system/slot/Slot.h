#ifndef SLOT_SLOT_H
#define SLOT_SLOT_H

#include <pinocchio.h>

/* ========================================================================= */

struct Slot_Slot_t {
    Number_SmallInt index;
    Object          name;
    Object          package;
};

CREATE_INITIALIZERS(Slot_Slot);

extern Slot_Slot new_Slot_Slot(uns_int index, const wchar_t * name);

/* ========================================================================= */

extern void Slot_Slot_eval(Slot_Slot var);
extern void Slot_Slot_assign(Slot_Slot var, Object value);

/* ========================================================================= */

#endif // SLOT_SLOT_H
