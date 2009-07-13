#include <system.h>
#include <thread.h>
#include <print.h>
#include <assert.h>

with_pre_eval1(dict_at, context, key,
    dict_object dict = context->self.dict;

    array_object kv = dict->values;
    object result = (object)woodstock->nil;
    int i;
    int limit = array_size(dict->values) / 2;
    for (i = 0; i < limit; i++) {
        if (raw_array_at(kv, i * 2).pointer == key.pointer) {
            result = raw_array_at(kv, i * 2 + 1);
            break;
        }
    }

    return_from_context(context, result);
)

array_object inline double_array(array_object values) {
    int oldsize = array_size(values);
    array_object new = make_array(oldsize * 2);
    for (--oldsize; oldsize >= 0; oldsize--) {
        raw_array_at_put(new, oldsize, raw_array_at(values, oldsize));
    }
    return new;
}

with_pre_eval2(dict_at_put, context, key, value,
    dict_object dict = context->self.dict;

    array_object kv = dict->values;
    int i;
    int limit = array_size(dict->values) / 2;
    for (i = 0; i < limit; i++) {
        object v = raw_array_at(kv, i * 2);
        if (v.pointer == key.pointer || v.nil == woodstock->nil) {
            break;
        }
    }
    
    if (i == limit) {
        kv = double_array(kv);
        dict->values = kv;
    }

    raw_array_at_put(kv, i * 2, key);
    raw_array_at_put(kv, i * 2 + 1, value);

    return_from_context(context, value);
)

static void inline dict_new() {
    debug("dict>>new\n");
    context_object context = get_context();
    return_from_context(context, (object)make_dict(2));
    debug("ret>>dict>>new\n");
}

define_bootstrapping_type(dict,
    // instance
    if_selector(OBJECT_AT,        dict_at);
    if_selector(OBJECT_AT_PUT,    dict_at_put);,
    // class
    if_selector(BASICNEW,         dict_new);
)

// Object creation
dict_object make_dict(int size) {
    assert(size);
    new_instance(dict);
    result->values = make_array(size * 2);
    return result;
}
