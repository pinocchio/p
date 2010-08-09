
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <pinocchio.h>

/* ========================================================================= */

DECLARE_CLASS(Object);

/* ========================================================================= */

SmallInt Object_hash(Object object)
{
    uns_int hash = (uns_int)object;
    return new_SmallInt(hash>>3);
}

NATIVE0(Object_hash)
    RETURN_FROM_NATIVE(Object_hash((Object)self));
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
    ASSERT_TAG_SIZE(tag, index); o->ivals[index] = value;
}

Optr Object_instVarAt_(Optr self, long index)
{
    Optr tag = GETTAG(self);
    if (TAG_IS_LAYOUT(tag, Object)) {
        return raw_Object_at((Object)self, tag, index);
    } else if (TAG_IS_LAYOUT(tag, Array)) {
        return raw_Array_instAt((Array)self, tag, index);
    } else if (tag == nil) {
        assert1(NULL, "Trying to access object with Nil as layout");
    } else {
        assert1(NULL, "Trying to access object without instvars");
    }
    return NULL;
}

void Object_instVarAt_put_(Optr self, long index, Optr value)
{
    Optr tag = GETTAG(self);
    if (TAG_IS_LAYOUT(tag, Object)) {
        raw_Object_at_put((Object)self, tag, index, value);
    } else if (TAG_IS_LAYOUT(tag, Array)) {
        raw_Array_instAt_put((Array)self, tag, index, value);
    } else if (tag == nil) {
        assert1(NULL, "Trying to access object with Nil as layout");
    } else {
        assert1(NULL, "Trying to access object without instvars");
    }
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
    Dictionary natives = add_plugin(L"Type.Object");
    store_native(natives, L"size",                   NM_Object_size);
    store_native(natives, L"at:",                    NM_Array_at_);
    store_native(natives, L"at:put:",                NM_Array_at_put_);
    store_native(natives, L"==",                     NM_Object_equals);
    store_native(natives, L"=",                      NM_Object_equals);
    store_native(natives, L"class",                  NM_Object_class);
    store_native(natives, L"hash",                   NM_Object_hash);
    store_native(natives, L"perform:withArguments:", NM_Object_perform_withArguments_);
    store_native(natives, L"perform:",               NM_Object_perform_);
}
