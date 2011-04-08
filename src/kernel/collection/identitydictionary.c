#include <pinocchio.h>

/* ======================================================================= */
Class IdentityDictionary_class;
/* ======================================================================= */

IdentityDictionary new_IdentityDictionary()
{
    NEW_OBJECT_WITH_CLASS(Dictionary, IdentityDictionary_class);
    result->size      = new_SmallInteger(0);
    result->ratio     = new_SmallInteger(500);
    result->maxLinear = new_SmallInteger(20);
    result->buckets   = new_BucketArray(20 << 1);
    result->linear    = true;
    return result;
}

/* ======================================================================= */

static uns_int bucket_index(IdentityDictionary dictionary, Symbol symbol)
{
    BucketArray buckets = dictionary->buckets;
    if (buckets->size == 1) {
        return 0;
    } else {
        uns_int hash = Symbol_hash(symbol);
        return hash % buckets->size;
    }
}

Object IdentityDictionary_lookup(IdentityDictionary dictionary, Symbol symbol)
{
    uns_int bucket_idx = bucket_index(dictionary, symbol);
    Bucket bucket      = dictionary->buckets->bucket[bucket_idx];

    uns_int i;
    uns_int limit = bucket->tally->value;
    for (i = 0; i < limit; i = i+2) {
        if ((Symbol)bucket->value[i] == symbol) {
            return bucket->value[i+1];
        }
    }
    return NULL;
}

static void IdentityDictionary_grow(IdentityDictionary dictionary)
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
            IdentityDictionary_grow( dictionary );        
            IdentityDictionary_grow( dictionary );        
        } else {
	        return;
	}
    } 

    if (100*size / dictionary->buckets->size <= dictionary->ratio->value) {
        return;
    }

    BucketArray old_buckets = dictionary->buckets;


    /* The size is a power of two. So in binary it represents the next
     * bit to be taken into account from the hash. This bit identifies
     * which of the pair of buckets to use
     */
    uns_int newbit = old_buckets->size;
    BucketArray buckets = new_BucketArray_sized(newbit << 1);
    dictionary->buckets = buckets; 

    uns_int bucket_idx;
    uns_int limit = old_buckets->size;

    for (bucket_idx = 0; bucket_idx < limit; bucket_idx++) {
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
        uns_int bucket_size = bucket->tally->value;

        while (idx < bucket_size) {
            Symbol selector = (Symbol)bucket->value[idx];
            
            if (Symbol_hash(selector) & newbit) {
                bucket_size -= 2;
                newcount += 2;
                Object value = bucket->value[idx+1];
                bucket->value[idx]   = bucket->value[bucket_size];
                bucket->value[idx+1] = bucket->value[bucket_size+1];
                bucket->value[bucket_size]   = (Object)selector;
                bucket->value[bucket_size+1] = value;
            } else {
                idx += 2;
            }
        }
        bucket->tally = new_SmallInteger(bucket_size);

        buckets->bucket[bucket_idx] = bucket;

        /* If there are elements with the high bit set, allocate a bucket and move the
         * elements there
         */
        if (newcount > 0) {
            /* If the old bucket is now empty, use it as the new bucket
             */
            Bucket new_bucket;
            if (bucket_size == 0) {
                new_bucket = bucket;
                buckets->bucket[bucket_idx] = nil;
            } else {
                new_bucket = new_Bucket_sized(newcount << 2);
                for (idx = 0; idx < newcount; idx += 1) {
                    new_bucket->value[idx] = bucket->value[bucket_size + idx];
                }
            }
            new_bucket->tally = new_SmallInteger(newcount);
            buckets->bucket[limit+bucket_idx] = new_bucket;

        }
    }
}

void IdentityDictionary_store(IdentityDictionary dictionary, Symbol symbol, Object value)
{
    uns_int bucket_idx = bucket_index(dictionary, symbol);
    BucketArray buckets = dictionary->buckets;
    Bucket bucket       = buckets->bucket[bucket_idx];
    if ((Object)bucket == nil) {
        Bucket new_bucket           = new_Bucket_sized(2);
        buckets->bucket[bucket_idx] = new_bucket;
        new_bucket->value[0]        = (Object)symbol;
        new_bucket->value[1]        = value;
        new_bucket->tally           = new_SmallInteger(2);
        IdentityDictionary_grow(dictionary);
        return;
    }

    uns_int i = 0; for (; i < bucket->tally->value; i = i+2) {
        if ((Symbol)bucket->value[i] == symbol) {
            bucket->value[i+1] = value;
            return;
        }
    }

    if (i == bucket->size) {
        Bucket new_bucket = new_Bucket_sized(bucket->size << 1);
        for (int i = 0; i < bucket->size; i += 1) {
            new_bucket->value[i] = bucket->value[i];
        }
        buckets->bucket[bucket_idx] = bucket = new_bucket;
    }
    bucket->value[i]   = (Object)symbol;
    bucket->value[i+1] = value;
    bucket->tally = new_SmallInteger(i + 2);
    IdentityDictionary_grow(dictionary);
}
