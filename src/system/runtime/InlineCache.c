#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/InlineCache.h>

/* ========================================================================= */

DECLARE_CLASS(Runtime_InlineCache);

/* ========================================================================= */

void pre_init_Runtime_InlineCache()
{
    Runtime_InlineCache_Class =
        new_Class_named(Type_Object_Class,
                        L"InlineCache",
                        CREATE_OBJECT_TAG(RUNTIME_INLINECACHE));
    REFER_TO(Runtime_InlineCache);
}

/* ========================================================================= */

Runtime_InlineCache new_Runtime_InlineCache()
{
    NEW_OBJECT(Runtime_InlineCache);
    result->class  = Nil;
    result->method = Nil;
    return result;
}

/* ========================================================================= */

NATIVE1(Runtime_InlineCache_checkCached_)
    if (((Runtime_InlineCache)self)->class == NATIVE_ARG(0)) {
        RETURN_FROM_NATIVE(((Runtime_InlineCache)self)->method);
    } else {
        RETURN_FROM_NATIVE(Nil);
    }
}


NATIVE2(Runtime_InlineCache_cache_at_) 
    //TODO typecheck here
    ((Runtime_InlineCache)self)->method = NATIVE_ARG(0); 
    ((Runtime_InlineCache)self)->class  = NATIVE_ARG(1); 
    RETURN_FROM_NATIVE(self);
}

/* ========================================================================= */

void post_init_Runtime_InlineCache()
{
    Collection_Dictionary natives = add_plugin(L"Runtime.InlineCache");
    store_native(natives, SMB_checkCached_, NM_Runtime_InlineCache_checkCached_);
    store_native(natives, SMB_cache_at_, NM_Runtime_InlineCache_cache_at_);
}
