#include <bootstrap.h>
#include <primitives.h>
#include <system.h>
#include <assert.h>

fools_object fools_system;

void bootstrapping_method(context_object context) {
}

void with_native_class_lookup(context_object context) {
    context_object class_context    = array_at(context->arguments, 0).context;
    context_object receiver_context = array_at(class_context->arguments, 0).context;
    native_class_object class       = class_context->self.native_class;
    dict_object natives             = class->natives;
    array_object arguments          = receiver_context->arguments;
    object selector                 = array_at(arguments, 0);
    object native                   = dict_at(natives, selector);

    if (native.nil == fools_system->nil) {
        class_context->self = class->class;
    } else {
        class_context->self = native;
    }
    transfer(class_context);
}

fools_object bootstrap() {
    fools_system                            = NEW(struct fools);
    nil_object nil                          = make_nil();
    fools_system->nil                       = nil;
    fools_system->native                    = (object)make_native(&native);
 
    header(fools_system->native.pointer)    = fools_system->native;

    fools_system->native_metaclass          = (object)make_native(&with_native_class_lookup);
    fools_system->symbols_known_to_the_vm   = make_array(2);
    object s_at                             = (object)make_string("at:");
    object s_at_put                         = (object)make_string("at:put:");
    array_at_put(fools_system->symbols_known_to_the_vm, 0, s_at);
    array_at_put(fools_system->symbols_known_to_the_vm, 1, s_at_put);

    fools_system->dict_class                = make_native_class(2);
    dict_at_put(fools_system->dict_class->natives, 0, s_at,     (object)make_native(&prim_dict_at));
    dict_at_put(fools_system->dict_class->natives, 1, s_at_put, (object)make_native(&prim_dict_at_put));

    return fools_system;
}
