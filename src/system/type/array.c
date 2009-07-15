#include <system.h>
#include <thread.h>

with_pre_eval1(iarray_at, context, idx,
    array_object array = context->self.array;
    cast(index, idx, number);
    return_from_context(context, array_at(array, index->value));
)

with_pre_eval2(iarray_at_put, context, idx, value,
    array_object array = context->self.array;
    cast(index, idx, number);
    array_at_put(array, index->value, value);
    pop_context();
)

static void inline iarray_size() {
    context_object context = get_context();
    object size = (object)make_number(context->self.array->size);
    return_from_context(context, size);
}

with_pre_eval1(iarray_new, context, w_size,
    cast(size, w_size, number);
    object result = (object)make_array(size->value);
    return_from_context(context, result);
)

define_bootstrapping_type(array,
    // instance
    if_selector(OBJECT_AT,        iarray_at);
    if_selector(OBJECT_AT_PUT,    iarray_at_put);
    if_selector(SIZE,             iarray_size);,
    // class
    if_selector(SIZED,            iarray_new);
)

int inline array_size(array_object array) {
    return array->size;
}

object inline raw_array_at(array_object array, int index) {
    return array->values[index];
}

object inline array_at(array_object array, int index) {
    array_check_bounds(array, index);
    return raw_array_at(array, index);
}

void inline raw_array_at_put(array_object array, int index, object new_value) {
    array->values[index] = new_value;
}

void inline array_at_put(array_object array, int index, object new_value) {
    array_check_bounds(array, index);
    raw_array_at_put(array, index, new_value);
}

array_object make_array(int size) {
    if (size == 0) { return woodstock->empty; }
    array_object result = (array_object)make_object(size + 1,
                            (object)woodstock->array_class);
    result->size        = size;
    return result;
}
