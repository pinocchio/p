#ifndef KERNEL_COLLECTIONS_IDENTITYDICTIONARY_H
#define KERNEL_COLLECTIONS_IDENTITYDICTIONARY_H

#include <pinocchio.h>

/* ======================================================================= */

extern Class IdentityDictionary_class;

/* ======================================================================= */

extern IdentityDictionary new_IdentityDictionary();
extern Object IdentityDictionary_lookup(IdentityDictionary dictionary, Symbol symbol);
extern void IdentityDictionary_store(IdentityDictionary dictionary, Symbol symbol, Object value);

/* ======================================================================= */

#endif // KERNEL_COLLECTIONS_IDENTITYDICTIONARY_H
