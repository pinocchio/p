#include <pinocchio.h>

SmallInteger wchar_hash(const wchar_t* string, long size)
{
    // http://www.cse.yorku.ca/~oz/hash.html
    uns_int hash = 5381;
    while (size--) {
        hash += (hash << 5) + *string++;
    }   
    if ((long)hash < 0) {
        hash >>= 1;
    }
    return new_SmallInteger(hash);
}
