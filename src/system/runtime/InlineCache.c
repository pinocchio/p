#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/InlineCache.h>
#include <lib/lib.h>

/* ========================================================================= */

Array new_Runtime_InlineCache()
{
    return (Array)instantiate_sized((Class)Runtime_InlineCache_Class,
                                         DEFAULT_INLINECACHE_SIZE << 1);
}

/* ========================================================================= */

Object Runtime_InlineCache_lookup(Array cache, Object class)
{
    int i;
    for (i = 0; i < cache->size; i += 2) {
        if (cache->values[i] == class) {
            return cache->values[i+1];
        }
    }
    return NULL;
}

void Runtime_InlineCache_store(Array cache, Object class, Object method)
{
    int i;
    for (i = 0; i < cache->size; i += 2) {
        if (cache->values[i] == Nil) {
            cache->values[i]    = class;
            cache->values[i+1]  = method;
            return;
        }
    }
}

/* ========================================================================= */

NATIVE1(Runtime_InlineCache_checkCached_)
    Object key = NATIVE_ARG(0);
    Object result = Runtime_InlineCache_lookup((Array)self, key);
    if (result) {
        RETURN_FROM_NATIVE(result);
    } else {
        RETURN_FROM_NATIVE(Nil);
    }
}


NATIVE2(Runtime_InlineCache_cache_at_) 
    Object method   = NATIVE_ARG(0);
    Object key      = NATIVE_ARG(1);
    Runtime_InlineCache_store((Array)self, key, method);
    RETURN_FROM_NATIVE(self);
}

/* ========================================================================= */

void post_init_Runtime_InlineCache()
{
    Dictionary natives = add_plugin(L"Runtime.InlineCache");
    store_native(natives, SMB_checkCached_, NM_Runtime_InlineCache_checkCached_);
    store_native(natives, SMB_cache_at_,    NM_Runtime_InlineCache_cache_at_);
}
