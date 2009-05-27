#ifndef SYSTEM_IFIXED_H
#define SYSTEM_IFIXED_H

extern void ifixed_dispatch();
extern void ifixed_shift_level();
extern void ifixed_class_dispatch();
extern object make_ifixed(object dispatch,
                          object delegate,
                          object size);

struct ifixed {
    object          delegate;
    object          size;
    object          interp;
};

#endif // SYSTEM_ISCOPED_H
