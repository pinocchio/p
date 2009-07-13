#ifndef SYSTEM_ICALL_H
#define SYSTEM_ICALL_H

// Creation
#include <system/type/type.h>
export_type(ast_call);

extern icall_object make_icall(object self, int argsize);

// Accessors
extern void        inline set_callarg(icall_object icall, int index, object value);
extern void        inline set_callmsg(icall_object icall, object msg);

// Structure
struct icall {
    object          self;
    array_object    arguments;
};

// Helper macros
#define build_icall(name, receiver, msg, size)\
    name = make_icall((object)receiver, size);\
    set_callmsg(name, msg);

#define icall1(name, receiver, msg)\
    build_icall(name, receiver, msg, 1)

#define icall2(name, receiver, msg, arg)\
    build_icall(name, receiver, msg, 2)\
    set_callarg(name, 1, (object)arg);

#define icall3(name, receiver, msg, arg1, arg2)\
    build_icall(name, receiver, msg, 3)\
    set_callarg(name, 1, (object)arg1);\
    set_callarg(name, 2, (object)arg2);

#define icall4(name, receiver, msg, arg1, arg2, arg3)\
    build_icall(name, receiver, msg, 4)\
    set_callarg(name, 1, (object)arg1);\
    set_callarg(name, 2, (object)arg2);\
    set_callarg(name, 3, (object)arg3);

#endif // SYSTEM_ICALL_H
