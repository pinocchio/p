#ifndef KERNEL_STRING_SYMBOL_H
#define KERNEL_STRING_SYMBOL_H

#include <pinocchio.h>

/* ======================================================================= */

struct Symbol {
    Header              header;
    uns_int             size;
    SmallInteger        hash;
    wchar_t             character[];
};

extern Class Symbol_class;

/* ======================================================================= */

#endif // KERNEL_STRING_SYMBOL_H
