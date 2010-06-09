#ifndef RUNTIME_INLINECACHE_H
#define RUNTIME_INLINECACHE_H

#include <pinocchio.h>

/* ========================================================================= */

#define DEFAULT_INLINECACHE_SIZE 4

extern Array new_InlineCache();
extern Optr InlineCache_lookup(Array cache, Optr class);
extern void InlineCache_store(Array cache, Optr class, Optr method);

/* ========================================================================= */

#endif // RUNTIME_INLINECACHE_H
