#include <model.h>
#include <string.h>
#include <assert.h>
#include <bootstrap.h>

variable_object make_object(int size, object interpreter) {
    variable_object result  = NEW_ARRAYED(variable_object, object, size);
    header(result)          = interpreter;
    int i;
    for (i = 0; i < size; i++) {
        object_at_put(result, i, (object)fools_system->nil);
    }
    return result;
}

native_class_object make_native_class(int size) {
    native_class_object result  = NEW(struct native_class);
    result->natives             = make_dict(size);
    header(result)              = fools_system->native_metaclass;
    return result;
}

string_object make_string(const char* value) {
    string_object result    = NEW(struct string);
    result->value           = strdup(value);
    result->size            = make_number(strlen(value));
    header(result)          = (object)fools_system->string_class;
    return result;
}

number_object make_number(int value) {
    number_object result    = NEW(struct number);
    result->value           = value;
    header(result)          = (object)fools_system->number_class;
    return result;
}

array_object make_array(int size) {
    if (size == 0) { return fools_system->empty; }
    array_object result     = (array_object)make_object(size + 1,
                                                    (object)fools_system->nil);
    result->size            = make_number(size);
    header(result)          = (object)fools_system->array_class;
    return result;
}

dict_object make_dict(int init_size) {
    dict_object result  = NEW(struct dict);
    result->keys        = make_array(init_size);
    result->values      = make_array(init_size);
    header(result)      = (object)fools_system->dict_class;
    return result;
}

env_object make_env(object scope, object parent, int size) {
    env_object result   = NEW(struct env);
    result->scope       = scope;
    result->parent      = parent;
    result->values      = make_array(size);
    header(result)      = (object)fools_system->env_class;
    return result;
}

nil_object make_nil() {
    return NEW(struct nil);
}

native_object make_native(transfer_target native) {
    native_object result    = NEW(struct native);
    header(result)          = fools_system->native;
    result->target          = native;
    return result;
}

context_object make_context(object interpreter, int size) {
    context_object context  = NEW(struct context);
    //printf("++++++++++++++++++++++++++++ Made context: %p\n", context);
    header(context)         = interpreter;
    context->arguments      = make_array(size);
    context->code           = header(pheader(interpreter.pointer));
    context->return_context = (object)fools_system->nil;
    return context;
}

// Accessors

int inline number_value(number_object number) {
    return number->value;
}

char* string_value(string_object string) {
    return string->value;
}

number_object inline string_size(string_object string) {
    return string->size;
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

transfer_target inline native_target(native_object native) {
    return native->target;
}

int inline dict_index_of(dict_object dict, object key) {
    array_object keys = dict->keys;

    int i;
    for (i = 0; i < number_value(array_size(keys)); i++) {
        if (raw_array_at(keys, i).pointer == key.pointer) {
            return i;
        }
    }
    return -1;
}

object inline dict_at(dict_object dict, object key) {
    int size = number_value(array_size(dict->keys));
    int i;
    for (i = 0; i < size; i++) {
        if (raw_array_at(dict->keys, i).pointer == key.pointer) {
            return raw_array_at(dict->values, i);
        }
    }
    return (object)fools_system->nil;
}

void inline dict_expand(dict_object dict) {
    array_object old_keys   = dict->keys;
    array_object old_values = dict->values;
    int old_size = number_value(array_size(old_keys));
    int size = 2 * old_size;

    dict->keys = make_array(size);
    dict->values = make_array(size);

    for (--old_size; old_size >= 0; old_size--) {
        raw_array_at_put(dict->keys,    old_size, raw_array_at(old_keys,   old_size));
        raw_array_at_put(dict->values,  old_size, raw_array_at(old_values, old_size));
    }
}

int inline dict_bind_key(dict_object dict, object key) {
    int index = dict_index_of(dict, (object)fools_system->nil);
    if (index == -1) {
        index = number_value(array_size(dict->keys));
        dict_expand(dict);
    }
    raw_array_at_put(dict->keys, index, key);
    return index;
}

void inline dict_at_put(dict_object dict, object key, object value) {
    int index = dict_index_of(dict, key);
    if (index == -1) {
        index = dict_bind_key(dict, key);
    }
    raw_array_at_put(dict->values, index, value);
}

int inline string_equals(string_object string1, string_object string2) {
    int left_size   = number_value(string_size(string1));
    int right_size  = number_value(string_size(string2));
    return (left_size == right_size) &&
           (strncmp(string_value(string1),
                   string_value(string2),
                   left_size) == 0);
}

object inline symbol_known_to_the_vm(int index) {
    array_object symbols = fools_system->symbols_known_to_the_vm;
    return raw_array_at(symbols, index);
}

object inline object_at(variable_object object, int index) {
    return object->fields[index];
}

void inline object_at_put(variable_object o, int index, object value) {
    o->fields[index] = value;
}

object inline env_at(env_object env, int index) {
    return array_at(env->values, index);
}

void inline env_at_put(env_object env, int index, object value) {
    array_at_put(env->values, index, value);
}

void inline set_message(context_object context, int index) {
    context->code = header(pheader(pheader(context)));
    raw_array_at_put(context->arguments, 0, symbol_known_to_the_vm(index));
}

void inline set_argument(context_object context, int index, object value) {
    raw_array_at_put(context->arguments, index, value);
}

object inline argument_at(context_object context, int index) {
    return raw_array_at(context->arguments, index);
}

message_object inline make_message(int size) {
    return make_array(size);
}

object inline message(context_object context) {
    return argument_at(context, 0);
}

context_object inline return_context(context_object context) {
    return context->return_context.context;
}
