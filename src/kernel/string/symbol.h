#ifndef KERNEL_STRING_SYMBOL_H
#define KERNEL_STRING_SYMBOL_H

#include <pinocchio.h>

/* ======================================================================= */


extern struct Class Symbol;
extern struct Class SymbolTable;
extern struct Dictionary symboltable;

/* ======================================================================= */

extern tSymbol new_Symbol(const char* input);

/* ======================================================================= */

#endif // KERNEL_STRING_SYMBOL_H
