#ifndef IDENTITY_DICTIONARY_H
#define IDENTITY_DICTIONARY_H

#include <pinocchio.h>

/* ========================================================================= */

struct IdentityDictionary_t {
    uns_int             size;
    SmallInt            maxLinear;
    SmallInt            ratio;
    Array               data;
    Optr                linear;
};

CREATE_INITIALIZERS(IdentityDictionary);

extern IdentityDictionary new_IdentityDictionary();
extern Optr IdentityDictionary_lookup(IdentityDictionary self, Optr key);
extern void IdentityDictionary_store(IdentityDictionary self, Optr key, Optr value);

/* ========================================================================= */

#endif // IDENTITY_DICTIONARY_H
