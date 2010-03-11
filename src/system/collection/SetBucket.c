#include <stdlib.h>
#include <stdio.h>
#include <system/collection/SetBucket.h>

/* ========================================================================= */

DECLARE_CLASS(Collection_SetBucket);

/* ========================================================================= */

Collection_SetBucket new_Collection_SetBucket(uns_int size)
{
    NEW_ARRAY_OBJECT(Collection_SetBucket, size);
    result->size  = size;
    result->tally = new_Type_SmallInt(0);
    while (0 != size--) {
        result->values[size] = Nil;
    }
    return result;
}

void pre_init_Collection_SetBucket()
{
    Collection_SetBucket_Class =
        new_Class_named(Type_Object_Class,
                        L"Collection_SetBucket",
                        CREATE_ARRAY_TAG(COLLECTION_SETBUCKET));
    REFER_TO(Collection_SetBucket);
}

/* ========================================================================= */

// NATIVES GO HERE

/* ========================================================================= */

void post_init_Collection_SetBucket()
{

}
