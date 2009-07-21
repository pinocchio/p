#ifndef SYSTEM_ast_list_H
#define SYSTEM_ast_list_H

#include <scheme/natives.h>

// Creation
#include <system/type/type.h>
export_type(ast_list);

extern ast_list_object make_ast_list(int size);

// Accessors
extern object      inline raw_ast_list_at(ast_list_object ast_list, int index);
extern void        inline raw_ast_list_at_put(ast_list_object ast_list,
                                           int index, object i);
extern void        inline ast_list_at_put(ast_list_object ast_list,
                                       int index, object i);
extern int         inline ast_list_size(ast_list_object ast_list);

preval_header(ast_list_new_from_array);

// Structure
struct ast_list {
    int             size;
    object          instructions[];
};

#endif // SYSTEM_ast_list_H
