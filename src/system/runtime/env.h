#ifndef SYSTEM_ENV_H
#define SYSTEM_ENV_H

#include <system/type/type.h>
export_type(runtime_env);

struct env {
    object              scope;
    object              parent;
    array_object        values;
};


#endif // SYSTEM_ENV_H
