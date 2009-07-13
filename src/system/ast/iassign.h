#ifndef SYSTEM_IASSIGN_H
#define SYSTEM_IASSIGN_H

#include <system/type/type.h>
export_type(ast_assign);

extern iassign_object make_iassign(object variable, object expression);

struct iassign {
    object          variable;
    object          expression;
};


#endif // SYSTEM_IASSIGN_H
