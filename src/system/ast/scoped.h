#ifndef SYSTEM_ISCOPED_H
#define SYSTEM_ISCOPED_H
#include <scheme/natives.h>
#include <system/type/type.h>
export_type(ast_scoped);

extern object make_iscoped(object scope,
                           object expression,
                           object argsize);

preval_header(iscoped_new_from_scope_expression_size);

struct ast_scoped {
    object          scope;
    object          expression;
    object          argsize;
};

#endif // SYSTEM_ISCOPED_H
