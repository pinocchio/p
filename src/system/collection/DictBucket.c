#include <stdlib.h>
#include <stdio.h>
#include <system/collection/DictBucket.h>

/* ========================================================================= */

DECLARE_CLASS(Collection_DictBucket);

/* ========================================================================= */

Collection_DictBucket new_Collection_DictBucket(uns_int size)
{
    NEW_ARRAY_OBJECT(Collection_DictBucket, size);
    result->size  = size;
    result->tally = new_Type_SmallInt(0);
    while (0 != size--) {
        result->values[size] = Nil;
    }
    return result;
}

void pre_init_Collection_DictBucket()
{
    Collection_DictBucket_Class =
        new_Class_named(Type_Object_Class,
                        L"Collection_DictBucket",
                        CREATE_ARRAY_TAG(COLLECTION_DICTBUCKET));
    REFER_TO(Collection_DictBucket);
}

/* ========================================================================= */

// NATIVES GO HERE

/* ========================================================================= */

void post_init_Collection_DictBucket()
{

}
