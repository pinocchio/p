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
    return result;
}

/* ========================================================================= */

void post_init_Runtime_InlineCache()
{

}
