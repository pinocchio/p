#ifndef SCHEME_SYMBOLS_H
#define SCHEME_SYMBOLS_H

// General purpose
extern object EVAL;
extern object PRE_EVAL_ENV;
extern object HASH;
// Variable
extern object ASSIGN_IN;
extern object FETCH_FROM;
// Environment
extern object STORE_AT_IN;
extern object SUBSCOPE_KEY;
extern object SCOPE_KEY;
extern object SET_PARENT;
extern object PARENT;
// Iscope_class
extern object NEW_SIZE;
// Iscope
extern object IAPPLY;
extern object APPLY_IN;
extern object SCOPE;
extern object SHIFT;
// Icapture
extern object INSTANCE;
// Iassign
extern object TO_EXPRESSION;
// Icall
extern object TO_SIZED;
// Ifixed
extern object OBJECT_AT;
extern object OBJECT_AT_PUT;
extern object NEW;
extern object SIZED;
extern object DELEGATE;
extern object SIZE;
extern object DISPATCH_DELEGATE_SIZE;
extern object SET_DISPATCH_DELEGATE;
extern object WITH_SIZE;
// File
extern object READ;
extern object ON;
extern object WRITE;
extern object END;
extern object READ_ALL;

#define define_symbol(name, value)\
    if (name.pointer == NULL) {\
        name = make_symbol(value);\
    }

extern void bootstrap_scheme_symbols();

#endif
