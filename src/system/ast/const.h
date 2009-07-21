#ifndef SYSTEM_ICONST_H
#define SYSTEM_ICONST_H
#include <scheme/natives.h>
#include <system/type/type.h>
export_type(ast_const);

extern ast_const_object make_iconst(object constant);

preval_header(iconst_new_from_object);

struct ast_const {
    object          constant;
};

#endif // SYSTEM_ICONST_H
