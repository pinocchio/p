#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <pinocchio.h>

/* ========================================================================== */

struct Type_Dictionary_t {
    Type_Array layout;
};

CREATE_INITIALIZERS(Dictionary)

Type_Dictionary new_Dictionary();

/* ========================================================================== */

Object Dictionary_lookup(Type_Dictionary self, Object key);
Object Dictionary_store_(Type_Dictionary self, Object key, Object value);

/* ========================================================================== */

#endif // DICTIONARY_H
