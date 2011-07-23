#include <pinocchio.h>

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
