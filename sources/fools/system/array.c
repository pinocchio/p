#include <system.h>
#include <thread.h>

void iarray_at() {
    context_object context = get_context();
    assert_argsize(context, 2);

    array_object array = context->self.array;

    object idx = argument_at(context, 1);
    // XXX breaks encapsulation.
    int index = number_value(idx.number);
    debug("array>>at: %i\n", index);

    set_argument(return_context(context), 1, array_at(array, index));
    pop_context();
    debug("ret>>array>>at:\n");
}

void iarray_at_put() {
    context_object context = get_context();
    assert_argsize(context, 3);

    array_object array = context->self.array;

    object idx = argument_at(context, 1);
    // XXX breaks encapsulation.
    int index = number_value(idx.number);
    object value = argument_at(context, 2);
    debug("array>>at:put: %i, %p\n", index, value.pointer);

    array_at_put(array, index, value);
    pop_context();
    debug("ret>>array>>at:put:");
}

void array_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, OBJECT_AT,        iarray_at);
    if_selector(selector, OBJECT_AT_PUT,    iarray_at_put);
    doesnotunderstand("array", selector);
}
