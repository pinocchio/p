#include <pinocchio.h>

/* ======================================================================= */
static SymbolTable symboltable;
Class Symbol_class;
Class SymbolTable_class;
/* ======================================================================= */

static void SymbolTable_grow(SymbolTable table)
{
}

static Symbol raw_Symbol(const wchar_t* input, uns_int size, long hash)
{
    NEW_ARRAYED(Symbol, wchar_t, size + 1);
    wcsncpy(result->character, input, size + 1);
    result->hash = new_SmallInteger(hash);
    result->size = size;
    return result;
}

static Symbol SymbolTable_lookup(SymbolTable table, const wchar_t* key)
{
    uns_int size = wcslen(key);
    long hash = wchar_hash(key, size);
    Bucket *bucketp = &table->buckets->bucket[hash % table->buckets->size];
    Bucket bucket   = *bucketp;
    Symbol symbol;
    if (bucket == (Bucket)nil) {
        *bucketp         = new_Bucket();
        bucket           = *bucketp;
        symbol           = raw_Symbol(key, size, hash);
        bucket->value[0] = (Object)symbol;
        bucket->tally    = new_SmallInteger(1);
        SymbolTable_grow(table);
        return symbol;
    }

    uns_int tally = bucket->tally->value;
    uns_int i;
    
    /* Find key in bucket */
    for (i = 0; i < tally; i++) {
        symbol = (Symbol)bucket->value[i];
        if ((Class)get_class((Object)symbol) == Symbol_class
            && symbol->size == size
            && !wcsncmp(symbol->character, key, size)) {
            return symbol;
        }
    }

    /* Grow bucket if full */
    if (tally == bucket->size) {
        Bucket old_bucket = bucket;
        *bucketp = new_Bucket_sized(bucket->size * 2);
        bucket   = *bucketp;
        
        for (i = 0; i < tally; i++) {
            bucket->value[i] = old_bucket->value[i];
        }

        /* Skip over the new element */
        i++;

        for (; i < bucket->size; i++) {
            bucket->value[i] = nil;
        }
    }

    bucket->tally           = new_SmallInteger(tally + 1);
    symbol                  = raw_Symbol(key, size, hash);
    bucket->value[tally]    = (Object)symbol;
    SymbolTable_grow(table);
    return symbol;
}

static SymbolTable new_SymbolTable() {
    NEW_OBJECT_WITH_CLASS(Dictionary, SymbolTable_class);
    result->size      = new_SmallInteger(0);
    result->ratio     = new_SmallInteger(500);
    result->maxLinear = new_SmallInteger(20);
    result->buckets   = new_BucketArray(20);
    result->linear    = true;
    return result;
}

void init_symboltable()
{
    symboltable = new_SymbolTable();
}

Symbol new_Symbol(const wchar_t* input)
{
    return SymbolTable_lookup(symboltable, input);
}
