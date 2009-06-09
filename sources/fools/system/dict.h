#ifndef SYSTEM_DICT_H
#define SYSTEM_DICT_H

extern void idict_stub_dispatch();
extern void idict_class_dispatch();
extern void idict_class_stub_dispatch();

extern dict_object make_dict(int size);

struct dict {
    array_object        values;
};

#endif // SYSTEM_DICT_H
