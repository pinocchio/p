#ifndef CHARACTER_H
#define CHARACTER_H

#include <pinocchio.h>

/* ========================================================================= */
#define CHARACTER_TABLE_SIZE 256
/* ========================================================================= */

struct Character_t {
    wchar_t value;
};

Character new_Character(wchar_t value);

extern void post_init_Character();

/* ========================================================================= */

extern Character new_Character_raw(wchar_t value);
extern Character new_Character_fromInt(long value);

/* ========================================================================= */

#endif // CHARACTER_H
