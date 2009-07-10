#include <system.h>
#include <thread.h>

with_pre_eval1(iarray_at, context, idx,
    array_object array = context->self.array;
    // XXX breaks encapsulation.
    int index = idx.number->value;
    return_from_context(context, array_at(array, index));
)

with_pre_eval2(iarray_at_put, context, idx, value,
    array_object array = context->self.array;
    // XXX breaks encapsulation.
    int index = idx.number->value;
    array_at_put(array, index, value);
    pop_context();
)

static void inline iarray_size() {
    context_object context = get_context();
    object size = (object)make_number(context->self.array->size);
    return_from_context(context, size);
}

with_pre_eval1(iarray_new, context, w_size,
    // XXX breaks encapsulation
    int size = w_size.number->value;
    object result = (object)make_array(size);
    return_from_context(context, result);
)

define_bootstrapping_type(iarray,
    // instance
    if_selector(OBJECT_AT,        iarray_at);
    if_selector(OBJECT_AT_PUT,    iarray_at_put);
    if_selector(SIZE,             iarray_size);,
    // class
    if_selector(SIZED,            iarray_new);
)
