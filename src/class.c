#include <pinocchio.h>
#include <string.h>

/* ======================================================================= */

static long bucket_index(tIdentityDictionary dictionary, tObject key)
{
    tBucketArray buckets = dictionary->buckets;
    if (SIZE(buckets) == 1) {
        return 0;
    } else {
        return HASH(key) % SIZE(buckets);
    }
}

tObject IdentityDictionary_lookup(tIdentityDictionary dictionary, tObject key)
{
    long bucket_idx = bucket_index(dictionary, key);
    tBucket bucket  = dictionary->buckets->bucket[bucket_idx];

    uns_int i;
    uns_int limit = DEC_INT(bucket->tally);
    tObject * value = bucket->value;
    for (i = 0; i < limit; i = i+2) {
        if (value[i] == key) {
            return value[i+1];
        }
    }
    return NULL;
}


extern tClass Kernel_Behavior_Method;
tMethod lookup(tObject receiver, tSymbol message)
{
    tClass c                  = CLASS_OF(receiver);
    tMethod method;
    do { 
        tMethodDictionary methods = c->methods;
        if (CLASS_OF(methods) != &MethodDictionary) {
            return NULL;
        }
        method = (tMethod)IdentityDictionary_lookup(methods, (tObject)message);
    } while (!method && (c = c->super) != (tClass)&nil);
    return method;
}

/* ======================================================================= */
typedef tObject (*method)(tObject receiver);
/* ======================================================================= */

method do_lookup(tObject receiver, tSymbol msg)
{
    tMethod m = lookup(receiver, msg);
    if (!m) {
        return NULL;
    } else {
        return (method)((void**)m + DEC_INT(m->code));
    }
}

tObject send(tObject receiver, const char* msg)
{
    tObject result;
    method code = do_lookup(receiver, new_Symbol(msg));
    __asm("mov %0, %%rdx"::"r"(code));
    __asm("mov %0, %%rdi"::"r"(receiver));
    __asm("mov %0, %%rax"::"r"(CLASS_OF(receiver)));
    __asm("call *%rdx");
    __asm("mov %%rax, %0":"=r"(result));
    return result;
}

/* ======================================================================= */

tObject basicNew(tBehavior b) {
    long _h = DEC_INT(b->instanceHeader);
    tHeader h = *(tHeader*)&_h;
    tObject result;
    if (h.variable) {
        result = (tObject)GC_MALLOC(sizeof(tObject) * (h.base + 3)) + 3;
        result->value[-3] = (tObject)0;
    } else {
        result = (tObject)GC_MALLOC(sizeof(tObject) * (h.base + 2)) + 2;
    }
    result->value[-2] = (tObject)b;
    result->value[-1] = (tObject)_h;
    return result;
}

tObject basicNew_(tBehavior b, long tagged_size) {
    if (!(tagged_size & 1)) {
        PINOCCHIO_FAIL("Invalid size type given, expects SmallInteger");
    }
    long size = DEC_INT(tagged_size);
    long _h   = DEC_INT(b->instanceHeader);
    tHeader h = *(tHeader*)&_h;
    tObject result;
    if (h.variable) {
        result = (tObject)GC_MALLOC(sizeof(tObject) * (size + h.base + 3)) + 3;
        result->value[-3] = (tObject)size;
    } else {
        PINOCCHIO_FAIL("Trying to instantiate non-variable-sized class");
    }
    for( int i = 0; i < size; i++ ) {
        result->value[h.base+i] = &nil;
    }
    result->value[-2] = (tObject)b;
    result->value[-1] = (tObject)_h;
    return result;
}
