#ifndef KERNEL_STRING_SYMBOL_H
#define KERNEL_STRING_SYMBOL_H

#include <pinocchio.h>

/* ======================================================================= */

struct Symbol {
    VariableHeader      header;
    wchar_t             character[];
};

extern Class Symbol_class;
extern Class SymbolTable_class;

/* ======================================================================= */

extern void init_symboltable();
extern Symbol new_Symbol(const wchar_t* input);

/* ======================================================================= */

#endif // KERNEL_STRING_SYMBOL_H
