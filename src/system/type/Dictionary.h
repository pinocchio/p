#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <pinocchio.h>

/* ========================================================================= */

#define TYPE_DICTIONARY_SIZE 3
#define TYPE_DICTIONARY_VARS L"layout", L"ratio", L"data"

struct Type_Dictionary_t {
    Type_SmallInt size;
    Type_Array    data;
    float         ratio;
};

CREATE_INITIALIZERS(Type_Dictionary)

Type_Dictionary new_Type_Dictionary();

/* ========================================================================= */

#define DICTIONARY_SIZE 1 << 3
#define DICTIONARY_BUCKET_SIZE 2

/* ========================================================================= */

extern Object Type_Dictionary_quick_lookup(Type_Dictionary self, Object key);
extern void Type_Dictionary_quick_store(Type_Dictionary self,
                                        Object key, Object value);

extern void Type_Dictionary_direct_store(Type_Dictionary self, int hash,
                                         Object key, Object value);
extern void Type_Dictionary_lookup_push();

/* ========================================================================= */

#endif // DICTIONARY_H
