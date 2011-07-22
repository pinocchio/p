#include <pinocchio.h>

/* ======================================================================= */

/*
static void SymbolTable_grow(SymbolTable table)
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
            Symbol key = (Symbol)value[idx];

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
static Symbol raw_Symbol(const wchar_t* input, uns_int size, long hash)
{
    NEW_ARRAYED(Symbol, wchar_t, size);
    wcsncpy(result->character, input, size);
    HASH(result) = hash;
    return result;
}

static Symbol SymbolTable_lookup(SymbolTable table, const wchar_t* key)
{
    uns_int size = wcslen(key);
    long hash = wchar_hash(key, size);

    Bucket *bucketp = &table->buckets->bucket[hash % SIZE(table->buckets)];
    Bucket bucket   = *bucketp;
    Symbol symbol;
    if (bucket == (Bucket)&nil) {
        *bucketp         = new_Bucket();
        bucket           = *bucketp;
        symbol           = raw_Symbol(key, size, hash);
        bucket->value[0] = (Object)symbol;
        bucket->tally    = ENC_INT(1);
        SymbolTable_grow(table);
        return symbol;
    }

    uns_int tally = DEC_INT(bucket->tally);
    uns_int i;
    
    // Find key in bucket 
    for (i = 0; i < tally; i++) {
        symbol = (Symbol)bucket->value[i];
        if (CLASS_OF(symbol) == Symbol_class
            && SIZE(symbol) == size
            && !wcsncmp(symbol->character, key, size)) {
            return symbol;
        }
    }

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
}

Symbol new_Symbol(const wchar_t* input)
{
    return SymbolTable_lookup(symboltable, input);
}
*/

