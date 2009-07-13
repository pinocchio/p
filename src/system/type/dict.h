#ifndef SYSTEM_DICT_H
#define SYSTEM_DICT_H

#include <system/type/type.h>
export_type(dict);

extern dict_object make_dict(int size);

struct dict {
    array_object        values;
};

#endif // SYSTEM_DICT_H
