#ifndef CHARACTERTABLE_H
#define CHARACTERTABLE_H

#include <pinocchio.h>

/* ======================================================================== */

struct Type_CharacterTable_t {
    Type_Character chars[0];
};

CREATE_INITIALIZERS(CharacterTable)
extern Type_CharacterTable new_CharacterTable();

/* ======================================================================== */

extern Type_CharacterTable Character_table;

/* ======================================================================== */

#endif // CHARACTERTABLE_H
