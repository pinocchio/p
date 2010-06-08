#ifndef SLOT_SLOT_H
#define SLOT_SLOT_H

#include <pinocchio.h>

/* ========================================================================= */

struct Slot_t {
    uns_int index;
    Optr  name;
    Optr  package;
};

CREATE_INITIALIZERS(Slot);

extern Slot new_Slot(uns_int index, const wchar_t * name);

/* ========================================================================= */

extern void Slot_eval(Slot var);
extern void Slot_assign(Slot var, Optr value);

/* ========================================================================= */

#endif // SLOT_SLOT_H
