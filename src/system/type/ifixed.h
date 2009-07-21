#ifndef SYSTEM_IFIXED_H
#define SYSTEM_IFIXED_H

#include <system/type/type.h>
export_type(ifixed);
export_type(fixed);

extern object make_class(int size, transfer_target cdispatch);
extern object incomplete_fixed_class(int size);


struct ifixed_t {
    object          cdisp;
    object          dispatch;
    object          delegate;
    int             size;
};

#endif // SYSTEM_ast_scoped_H
