#ifndef CHARACTER_H
#define CHARACTER_H

#include <pinocchio.h>

/* ========================================================================= */
#define CHARACTER_TABLE_SIZE 256
/* ========================================================================= */

struct Type_Character_t {
    wchar_t value;
};

Type_Character new_Type_Character(wchar_t value);

extern void post_init_Type_Character();

/* ========================================================================= */

extern Type_Character new_Type_Character_raw(wchar_t value);
extern Type_Character new_Type_Character_fromInt(int value);

/* ========================================================================= */

#endif // CHARACTER_H
