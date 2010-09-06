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

extern IdentityDictionary new_IdentityDictionary();
extern Optr IdentityDictionary_quick_lookup(IdentityDictionary self, Optr key);

/* ========================================================================= */

#endif // IDENTITY_DICTIONARY_H
