#ifndef RUNTIME_INLINECACHE_H
#define RUNTIME_INLINECACHE_H

#include <pinocchio.h>

/* ========================================================================= */

#define RUNTIME_INLINECACHE_SIZE 2
#define RUNTIME_INLINECACHE_VARS L"class", L"method"

struct Runtime_InlineCache_t {
    Object  class;
    Object  method;
};

CREATE_INITIALIZERS(Runtime_InlineCache)
extern Runtime_InlineCache new_Runtime_InlineCache();

/* ========================================================================= */

/* ========================================================================= */

#endif // RUNTIME_INLINECACHE_H
