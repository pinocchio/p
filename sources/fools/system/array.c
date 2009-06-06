#include <system.h>
#include <thread.h>

void iarray_at_do() {
    context_object context = get_context();
    array_object array = context->self.array;

    object idx = argument_at(context, 1);
    // XXX breaks encapsulation.
    int index = number_value(idx.number);
    debug("array>>at: %i\n", index);

    return_from_context(context, array_at(array, index));
    debug("ret>>array>>at:\n");
}

void iarray_at_put_do() {
    context_object context = get_context();
    array_object array = context->self.array;

    object idx = argument_at(context, 1);
    // XXX breaks encapsulation.
    int index = number_value(idx.number);
    object value = argument_at(context, 2);
    debug("array>>at:put: %i, %p\n", index, value.pointer);

    array_at_put(array, index, value);
    pop_context();
    debug("ret>>array>>at:put:\n");
}

void iarray_at() {
    context_object context = get_context();
    assert_argsize(context, 2);
    push_eval_of(context, 1);
    context->code = &iarray_at_do;
}

void iarray_at_put() {
    context_object context = get_context();
    assert_argsize(context, 3);
    push_eval_of(context, 1);
    push_eval_of(context, 2);
    context->code = &iarray_at_put_do;
}

static void inline iarray_size() {
    context_object context = get_context();
    object size = (object)make_number(context->self.array->size);
    return_from_context(context, size);
}

void array_dispatch() {
    dispatch_header(context, selector);
    if_selector(selector, OBJECT_AT,        iarray_at);
    if_selector(selector, OBJECT_AT_PUT,    iarray_at_put);
    if_selector(selector, SIZE,             iarray_size);
    doesnotunderstand("array", selector);
}

static void iarray_new_do() {
    context_object context = get_context();
    // XXX breaks encapsulation
    int size = number_value(argument_at(context, 1).number);
    object result = (object)make_array(size);
    return_from_context(context, result);
}

static void inline iarray_new() {
    context_object context = get_context();
    push_eval_of(context, 1);
    context->code = &iarray_new_do;
}

void array_class_dispatch() {
    dispatch_header(context, selector);
    if_selector(selector, SIZED, iarray_new);
    /* Other messages sent bounce off to the delegate. */
    new_target(context, context->self.ifixed->delegate);
}
