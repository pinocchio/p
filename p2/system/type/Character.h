#ifndef CHARACTER_H
#define CHARACTER_H

#include <pinocchio.h>

/* ========================================================================= */

struct Type_Character_t {
    wchar_t value;
};

CREATE_INITIALIZERS(Type_Character)

Type_Character new_Type_Character(wchar_t value);

#define CHARACTER_TABLE_SIZE 128

/* ========================================================================= */

extern Type_Character new_raw_Type_Character(wchar_t value);

/* ========================================================================= */

#endif // CHARACTER_H
