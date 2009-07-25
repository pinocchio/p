#ifndef SCHEME_SYMBOLS_H
#define SCHEME_SYMBOLS_H

// General purpose
extern object EVAL;
extern object EVAL_;
extern object HASH;
// Variable
extern object ASSIGN_IN;
extern object FETCH_FROM_;
// Environment
extern object STORE_AT_IN_;
extern object SUBSCOPE_KEY_;
extern object SCOPEID_SIZE_;
extern object PARENT_;
extern object PARENT;
// Iscope_class
extern object NEW_SIZE_;
// Iscope
extern object APPLY_IN_;
extern object LAMBDASHIFT;
extern object SCOPE;
extern object SHIFT;
// ast_capture
extern object INSTANCE;
// ast_assign
extern object TO_EXPRESSION_;
// ast_call
extern object TO_SIZED_;
// Ifixed
extern object OBJECT_AT_;
extern object OBJECT_AT_PUT_;
extern object BASICNEW;
extern object BASICNEW_;
extern object DELEGATE;
extern object SIZE;
extern object DISPATCH_DELEGATE_SIZE_;
extern object DISPATCH_DELEGATE_;
extern object SIZE_;
// File
extern object READCHAR;
extern object ON_;
extern object WRITE_CHAR_;
extern object ATEND;
extern object READALLCHARS;

#define define_symbol(name, value)\
    if (name.pointer == NULL) {\
        name = (object)make_symbol(value);\
    }

extern void bootstrap_scheme_symbols();

#endif
