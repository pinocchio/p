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

void inline define_native(native_class_object cls,
                          int index,
                          const char* name,
                          transfer_target native) {
    object symbol = (object)make_string(name);
    array_at_put(fools_system->symbols_known_to_the_vm, index, symbol);
    dict_at_put(cls->natives, index, symbol, (object)make_native(native));
}

fools_object bootstrap() {
    fools_system                            = NEW(struct fools);
    nil_object nil                          = make_nil();
    fools_system->nil                       = nil;
    fools_system->native                    = (object)make_native(&native);
 
    header(fools_system->native.pointer)    = fools_system->native;

    fools_system->native_metaclass          = (object)make_native(&with_native_class_lookup);
    fools_system->symbols_known_to_the_vm   = make_array(2);
    fools_system->dict_class                = make_native_class(2);

    header(fools_system->dict_class->natives) = (object)fools_system->dict_class;

    define_native(fools_system->dict_class, 0, "at:",       &prim_dict_at);
    define_native(fools_system->dict_class, 1, "at:put:",   &prim_dict_at_put);
    
    return fools_system;
}
