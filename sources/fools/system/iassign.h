#ifndef SYSTEM_IASSIGN_H
#define SYSTEM_IASSIGN_H

extern void iassign_stub_dispatch();
extern void iassign_class_stub_dispatch();
extern iassign_object make_iassign(object variable, object expression);

struct iassign {
    object          variable;
    object          expression;
};


#endif // SYSTEM_IASSIGN_H
