#include <bootstrap.h>
#include <system.h>
#include <assert.h>

fools_object fools_system;

void bootstrapping_method(context_object context) {

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
