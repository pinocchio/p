#ifndef SYSTEM_DIRCALL_H
#define SYSTEM_DIRCALL_H

// Creation
extern void dircall_dispatch();
extern dircall_object make_dircall(object self, int argsize);

// Accessors
extern void        inline set_dircarg(dircall_object dircall, int index, object value);
extern void        inline set_dircmsg(dircall_object dircall, object msg);

// Structure
struct dircall {
    object          self;
    array_object    arguments;
};

#endif // SYSTEM_DIRCALL_H
