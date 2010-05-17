#ifndef RUNTIME_INLINECACHE_H
#define RUNTIME_INLINECACHE_H

#include <pinocchio.h>

/* ========================================================================= */

#define DEFAULT_INLINECACHE_SIZE 4

extern Collection_Array new_Runtime_InlineCache();
extern Object Runtime_InlineCache_lookup(Collection_Array cache, Object class);
extern void Runtime_InlineCache_store(Collection_Array cache, Object class, Object method);

/* ========================================================================= */

#endif // RUNTIME_INLINECACHE_H
