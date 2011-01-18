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

extern void init_symboltable();
extern Symbol new_Symbol(const wchar_t* input);

/* ======================================================================= */

#endif // KERNEL_STRING_STRING_H
