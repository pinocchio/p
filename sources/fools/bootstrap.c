#include <bootstrap.h>
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
    native_object native_f          = make_native(&native);
    fools_system->native            = native_f;
 
    printf("add: %x\n", &native);
    printf("header: %x\n", (object)fools_system->native);
    printf("header: %x\n", (object)fools_system->native);

    int i;
    for (i = 0; i < 10; i++) {
      printf("v: %x\n", *((int*)(fools_system->native)+i-3));
    }

    assert(fools_system->native->function == &native);

    header(fools_system->native)    = (object)fools_system->native;

    printf("new: \n\n");

    for (i = 0; i < 10; i++) {
      printf("v: %x\n", *((int*)(fools_system->native)+i-3));
    }


    assert(fools_system->native->function == &native);

    return fools_system;
}
