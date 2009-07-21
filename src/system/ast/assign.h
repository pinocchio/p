#ifndef SYSTEM_IASSIGN_H
#define SYSTEM_IASSIGN_H
#include <scheme/natives.h>
#include <system/type/type.h>
export_type(ast_assign);

extern ast_assign_object make_iassign(object variable, object expression);


preval_header(iassign_new_from_variable_expression);

struct ast_assign {
    object          variable;
    object          expression;
};


#endif // SYSTEM_IASSIGN_H
