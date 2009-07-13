#ifndef SYSTEM_NUMBER_H
#define SYSTEM_NUMBER_H

#include <system/type/type.h>
export_type(number);

extern number_object    make_number(int value);

struct number {
    int value;
};

#endif // SYSTEM_NUMBER_H
