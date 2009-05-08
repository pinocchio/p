#ifndef SYSTEM_IVAR_H
#define SYSTEM_IVAR_H

extern void ivar_dispatch();
extern ivar_object make_ivar();

struct variable {
    object          scope;
    number_object   index;
};

#endif // SYSTEM_IVAR_H
