#ifndef SYSTEM_ICONST_H
#define SYSTEM_ICONST_H

extern void iconst_stub_dispatch();
extern void iconst_class_stub_dispatch();
extern iconst_object make_iconst(object constant);

struct iconst {
    object          constant;
};

#endif // SYSTEM_ICONST_H
