#include <bootstrap.h>

fools_object bootstrap() {
    fools_object system     = NEW(struct fools);
    nil_object nil          = make_nil(system);
    system->nil             = nil;
    system->behaviour_class = make_class(system, 5, (object)nil, "Behaviour");
    system->class_class     = make_class(system, 5, (object)nil, "Class");
    return system;
};
