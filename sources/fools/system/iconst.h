#ifndef SYSTEM_ICONST_H
#define SYSTEM_ICONST_H

extern void iconst_dispatch();
extern iconst_object make_iconst(object constant);

struct constant {
    object          constant;
};

#endif // SYSTEM_ICONST_H
