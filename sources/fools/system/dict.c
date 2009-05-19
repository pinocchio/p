#include <system.h>
#include <thread.h>

void dict_at_do() {
    context_object context = get_context();
    dict_object dict = context->self.dict;

    object key = argument_at(context, 1);
    debug("dict>>at: %p\n", key.pointer);

    array_object kv = dict->values;
    object result = (object)fools_system->nil;
    int i;
    int limit = number_value(array_size(dict->values)) / 2;
    for (i = 0; i < limit; i++) {
        if (raw_array_at(kv, i * 2).pointer == key.pointer) {
            result = raw_array_at(kv, i * 2 + 1);
            break;
        }
    }

    set_argument(return_context(context), 1, result);
    pop_context();
    debug("ret>>dict>>at: (result) %p\n", result.pointer);
}

array_object inline double_array(array_object values) {
    int oldsize = number_value(array_size(values));
    array_object new = make_array(oldsize * 2);
    for (--oldsize; oldsize >= 0; oldsize--) {
        raw_array_at_put(new, oldsize, raw_array_at(values, oldsize));
    }
    return new;
}

void dict_at_put_do() {
    context_object context = get_context();
    dict_object dict = context->self.dict;

    object key = argument_at(context, 1);
    object value = argument_at(context, 2);
    debug("dict>>at:put %p, %p\n", key.pointer, value.pointer);

    array_object kv = dict->values;
    int i;
    int limit = number_value(array_size(dict->values)) / 2;
    for (i = 0; i < limit; i++) {
        object v = raw_array_at(kv, i * 2);
        if (v.pointer == key.pointer || v.nil == fools_system->nil) {
            break;
        }
    }
    
    if (i == limit) {
        kv = double_array(kv);
        dict->values = kv;
    }

    raw_array_at_put(kv, i, value);

    pop_context();
    debug("ret>>dict>>at:\n");
}

void dict_at() {
    context_object context = get_context();
    assert_argsize(context, 2);
    push_eval_of(context, 1);
    context->code = &dict_at_do;
}

void dict_at_put() {
    context_object context = get_context();
    assert_argsize(context, 3);
    push_eval_of(context, 1);
    push_eval_of(context, 2);
    context->code = &dict_at_put_do;
}

void dict_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, OBJECT_AT,        dict_at);
    if_selector(selector, OBJECT_AT_PUT,    dict_at_put);
    doesnotunderstand("dict", selector);
}
