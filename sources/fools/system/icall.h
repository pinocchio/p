#ifndef SYSTEM_ICALL_H
#define SYSTEM_ICALL_H

// Creation
extern void icall_dispatch();
extern icall_object make_icall(object receiver, int argsize);

// Accessors
extern void        inline set_callarg(icall_object icall, int index, object value);
extern void        inline set_callmsg(icall_object icall, object msg);

// Structure
struct callable {
    object          interpreter;
    array_object    arguments;
};

#endif // SYSTEM_ICALL_H
