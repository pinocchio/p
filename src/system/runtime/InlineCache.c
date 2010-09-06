#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/InlineCache.h>
#include <lib/lib.h>

/* ========================================================================= */

Array new_InlineCache()
{
    return instantiate_sized(InlineCache_Class,
                             DEFAULT_INLINECACHE_SIZE << 1);
}

/* ========================================================================= */

Optr InlineCache_lookup(Array cache, Optr class)
{
    int i;
    for (i = 0; i < cache->size; i += 2) {
        if (cache->values[i] == class) {
            return cache->values[i+1];
        }
    }
    return NULL;
}

void InlineCache_store(Array cache, Optr class, Optr method)
{
    int i;
    for (i = 0; i < cache->size; i += 2) {
        if (cache->values[i] == nil) {
            cache->values[i]    = class;
            cache->values[i+1]  = method;
            return;
        }
    }
}

/* ========================================================================= */

NATIVE1(InlineCache_checkCached_)
    Optr key = NATIVE_ARG(0);
    Optr result = InlineCache_lookup((Array)self, key);
    if (result) {
        RETURN_FROM_NATIVE(result);
    } else {
        RETURN_FROM_NATIVE(nil);
    }
}


NATIVE2(InlineCache_cache_at_) 
    Optr method   = NATIVE_ARG(0);
    Optr key      = NATIVE_ARG(1);
    InlineCache_store((Array)self, key, method);
    RETURN_FROM_NATIVE(self);
}

/* ========================================================================= */

void post_init_InlineCache()
{
    PLUGIN natives = add_plugin(L"Runtime.InlineCache");
    store_native(natives, L"checkCached:", NM_InlineCache_checkCached_);
    store_native(natives, L"cache:at:",    NM_InlineCache_cache_at_);
}
