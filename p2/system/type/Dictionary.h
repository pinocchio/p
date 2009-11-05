#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <pinocchio.h>

/* ========================================================================= */

#define TYPE_DICTIONARY_SIZE 1
#define TYPE_DICTIONARY_VARS L"layout"

struct Type_Dictionary_t {
    uns_int     size;
    float       ratio;
    Type_Array  layout;
};

CREATE_INITIALIZERS(Type_Dictionary)

Type_Dictionary new_Type_Dictionary();

/* ========================================================================= */

#define DICTIONARY_SIZE 1 << 3
#define DICTIONARY_BUCKET_SIZE 2

/* ========================================================================= */

Object Type_Dictionary_lookup(Type_Dictionary self, Object key);
Object Type_Dictionary_store_(Type_Dictionary self, Object key, Object value);

/* ========================================================================= */

#endif // DICTIONARY_H
