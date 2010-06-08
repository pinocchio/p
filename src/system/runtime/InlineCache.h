#ifndef RUNTIME_INLINECACHE_H
#define RUNTIME_INLINECACHE_H

#include <pinocchio.h>

/* ========================================================================= */

#define DEFAULT_INLINECACHE_SIZE 4

extern Array new_Runtime_InlineCache();
extern Optr Runtime_InlineCache_lookup(Array cache, Optr class);
extern void Runtime_InlineCache_store(Array cache, Optr class, Optr method);

/* ========================================================================= */

#endif // RUNTIME_INLINECACHE_H
