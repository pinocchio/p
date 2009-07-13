#ifndef SYSTEM_IVAR_H
#define SYSTEM_IVAR_H

#include <system/type/type.h>
export_type(ast_var);

extern ast_var_object make_ivar(const wchar_t* name);

struct ast_var {
    string_object   name;
    object          scope;
    number_object   index;
};

#endif // SYSTEM_IVAR_H
