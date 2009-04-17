#include <model.h>
#include <string.h>
#include <assert.h>
#include <bootstrap.h>

void init_behaviour(behaviour_object behaviour,
                    int size,
                    object super) {
    behaviour->methods = make_dict(size);
    behaviour->super   = super;
}

behaviour_object make_behaviour(int size,
                                object super) {
    behaviour_object result = NEW(struct behaviour);
    init_behaviour(result, size, super);
    return result;
}

class_object make_class(int size,
                        object super,
                        const char* name) {
    class_object result = NEW(struct class);
    init_behaviour(&result->behaviour, size, super);
    result->name = make_string(name);
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

native_object make_native(void (*native)(context_object)) {
    native_object result = NEW(struct native);
    result->function = native;
    return result;
}

context_object make_context(object self, int size) {
    context_object result = NEW(struct context);
    result->self = self;
    result->arguments = make_array(size);
    return result;
}

void native(context_object context) {
    assert(context->arguments->size->value == 1);
    context_object passed_context = context->arguments->values[0].context;
    passed_context->self.native->function(passed_context);
}

void transfer(context_object context) {
    context_object old_context;

    printf("native: %lo\n", fools_system->native);
    
    while (context->self.native != fools_system->native) {
        printf("current: %lo\n", context->self.native);
        old_context = context;
        context = make_context(header(context->self.pointer), 1);
        context->arguments->values[0] = (object)old_context;
    }
    
    context->self.native->function(context);
}
