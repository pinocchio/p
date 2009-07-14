#ifndef SYSTEM_ISCOPED_H
#define SYSTEM_ISCOPED_H

#include <system/type/type.h>
export_type(ast_scoped);

extern object make_iscoped(object scope,
                           object expression,
                           object argsize);

struct ast_scoped {
    object          scope;
    object          expression;
    object          argsize;
};

#endif // SYSTEM_ISCOPED_H
