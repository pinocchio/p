#ifndef SYSTEM_ILIST_H
#define SYSTEM_ILIST_H

// Creation
extern void ilist_stub_dispatch();
extern void ilist_class_stub_dispatch();

extern ilist_object make_ilist(int size);

// Accessors
extern object      inline raw_ilist_at(ilist_object ilist, int index);
extern void        inline raw_ilist_at_put(ilist_object ilist,
                                           int index, object i);
extern void        inline ilist_at_put(ilist_object ilist,
                                       int index, object i);
extern int         inline ilist_size(ilist_object ilist);

// Structure
struct ilist {
    int             size;
    object          instructions[];
};

#endif // SYSTEM_ILIST_H
