#ifndef SYSTEM_IFIXED_H
#define SYSTEM_IFIXED_H

extern void ifixed_dispatch();
extern void ifixed_class_dispatch();
extern void ifixed_class_stub_dispatch();

extern void fixed_dispatch();
extern void fixed_stub_dispatch();
extern void fixed_class_stub_dispatch();
extern object make_class(object size,
                         transfer_target cdispatch);


struct ifixed {
    object          cdisp;
    object          dispatch;
    object          delegate;
    int             size;
};

#endif // SYSTEM_ISCOPED_H
