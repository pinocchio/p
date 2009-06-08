#ifndef SYSTEM_IVAR_H
#define SYSTEM_IVAR_H

extern void ivar_class_stub_dispatch();
extern void ivar_stub_dispatch();
extern ivar_object make_ivar(const char* name);

struct ivar {
    string_object   name;
    object          scope;
    number_object   index;
};

#endif // SYSTEM_IVAR_H
