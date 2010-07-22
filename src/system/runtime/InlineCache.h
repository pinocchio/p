#ifndef RUNTIME_INLINECACHE_H
#define RUNTIME_INLINECACHE_H

#include <pinocchio.h>

/* ========================================================================= */

#define DEFAULT_INLINECACHE_SIZE 8

extern Array new_InlineCache();
extern Optr InlineCache_lookup(Array cache, Optr class);
extern void InlineCache_store(Array cache, Optr class, Optr method);
extern void post_init_InlineCache();

/* ========================================================================= */

#endif // RUNTIME_INLINECACHE_H
