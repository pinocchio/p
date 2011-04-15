#include <pinocchio.h>

/* ======================================================================= */
Class MethodDictionary_class;
/* ======================================================================= */

MethodDictionary new_MethodDictionary()
{
    NEW_OBJECT_WITH_CLASS(Dictionary, MethodDictionary_class);
    result->size      = new_SmallInteger(0);
    result->ratio     = new_SmallInteger(5);
    result->maxLinear = new_SmallInteger(20);
    result->buckets   = new_BucketArray(20 << 1);
    result->linear    = true;
    return result;
}

/* ======================================================================= */

MethodClosure MethodDictionary_lookup(MethodDictionary dictionary, Symbol message)
{
    return (MethodClosure)IdentityDictionary_lookup((IdentityDictionary)dictionary, (Object)message);
}

void MethodDictionary_store(MethodDictionary dictionary, Symbol message, MethodClosure method)
{
    IdentityDictionary_store((IdentityDictionary)dictionary, (Object)message, (Object)method );
}
