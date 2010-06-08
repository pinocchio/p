#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <pinocchio.h>

/* ========================================================================= */

struct Dictionary_t {
    uns_int             size;
    uns_int             maxLinear;
    uns_int             ratio;
    Array    data;
};

CREATE_INITIALIZERS(Dictionary);

extern Dictionary new_Dictionary();

/* ========================================================================= */

#define DICTIONARY_SIZE 1 << 3
#define DICTIONARY_BUCKET_SIZE 2

/* ========================================================================= */

extern Optr Dictionary_quick_lookup(Dictionary self, Optr key);
extern void Dictionary_quick_store(Dictionary self,
                                        Optr key, Optr value);

extern void Dictionary_direct_store(Dictionary self, long hash,
                                         Optr key, Optr value);
extern void Dictionary_lookup_push();

/* ========================================================================= */

extern void push_hash(Optr key);
extern long unwrap_hash(Dictionary self, Optr w_hash);

/* ========================================================================= */

#endif // DICTIONARY_H
