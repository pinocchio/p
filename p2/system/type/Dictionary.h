#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <pinocchio.h>

/* ========================================================================= */

struct Type_Dictionary_t {
    Type_Array layout;
};

CREATE_INITIALIZERS(Type_Dictionary)

Type_Dictionary new_Type_Dictionary();

/* ========================================================================= */

Object Type_Dictionary_lookup(Type_Dictionary self, Object key);
Object Type_Dictionary_store_(Type_Dictionary self, Object key, Object value);

/* ========================================================================= */

#endif // DICTIONARY_H
