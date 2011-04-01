#ifndef KERNEL_OBJECT_BEHAVIOR_NATIVESDICTIONARY_H
#define KERNEL_OBJECT_BEHAVIOR_NATIVESDICTIONARY_H

#include <pinocchio.h>

/* ======================================================================= */

extern Class NativesDictionary_class;

/* ======================================================================= */

extern NativesDictionary new_NativesDictionary();

extern inline native NativesDictionary_lookup(NativesDictionary,NativeName);
extern inline void NativesDictionary_store(NativesDictionary,NativeName,native);

/* ======================================================================= */

#endif // KERNEL_OBJECT_BEHAVIOR_NATIVESDICTIONARY_H
