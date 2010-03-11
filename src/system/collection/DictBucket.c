#include <stdlib.h>
#include <stdio.h>
#include <system/collection/DictBucket.h>

/* ========================================================================= */

DECLARE_CLASS(Collection_DictBucket);

/* ========================================================================= */

Collection_DictBucket new_Collection_DictBucket()
{
    #error "TODO fill in default C constructor"
}

void pre_init_Collection_DictBucket()
{
    Collection_DictBucket_Class = new_Class_named(Type_Object_Class, L"Collection_DictBucket");
    REFER_TO(Collection_DictBucket);
}

/* ========================================================================= */

// NATIVES GO HERE

/* ========================================================================= */

void post_init_Collection_DictBucket()
{

}
