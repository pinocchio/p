#ifndef KERNEL_STRING_STRING_H
#define KERNEL_STRING_STRING_H

#include <pinocchio.h>

/* ======================================================================= */

struct String {
    Header              header;
    uns_int             size;
    SmallInteger        hash;
    wchar_t             character[];
};

extern Class String_class;
extern String empty_string;

/* ======================================================================= */

extern String raw_String(uns_int size);

/* ======================================================================= */

#endif // KERNEL_STRING_STRING_H
