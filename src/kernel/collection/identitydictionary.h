#ifndef KERNEL_COLLECTIONS_IDENTITYDICTIONARY_H
#define KERNEL_COLLECTIONS_IDENTITYDICTIONARY_H

#include <pinocchio.h>

/* ======================================================================= */

extern Class IdentityDictionary_class;

/* ======================================================================= */

extern IdentityDictionary new_IdentityDictionary();
extern Object IdentityDictionary_lookup(IdentityDictionary dictionary, Object key);
extern void IdentityDictionary_store(IdentityDictionary dictionary, Object key, Object value);

/* ======================================================================= */

#endif // KERNEL_COLLECTIONS_IDENTITYDICTIONARY_H
