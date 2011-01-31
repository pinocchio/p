#include <pinocchio.h>

/* ======================================================================= */
Class MethodDictionary_class;
/* ======================================================================= */

MethodDictionary new_MethodDictionary()
{
    NEW_OBJECT_WITH_CLASS(Dictionary, MethodDictionary_class);
    result->size      = new_SmallInteger(0);
    result->ratio     = new_SmallInteger(500);
    result->maxLinear = new_SmallInteger(20);
    result->buckets   = new_BucketArray(20 << 1);
    result->linear    = true;
    return result;
}

/* ======================================================================= */

static uns_int bucket_index(MethodDictionary dictionary, Symbol selector)
{
    BucketArray buckets = dictionary->buckets;
    if (buckets->size == 1) {
        return 0;
    } else {
        uns_int hash = Symbol_hash(selector);
        return hash % buckets->size;
    }
}

Method MethodDictionary_lookup(MethodDictionary dictionary, Symbol selector)
{
    uns_int bucket_idx = bucket_index(dictionary, selector);
    Bucket bucket      = dictionary->buckets->bucket[bucket_idx];
    uns_int i;
    for (i = 0; i < bucket->tally->value; i = i+2) {
        if ((Symbol)bucket->value[i] == selector) {
            return (Method)bucket->value[i+1];
        }
    }
    return NULL;
}

static void MethodDictionary_grow(MethodDictionary dictionary)
{
    long size = dictionary->size->value + 1;
    dictionary->size = new_SmallInteger(size);

    /* If the dictionary is still in the linear phase, 
     * we grow differently to make sure that we immediately
     * expand to a dictionary with more than 2 buckets.
     * Otherwise it would trigger multiple grows at once.
     */
    if (dictionary->linear == true) {
        if (size >= dictionary->maxLinear->value) {
            dictionary->linear = false;
            // initial grow
        }
        return;
    }

    BucketArray old_buckets = dictionary->buckets;
    if (size / old_buckets->size <= dictionary->ratio->value) {
        return;
    }

    /* The size is a power of two. So in binary it represents the next
     * bit to be taken into account from the hash. This bit identifies
     * which of the pair of buckets to use
     */
    uns_int newbit = old_buckets->size;
    dictionary->buckets = new_BucketArray_sized(newbit << 1);

    uns_int bucket_idx;

    for (bucket_idx = 0; bucket_idx < old_buckets->size; bucket_idx++) {
        Bucket bucket = old_buckets->bucket[bucket_idx];
        if ((Object)bucket == nil) {
            continue;
        }
        
        /* We reorder all the elements so that the keys with the high bit set
         * are moved to the back. We keep track of this by decreasing the size
         * to point to the end of the elements without the high bit set, and a
         * counter of the amount of elements that have the bit set.
         * This trick avoids multiple allocations of growing size for the
         * paired bucket, or alternatively allocating potentially too much memory.
         */
        uns_int idx = 0;
        uns_int newcount = 0;
        while (idx < bucket->size) {
            Symbol selector = (Symbol)bucket->value[idx];
            if (Symbol_hash(selector) & newbit) {
                bucket->size -= 2;
                newcount += 2;
                Object method = bucket->value[idx+1];
                // if (bucket->size == idx) { break; }
                bucket->value[idx]   = bucket->value[bucket->size];
                bucket->value[idx+1] = bucket->value[bucket->size+1];
                bucket->value[bucket->size]   = (Object)selector;
                bucket->value[bucket->size+1] = method;
            } else {
                idx += 2;
            }
        }

        dictionary->buckets->bucket[bucket_idx] = bucket;

        /* If there are elements with the high bit set, allocate a bucket and move the
         * elements there
         */
        if (newcount > 0) {
            Bucket new_bucket;
            /* If the old bucket is now empty, use it as the new bucket
             */
            if (bucket->size == 0) {
                bucket->size = newcount;
                new_bucket = bucket;
            } else {
                Bucket new_bucket = new_Bucket_sized(newcount << 2);
                for (idx = 0; idx < newcount; idx += 1) {
                    new_bucket->value[idx] = bucket->value[bucket->size + idx];
                }
            }
            dictionary->buckets->bucket[bucket_idx + newbit] = new_bucket;
        }
    }
}

void MethodDictionary_store(MethodDictionary dictionary, Symbol selector, Method method)
{
    uns_int bucket_idx = bucket_index(dictionary, selector);
    Bucket bucket      = dictionary->buckets->bucket[bucket_idx];
    if ((Object)bucket == nil) {
        Bucket new_bucket = new_Bucket();
        dictionary->buckets->bucket[bucket_idx] = new_bucket;
        new_bucket->value[0] = (Object)selector;
        new_bucket->value[1] = (Object)method;
        new_bucket->tally    = new_SmallInteger(2);
        MethodDictionary_grow(dictionary);
        return;
    }

    uns_int i;
    for (i = 0; i < bucket->tally->value; i = i+2) {
        if ((Symbol)bucket->value[i] == selector) {
            bucket->value[i+1] = (Object)method;
            return;
        }
    }

    if (i == bucket->size) {
        Bucket new_bucket = new_Bucket_sized(bucket->size << 1);
        for (i = 0; i < bucket->size; i++) {
            new_bucket->value[i] = bucket->value[i];
        }
        dictionary->buckets->bucket[bucket_idx] = new_bucket;
    }
    bucket->value[i]   = (Object)selector;
    bucket->value[i+1] = (Object)method;
    bucket->tally = new_SmallInteger(i + 2);
    MethodDictionary_grow(dictionary);
}
