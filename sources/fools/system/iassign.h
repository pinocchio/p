#ifndef SYSTEM_IASSIGN_H
#define SYSTEM_IASSIGN_H

extern void iassign_stub_dispatch();
extern iassign_object make_iassign(ivar_object variable, object expression);

struct iassign {
    ivar_object     variable;
    object          expression;
};


#endif // SYSTEM_IASSIGN_H
