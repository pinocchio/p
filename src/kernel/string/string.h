#ifndef KERNEL_STRING_STRING_H
#define KERNEL_STRING_STRING_H

#include <pinocchio.h>

/* ======================================================================= */

struct String {
    VariableHeader      header;
    wchar_t             character[];
};

extern Class String_class;
extern String empty_string;

/* ======================================================================= */

extern String raw_String(uns_int size);

/* ======================================================================= */

#endif // KERNEL_STRING_STRING_H
