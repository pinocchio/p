#ifndef SYSTEM_ICONST_H
#define SYSTEM_ICONST_H

#include <system/type/type.h>
export_type(ast_const);

extern iconst_object make_iconst(object constant);

struct iconst {
    object          constant;
};

#endif // SYSTEM_ICONST_H
