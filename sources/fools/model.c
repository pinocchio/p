#include <model.h>
#include <string.h>

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
    array_object result = NEW(struct array);
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
