#ifndef CHARACTER_H
#define CHARACTER_H

#include <pinocchio.h>

/* ========================================================================== */

struct Type_Character_t {
    wchar_t value;
};

CREATE_INITIALIZERS(Character)

Type_Character new_Character(wchar_t value);

#define CHARACTER_TABLE_SIZE 128

/* ========================================================================== */

extern Type_Character new_raw_Character(wchar_t value);

/* ========================================================================== */

#endif // CHARACTER_H
