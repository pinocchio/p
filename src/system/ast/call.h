#ifndef SYSTEM_ast_call_H
#define SYSTEM_ast_call_H
#include <scheme/natives.h>

// Creation
#include <system/type/type.h>
export_type(ast_call);

extern ast_call_object make_ast_call(object self, int argsize);
preval_header(ast_call_new_from_self_size);

// Accessors
extern void        inline set_callarg(ast_call_object ast_call, int index, object value);
extern void        inline set_callmsg(ast_call_object ast_call, object msg);

// Structure
struct ast_call {
    object          self;
    object          arguments;
};

// Helper macros
#define build_ast_call(name, receiver, msg, size)\
    name = make_ast_call((object)receiver, size);\
    set_callmsg(name, msg);

#define ast_call1(name, receiver, msg)\
    build_ast_call(name, receiver, msg, 1)

#define ast_call2(name, receiver, msg, arg)\
    build_ast_call(name, receiver, msg, 2)\
    set_callarg(name, 1, (object)arg);

#define ast_call3(name, receiver, msg, arg1, arg2)\
    build_ast_call(name, receiver, msg, 3)\
    set_callarg(name, 1, (object)arg1);\
    set_callarg(name, 2, (object)arg2);

#define ast_call4(name, receiver, msg, arg1, arg2, arg3)\
    build_ast_call(name, receiver, msg, 4)\
    set_callarg(name, 1, (object)arg1);\
    set_callarg(name, 2, (object)arg2);\
    set_callarg(name, 3, (object)arg3);

#endif // SYSTEM_ast_call_H
