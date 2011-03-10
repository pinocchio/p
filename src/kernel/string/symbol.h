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
extern Class SymbolTable_class;

/* ======================================================================= */

extern void init_symboltable();
extern Symbol new_Symbol(const wchar_t* input);
extern uns_int Symbol_hash(Symbol symbol);

/* ======================================================================= */

#endif // KERNEL_STRING_SYMBOL_H
