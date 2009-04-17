#include <bootstrap.h>

void bootstrapping_method(context_object context) {

}

fools_object bootstrap() {
    fools_object system         = NEW(struct fools);
    nil_object nil              = make_nil(system);
    system->nil                 = nil;
    //system->behaviour_class   = make_class(system, 5, (object)nil, "Behaviour");
    //system->class_class       = make_class(system, 5, (object)nil, "Class");
    system->native              = make_native(&native);
    return system;
}
