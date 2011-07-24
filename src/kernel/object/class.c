#include <pinocchio.h>
#include <string.h>

/* ======================================================================= */

tMethodClosure lookup(tObject receiver, tSymbol message)
{
    tClass c                    = CLASS_OF(receiver);
    tIdentityDictionary methods = c->methods;
    if (CLASS_OF(methods) != &IdentityDictionary) {
        return NULL;
    }
    return (tMethodClosure)IdentityDictionary_lookup(methods, (tObject)message);
}
