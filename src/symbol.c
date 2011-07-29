#include <pinocchio.h>

/* ======================================================================= */

long char_hash(const char* string, long size)
{
    // http://www.cse.yorku.ca/~oz/hash.html
    unsigned long hash = 5381ul;
    while (size--) {
        hash += (hash << 5) + *string++;
    }   
    if ((long)hash < 0) {
        hash >>= 1;
    }
    return hash;
}

/*
static void SymbolTable_grow(tSymbolTable table)
{
    long size   = DEC_INT(table->size) + 1;
    table->size = ENC_INT(size);

    if (size / SIZE(table->buckets) <= DEC_INT(table->ratio))
        return;

    BucketArray old_buckets = table->buckets;

    uns_int newbit      = SIZE(old_buckets);
    BucketArray buckets = new_BucketArray_sized(newbit << 1);
    table->buckets      = buckets;

    uns_int bucket_idx;
    uns_int limit       = SIZE(old_buckets);

    for (bucket_idx = 0; bucket_idx < limit; bucket_idx++) {
        Bucket bucket = old_buckets->bucket[bucket_idx];
        if ((Object)bucket == &nil) {
            continue;
        }

        uns_int idx         = 0;
        uns_int newcount    = 0;
        uns_int bucket_size = DEC_INT(bucket->tally);
        Object * value      = bucket->value;

        while (idx < bucket_size) {
            tSymbol key = (tSymbol)value[idx];

            if (HASH(key) & newbit) {
                bucket_size       -= 1;
                newcount          += 1;
                value[idx]         = value[bucket_size];
                value[bucket_size] = (Object)key;
            } else {
                idx += 1;
            }
        }

        bucket->tally = ENC_INT(bucket_size);
        buckets->bucket[bucket_idx] = bucket;

        if (newcount > 0) {
            Bucket new_bucket;
            if (bucket_size == 0) {
                new_bucket = bucket;
                buckets->bucket[bucket_idx] = (Bucket)&nil;
            } else {
                new_bucket = new_Bucket_sized(newcount << 1);
                for (idx = 0; idx < newcount; idx += 1) {
                    new_bucket->value[idx] = bucket->value[bucket_size + idx];
                }
            }
            new_bucket->tally = ENC_INT(newcount);
            buckets->bucket[limit+bucket_idx] = new_bucket;
        }
    }
}

static tSymbol raw_Symbol(const char* input, uns_int size, long hash)
{
    NEW_ARRAYED(Symbol, char, size);
    strncpy(result->character, input, size);
    HASH(result) = hash;
    return result;
}
*/

static tSymbol SymbolTable_lookup(tSymbolTable table, const char* key)
{
    uns_int size     = strlen(key);
    long hash        = char_hash(key, size);

    tBucket *bucketp = &table->buckets->bucket[hash % SIZE(table->buckets)];
    print_object(table);
    tBucket bucket   = *bucketp;
    tSymbol symbol;
    if (bucket == (tBucket)&nil) {
        PINOCCHIO_FAIL("Symbol not found!");
    /*
        *bucketp         = new_Bucket();
        bucket           = *bucketp;
        symbol           = raw_Symbol(key, size, hash);
        bucket->value[0] = (tObject)symbol;
        bucket->tally    = ENC_INT(1);
        SymbolTable_grow(table);
        return symbol;
    */
    }

    uns_int tally = DEC_INT(bucket->tally);
    uns_int i;

    // Find key in bucket 
    for (i = 0; i < tally; i++) {
        symbol = (tSymbol)bucket->value[i];
        if (CLASS_OF(symbol) == &Symbol
            && SIZE(symbol) == size
            && !strncmp(symbol, key, size)) {
            return symbol;
        }
    }

    PINOCCHIO_FAIL("Symbol not found!");
    return 0;
    
    /*
    // Grow bucket if full
    if (tally == SIZE(bucket)) {
        Bucket old_bucket = bucket;
        *bucketp = new_Bucket_sized(SIZE(bucket) * 2);
        bucket   = *bucketp;
        
        for (i = 0; i < tally; i++) {
            bucket->value[i] = old_bucket->value[i];
        }

        // Skip over the new element
        i++;

        for (; i < SIZE(bucket); i++) {
            bucket->value[i] = &nil;
        }
    }

    symbol               = raw_Symbol(key, size, hash);
    bucket->value[tally] = (Object)symbol;
    bucket->tally        = ENC_INT(tally + 1);
    SymbolTable_grow(table);
    return symbol;
    */
}

tSymbol new_Symbol(const char* input)
{
    return SymbolTable_lookup(&symboltable, input);
}
