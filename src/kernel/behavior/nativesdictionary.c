#include <pinocchio.h>

/* ======================================================================= */
Class NativesDictionary_class;
/* ======================================================================= */

NativesDictionary new_NativesDictionary()
{
    NEW_OBJECT_WITH_CLASS(Dictionary, NativesDictionary_class);
    result->size      = new_SmallInteger(0);
    result->ratio     = new_SmallInteger(5);
    result->maxLinear = new_SmallInteger(20);
    result->buckets   = new_BucketArray(20 << 1);
    result->linear    = true;
    return result;
}

/* ======================================================================= */

native NativesDictionary_lookup(NativesDictionary dictionary, NativeName name)
{
	IdentityDictionary module = (IdentityDictionary)IdentityDictionary_lookup((IdentityDictionary)dictionary, name->module );
	return (native) IdentityDictionary_lookup( module, name->name );
}

void NativesDictionary_store(NativesDictionary dictionary, NativeName name, native aNative)
{
	IdentityDictionary module = (IdentityDictionary)IdentityDictionary_lookup((IdentityDictionary)dictionary, name->module );
    if( module == NULL ) {
        module = new_IdentityDictionary();
    	IdentityDictionary_store((IdentityDictionary)dictionary, name->module, (Object)module );
    }
	IdentityDictionary_store(module, name->name, (Object)aNative );
}
