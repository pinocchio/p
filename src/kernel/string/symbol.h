#ifndef KERNEL_STRING_SYMBOL_H
#define KERNEL_STRING_SYMBOL_H

#include <pinocchio.h>

/* ======================================================================= */


extern struct Class Symbol_class;
extern struct Class SymbolTable_class;

/* ======================================================================= */

extern tSymbol new_Symbol(const wchar_t* input);

/* ======================================================================= */

#endif // KERNEL_STRING_SYMBOL_H
