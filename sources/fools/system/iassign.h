#ifndef SYSTEM_IASSIGN_H
#define SYSTEM_IASSIGN_H

extern void iassign_dispatch();
extern iassign_object make_iassign(ivar_object variable, object expression);

struct assignment {
    ivar_object     variable;
    object          expression;
};


#endif // SYSTEM_IASSIGN_H
