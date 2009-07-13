#ifndef SYSTEM_IFIXED_H
#define SYSTEM_IFIXED_H

#include <system/type/type.h>
export_type(ifixed);
export_type(fixed);

extern object make_class(object size,
                         transfer_target cdispatch);


struct ifixed {
    object          cdisp;
    object          dispatch;
    object          delegate;
    int             size;
};

#endif // SYSTEM_ISCOPED_H
