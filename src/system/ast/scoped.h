#ifndef SYSTEM_ast_scoped_H
#define SYSTEM_ast_scoped_H
#include <scheme/natives.h>
#include <system/type/type.h>

export_type(ast_scoped);

extern object make_ast_scoped(object scope,
                           object expression,
                           object argsize);

preval_header(ast_scoped_new_from_scope_expression_size);

extern void ast_scoped_apply_in_do();

struct ast_scoped {
    object          scope;
    object          expression;
    object          argsize;
};

#endif // SYSTEM_ast_scoped_H
