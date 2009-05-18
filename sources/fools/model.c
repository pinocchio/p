#include <model.h>
#include <string.h>
#include <assert.h>
#include <bootstrap.h>
#include <thread.h>

#define ctx_size (sizeof(struct context) / sizeof(object))

variable_object make_object(int size, object interpreter) {
    variable_object result  = NEW_ARRAYED(variable_object, object, size);
    header(result)          = interpreter;
    int i;
    for (i = 0; i < size; i++) {
        object_at_put(result, i, (object)fools_system->nil);
    }
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
    new_instance(number);
    result->value           = value;
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

env_object make_env(object scope, object parent, int size) {
    new_instance(env);
    result->scope       = scope;
    result->parent      = parent;
    result->values      = make_array(size);
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

context_object make_context(object self, int size) {
    context_object result   = stack_claim(size + ctx_size);
    result->self            = self;
    result->code            = ntarget(header(self.pointer));
    result->arguments.size  = make_number(size);
    return result;
}

context_object make_empty_context(int size) {
    context_object result   = stack_claim(size + ctx_size);
    result->arguments.size  = make_number(size);
    return result;
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

void inline set_message(context_object context, object msg) {
    raw_array_at_put(&context->arguments, 0, msg);
}

void inline set_new_message(context_object context, object msg) {
    context->code = ntarget(header(pheader(pheader(context))));
    set_message(context, msg);
}

void inline set_argument(context_object context, int index, object value) {
    raw_array_at_put(&context->arguments, index, value);
}

object inline argument_at(context_object context, int index) {
    return raw_array_at(&context->arguments, index);
}

message_object inline make_message(int size) {
    return make_array(size);
}

object inline message(context_object context) {
    return argument_at(context, 0);
}

int inline context_size(context_object context) {
    return number_value(array_size(&context->arguments));
}

context_object inline return_context(context_object context) {
    int size = context_size(context);
    return context - size - ctx_size;
}
