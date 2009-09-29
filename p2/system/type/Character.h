#ifndef CHARACTER_H
#define CHARACTER_H

#include <pinocchio.h>

/* ========================================================================== */

struct Type_Character_t {
    wchar_t value;
};

struct Type_CharacterTable_t {
    Type_Character chars[0];
};

CREATE_INITIALIZERS(Character)

Type_Character new_Character(wchar_t value);

#define CHARACTER_TABLE_SIZE 128

/* ========================================================================== */


/* ========================================================================== */

#endif // CHARACTER_H
