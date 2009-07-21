#ifndef SYSTEM_ast_const_H
#define SYSTEM_ast_const_H
#include <scheme/natives.h>
#include <system/type/type.h>
export_type(ast_const);

extern ast_const_object make_ast_const(object constant);

preval_header(ast_const_new_from_object);

struct ast_const {
    object          constant;
};

#endif // SYSTEM_ast_const_H
