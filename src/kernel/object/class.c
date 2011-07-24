#include <pinocchio.h>
#include <string.h>

/* ======================================================================= */

tMethod lookup(tObject receiver, tSymbol message)
{
    tClass c                    = CLASS_OF(receiver);
    tIdentityDictionary methods = c->methods;
    if (CLASS_OF(methods) != &IdentityDictionary) {
        return NULL;
    }
    return (tMethod)IdentityDictionary_lookup(methods, (tObject)message);
}
