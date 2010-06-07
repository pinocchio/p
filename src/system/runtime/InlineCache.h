#ifndef RUNTIME_INLINECACHE_H
#define RUNTIME_INLINECACHE_H

#include <pinocchio.h>

/* ========================================================================= */

#define DEFAULT_INLINECACHE_SIZE 4

extern Array new_Runtime_InlineCache();
extern Object Runtime_InlineCache_lookup(Array cache, Object class);
extern void Runtime_InlineCache_store(Array cache, Object class, Object method);

/* ========================================================================= */

#endif // RUNTIME_INLINECACHE_H
