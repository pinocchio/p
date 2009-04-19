#include <model.h>
#include <string.h>
#include <assert.h>
#include <bootstrap.h>

native_class_object make_native_class(int size, object class) {
    native_class_object result  = NEW(struct native_class);
    result->natives             = make_dict(size);
    result->class               = class;
    return result;
}

string_object make_string(const char* value) {
    string_object result = NEW(struct string);
    result->value = strdup(value);
    result->size  = make_number(strlen(value));
    return result;
}

number_object make_number(int value) {
    number_object result = NEW(struct number);
    result->value = value;
    return result;
}

array_object make_array(int size) {
    array_object result = (array_object)NEW_ARRAYED(object, size + 1);
    result->size        = make_number(size);
    return result;
}

dict_object make_dict(int init_size) {
    dict_object result = NEW(struct dict);
    result->keys       = make_array(init_size);
    result->values     = make_array(init_size);
    return result;
}

nil_object make_nil() {
    return NEW(struct nil);
}

native_object make_native(transfer_target native) {
    native_object result = NEW(struct native);
    result->target = native;
    return result;
}

context_object make_context(object self, int size) {
    context_object result = NEW(struct context);
    result->self = self;
    result->arguments = make_array(size);
    return result;
}

// Accessors

int inline number_value(number_object number) {
    return number->value;
}

number_object inline array_size(array_object array) {
    return array->size;
}

void inline array_check_bounds(array_object array, int index) {
    assert(0 <= index);
    assert(index < number_value(array_size(array)));
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

transfer_target native_target(native_object native) {
    return native->target;
}

object inline dict_at(dict_object dict, object key) {
    array_object keys   = dict->keys;
    array_object values = dict->values;
    int i;
    for (i = 0; i < number_value(array_size(keys)); i++) {
        if (raw_array_at(keys, i).pointer == key.pointer) {
            return raw_array_at(values, i);
        }
    }
    return (object)fools_system->nil;
}

void inline dict_at_put(dict_object dict, int index, object key, object value) {
    array_at_put(dict->keys, index, key);
    array_at_put(dict->values, index, value);
}
