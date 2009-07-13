#include <model.h>
#include <assert.h>
#include <bootstrap.h>
#include <thread.h>

object_object make_object(int size, object interpreter) {
    object_object result  = NEW_ARRAYED(object_object, object, size);
    header(result)        = interpreter;
    int i;
    for (i = 0; i < size; i++) {
        object_at_put(result, i, (object)woodstock->nil);
    }
    return result;
}

array_object make_array(int size) {
    if (size == 0) { return woodstock->empty; }
    array_object result = (array_object)make_object(size + 1,
                            (object)woodstock->array_class);
    result->size        = size;
    return result;
}

env_object make_env(object scope, object parent, int size) {
    new_instance(runtime_env);
    result->scope       = scope;
    result->parent      = parent;
    result->values      = make_array(size);
    return result;
}

nil_object make_nil() {
    return NEW(struct nil);
}

native_object make_native(transfer_target native) {
    // Natives don't need a header, so we just allocate what we need.
    native_object result    = (native_object)PALLOC(sizeof(struct native));
    result->target          = (object)native;
    return result;
}

native_class_object make_native_class(object header, transfer_target cdisp) {
    native_class_object result  = NEW(struct native_class);
    header(result)              = header;
    result->cdisp               = (object)cdisp;
    return result;
}

// Accessors

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

transfer_target inline native_target(native_object native) {
    return native->target.target;
}

object inline object_at(object_object object, int index) {
    return object->fields[index];
}

void inline object_at_put(object_object o, int index, object value) {
    o->fields[index] = value;
}

object inline env_at(env_object env, int index) {
    return array_at(env->values, index);
}

void inline env_at_put(env_object env, int index, object value) {
    array_at_put(env->values, index, value);
}
