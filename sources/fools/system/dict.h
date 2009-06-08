#ifndef SYSTEM_DICT_H
#define SYSTEM_DICT_H

extern void dict_stub_dispatch();
extern void dict_class_stub_dispatch();

extern dict_object make_dict(int size);

struct dict {
    array_object        values;
};

#endif // SYSTEM_DICT_H
