#ifndef KERNEL_COLLECTIONS_IDENTITYDICTIONARY_H
#define KERNEL_COLLECTIONS_IDENTITYDICTIONARY_H

#include <pinocchio.h>

/* ======================================================================= */

extern struct Class IdentityDictionary_class;

/* ======================================================================= */

extern tIdentityDictionary new_IdentityDictionary();
extern tObject IdentityDictionary_lookup(tIdentityDictionary dictionary, tObject key);
extern void IdentityDictionary_store(tIdentityDictionary dictionary, tObject key, tObject value);

/* ======================================================================= */

#endif // KERNEL_COLLECTIONS_IDENTITYDICTIONARY_H
