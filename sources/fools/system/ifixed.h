#ifndef SYSTEM_IFIXED_H
#define SYSTEM_IFIXED_H

extern void ifixed_dispatch();
extern void ifixed_class_dispatch();
extern void ifixed_metaclass_dispatch();
extern void ifixed_stub_class_dispatch();
extern void ifixed_stub_metaclass_dispatch();
extern object make_class(object dispatch,
                         object delegate,
                         object size,
                         transfer_target cdispatch);

extern object make_stub_class(object size,
                              transfer_target cdispatch);


struct ifixed {
    object          cdisp;
    object          dispatch;
    object          delegate;
    object          size;
};

#endif // SYSTEM_ISCOPED_H
