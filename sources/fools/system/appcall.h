#ifndef SYSTEM_APPCALL_H
#define SYSTEM_APPCALL_H

// Creation
extern void appcall_dispatch();
extern appcall_object make_appcall(object expression, int argsize);

// Accessors
extern void        inline set_appcarg(appcall_object appcall, int index, object value);
extern void        inline set_appcmsg(appcall_object appcall, object msg);

// Structure
struct appcall {
    object          expression;
    array_object    arguments;
};

#endif // SYSTEM_APPCALL_H
