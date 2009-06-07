#ifndef SYSTEM_ISCOPED_H
#define SYSTEM_ISCOPED_H

extern void iscoped_stub_dispatch();
extern void iscoped_class_stub_dispatch();
extern object make_iscoped(object scope,
                           object expression,
                           object argsize);

struct iscoped {
    object          scope;
    object          expression;
    object          argsize;
};

#endif // SYSTEM_ISCOPED_H
