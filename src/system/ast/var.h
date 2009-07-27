#ifndef SYSTEM_ast_var_H
#define SYSTEM_ast_var_H
#include <scheme/natives.h>
#include <system/type/type.h>
export_type(ast_var);

extern ast_var_object make_ast_var(const wchar_t* name);

preval_header(ast_var_new_from_string);

struct ast_var {
    string_object   name;
    object          scope;
    smallint_object index;
};

#endif // SYSTEM_ast_var_H
