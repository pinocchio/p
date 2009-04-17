#include <model.h>
#include <string.h>
#include <assert.h>

void init_behaviour(fools_object system,
                    behaviour_object behaviour,
                    int size,
                    object super) {
    behaviour->methods = make_dict(system, size);
    behaviour->super   = super;
}

behaviour_object make_behaviour(fools_object system,
                                int size,
                                object super) {
    behaviour_object result = NEW(struct behaviour);
    init_behaviour(system, result, size, super);
    return result;
}

class_object make_class(fools_object system,
                        int size,
                        object super,
                        const char* name) {
    class_object result = NEW(struct class);
    init_behaviour(system, &result->behaviour, size, super);
    result->name = make_string(system, name);
    return result;
}

string_object make_string(fools_object system,
                          const char* value) {
    string_object result = NEW(struct string);
    result->value = strdup(value);
    result->size  = make_number(system, strlen(value));
    return result;
}

number_object make_number(fools_object system,
                          int value) {
    number_object result = NEW(struct number);
    result->value = value;
    return result;
}

array_object make_array(fools_object system,
                        int size) {
    array_object result = (array_object)NEW_ARRAYED(object, size + 1);
    result->size        = make_number(system, size);
    return result;
}

dict_object make_dict(fools_object system,
                      int init_size) {
    dict_object result = NEW(struct dict);
    result->keys       = make_array(system, init_size);
    result->values     = make_array(system, init_size);
    return result;
}

nil_object make_nil(fools_object system) {
    return NEW(struct nil);
}

native_object make_native(void (*native)(context_object)) {
    native_object result = NEW(struct native);
    result->function = native;
    return result;
}

context_object make_context(fools_object system, object self, int size) {
    context_object result = NEW(struct context);
    result->self = self;
    result->arguments = make_array(system, size);
    return result;
}

void native(context_object context) {
    assert(context->arguments->size->value == 1);
    context_object passed_context = context->arguments->values[0].context;
    context->self.native->function(passed_context);
}
