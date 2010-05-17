#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <pinocchio.h>

/* ========================================================================= */

#define COLLECTION_DICTIONARY_SIZE 4
#define COLLECTION_DICTIONARY_VARS L"size", L"maxLinear", L"ratio", L"data"

struct Collection_Dictionary_t {
    Number_SmallInt size;
    Number_SmallInt maxLinear;
    Number_SmallInt ratio;
    Collection_Array    data;
};

CREATE_INITIALIZERS(Collection_Dictionary);

extern Collection_Dictionary new_Collection_Dictionary();

/* ========================================================================= */

#define DICTIONARY_SIZE 1 << 3
#define DICTIONARY_BUCKET_SIZE 2

/* ========================================================================= */

extern Object Collection_Dictionary_quick_lookup(Collection_Dictionary self, Object key);
extern void Collection_Dictionary_quick_store(Collection_Dictionary self,
                                        Object key, Object value);

extern void Collection_Dictionary_direct_store(Collection_Dictionary self, int hash,
                                         Object key, Object value);
extern void Collection_Dictionary_lookup_push();

/* ========================================================================= */

extern void push_hash(Object key);
extern int unwrap_hash(Collection_Dictionary self, Object w_hash);

/* ========================================================================= */

#endif // DICTIONARY_H
