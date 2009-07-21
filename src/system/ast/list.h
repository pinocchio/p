#ifndef SYSTEM_ILIST_H
#define SYSTEM_ILIST_H

#include <scheme/natives.h>

// Creation
#include <system/type/type.h>
export_type(ast_list);

extern ast_list_object make_ilist(int size);

// Accessors
extern object      inline raw_ilist_at(ast_list_object ilist, int index);
extern void        inline raw_ilist_at_put(ast_list_object ilist,
                                           int index, object i);
extern void        inline ilist_at_put(ast_list_object ilist,
                                       int index, object i);
extern int         inline ilist_size(ast_list_object ilist);

preval_header(ilist_new_from_array);

// Structure
struct ast_list {
    int             size;
    object          instructions[];
};

#endif // SYSTEM_ILIST_H
