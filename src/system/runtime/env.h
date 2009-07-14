#ifndef SYSTEM_ENV_H
#define SYSTEM_ENV_H

#include <system/type/type.h>
export_type(runtime_env);

extern runtime_env_object       make_env(object scope, object parent, int size);

extern object           inline env_at(runtime_env_object env, int index);
extern void             inline env_at_put(runtime_env_object env, int index, object value);

#define empty_env\
    make_env((object)woodstock->nil,\
             (object)woodstock->nil, 0)

struct runtime_env {
    object              scope;
    object              parent;
    array_object        values;
};

#endif // SYSTEM_ENV_H
