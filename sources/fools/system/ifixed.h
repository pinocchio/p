#ifndef SYSTEM_IFIXED_H
#define SYSTEM_IFIXED_H

extern void ifixed_dispatch();
extern void ifixed_class_dispatch();
extern void ifixed_metaclass_dispatch();
extern void ifixed_stub_class_dispatch();
extern object make_class(object dispatch,
                         object delegate,
                         object size,
                         transfer_target cdispatch);

struct ifixed {
    object          delegate;
    object          size;
    object          interp;
};

#endif // SYSTEM_ISCOPED_H
