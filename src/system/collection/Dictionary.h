#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <pinocchio.h>

/* ========================================================================= */

struct Dictionary_t {
    uns_int             size;
    SmallInt            maxLinear;
    SmallInt            ratio;
    Array               data;
    Optr                linear;
};

CREATE_INITIALIZERS(Dictionary);

extern Dictionary new_Dictionary();

/* ========================================================================= */

#define DICTIONARY_BUCKET_SIZE 2

/* ========================================================================= */

extern Optr Dictionary_quick_lookup(Dictionary self, Optr key);
extern void Dictionary_quick_store(Dictionary self,
                                        Optr key, Optr value);

/* ========================================================================= */

extern long unwrap_hash(Dictionary self, Optr w_hash);
extern void Dictionary_grow(Dictionary self);
extern long Dictionary_grow_check(Dictionary self);
extern DictBucket * get_bucketp(Dictionary dictionary, long hash);
extern int Bucket_compare_key(Optr inkey, Optr dictkey);
extern void add_to_bucket(DictBucket * bucketp, Optr key, Optr value);
extern void remove_from_bucket(uns_int idx, DictBucket bucket);
extern int tpush_hash(Optr key);
/* ========================================================================= */

#endif // DICTIONARY_H
