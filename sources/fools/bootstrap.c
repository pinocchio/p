#include <bootstrap.h>
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
        transfer(class_context);
    } else {
        native_target(native.native)(receiver_context);
    }
}

fools_object bootstrap() {
    fools_system                    = NEW(struct fools);
    nil_object nil                  = make_nil();
    fools_system->nil               = nil;
    //system->behaviour_class       = make_class(5, (object)nil, "Behaviour");
    //system->class_class           = make_class(5, (object)nil, "Class");
    fools_system->native            = make_native(&native);
 
    header(fools_system->native)    = (object)fools_system->native;

    return fools_system;
}
