
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <pinocchio.h>

/* ========================================================================= */

DECLARE_CLASS(Object);

/* ========================================================================= */

SmallInt Object_identityHash(Object object)
{
	Class cls = HEADER(object);
    if (cls == Symbol_Class) {
        return Symbol_hash((Symbol)object);
    } else if (cls == SmallInt_Class) { 
        return (SmallInt)object;
    }
	return new_SmallInt(((uns_int)object) >> 3);
}

NATIVE0(Object_identityHash)
    RETURN_FROM_NATIVE(Object_identityHash((Object)self));
}

NATIVE0(Object_class)
    RETURN_FROM_NATIVE(HEADER(self))
}

NATIVE1(Object_equals)
    Optr arg = NATIVE_ARG(0);
    RETURN_FROM_NATIVE(get_bool(self == arg));
}

Optr raw_Object_at(Object o, Optr tag, long index)
{
    ASSERT_TAG_SIZE(tag, index);
    return o->ivals[index];
}

void raw_Object_at_put(Object o, Optr tag,
                       long index, Optr value)
{
    ASSERT_TAG_SIZE(tag, index);
    o->ivals[index] = value;
}

NATIVE0(Object_size)
    Optr tag = GETTAG(self);
    uns_int size;
    if (TAG_IS_LAYOUT(tag, Array)) {
        size = ((Array)self)->size;
    } else if (TAG_IS_LAYOUT(tag, Words)) {
        size = ((Symbol)self)->size;
    } else {
        assert1(NULL, "Object is not indexable");       
    }
    SmallInt result = new_SmallInt(size);
    RETURN_FROM_NATIVE(result);
}

Optr raw_Array_at(Array array, Optr tag, long index)
{
    assert1(array->size > index, "Trying to read past end");
    assert1(0 <= index, "Trying to read before start");
    return array->values[TAG_SIZE(tag) + index];
}

NATIVE1(Array_at_)
    Optr w_index = NATIVE_ARG(0);
    long index   = unwrap_int(w_index);
    Array as     = (Array)self;

    Optr tag     = GETTAG(as);
    ASSERT_TAG_LAYOUT(tag, Array);

    RETURN_FROM_NATIVE(raw_Array_at(as, tag, index - 1));
}

void raw_Array_at_put(Array array, Optr tag,
                           long index, Optr value)
{
    assert1(0 <= index, "Trying to write before start");
    assert1(array->size > index, "Trying to write past end");
    array->values[TAG_SIZE(tag) + index] = value;
}

NATIVE2(Array_at_put_)
    Optr w_index = NATIVE_ARG(0);
    Optr w_arg   = NATIVE_ARG(1);
    long index   = unwrap_int(w_index);
    Array as     = (Array)self;
    Optr tag     = GETTAG(as);

    ASSERT_TAG_LAYOUT(tag, Array); 
    raw_Array_at_put(as, tag, index - 1, w_arg);
    RETURN_FROM_NATIVE(w_arg);
}

NATIVE2(Object_perform_withArguments_)
    Optr w_selector   = NATIVE_ARG(0);
    Optr w_args       = NATIVE_ARG(1);

    Optr tag = GETTAG(w_args);
    ASSERT_TAG_LAYOUT(tag, Array);

    ZAP_NATIVE_INPUT();

    Class_direct_dispatch_withArguments(self, HEADER(self),
                                        w_selector, (Array)w_args);
}

NATIVE1(Object_perform_)
    Optr w_selector = NATIVE_ARG(0);
	ZAP_NATIVE_INPUT();
    Class_direct_dispatch(self, HEADER(self), w_selector, 0);
}


/* ========================================================================= */

void post_init_Object()
{
    PLUGIN natives = add_plugin(L"Type.Object");
    store_native(natives, L"size",                   NM_Object_size);
    store_native(natives, L"at:",                    NM_Array_at_);
    store_native(natives, L"at:put:",                NM_Array_at_put_);
    store_native(natives, L"==",                     NM_Object_equals);
    store_native(natives, L"=",                      NM_Object_equals);
    store_native(natives, L"class",                  NM_Object_class);
    store_native(natives, L"identityHash",           NM_Object_identityHash);
    store_native(natives, L"perform:withArguments:", NM_Object_perform_withArguments_);
    store_native(natives, L"perform:",               NM_Object_perform_);
}
