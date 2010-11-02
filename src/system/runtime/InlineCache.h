#ifndef RUNTIME_INLINECACHE_H
#define RUNTIME_INLINECACHE_H

#include <pinocchio.h>

/* ========================================================================= */

#ifdef NO_IC
    #define DEFAULT_INLINECACHE_SIZE 0
#else // NO_IC
    #ifdef NO_PIC
        #define DEFAULT_INLINECACHE_SIZE 1
    #else // NO_PIC
        #define DEFAULT_INLINECACHE_SIZE 8
    #endif // NO_PIC
#endif // NO_PIC

extern Array new_InlineCache();
extern Optr InlineCache_lookup(Array cache, Optr class);
extern void InlineCache_store(Array cache, Optr class, Optr method);
extern void post_init_InlineCache();

/* ========================================================================= */

#endif // RUNTIME_INLINECACHE_H
