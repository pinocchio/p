#ifndef SYSTEM_ILIST_H
#define SYSTEM_ILIST_H

// Creation
extern void ilist_dispatch();
extern ilist_object make_ilist(int size);

// Accessors
extern object      inline raw_ilist_at(ilist_object ilist, int index);
extern void        inline raw_ilist_at_put(ilist_object ilist,
                                           int index, object i);
extern void        inline ilist_at_put(ilist_object ilist,
                                       int index, object i);

// Structure
struct instruction_list {
    number_object   size;
    object          instructions[];
};

#endif // SYSTEM_ILIST_H
