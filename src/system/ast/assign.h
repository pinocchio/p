#ifndef SYSTEM_ast_assign_H
#define SYSTEM_ast_assign_H
#include <scheme/natives.h>
#include <system/type/type.h>
export_type(ast_assign);

extern ast_assign_object make_ast_assign(object variable, object expression);


preval_header(ast_assign_new_from_variable_expression);

struct ast_assign {
    object          variable;
    object          expression;
};


#endif // SYSTEM_ast_assign_H
