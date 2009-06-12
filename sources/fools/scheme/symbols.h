#ifndef SCHEME_SYMBOLS_H
#define SCHEME_SYMBOLS_H

// General purpose
extern object EVAL;
extern object PRE_EVAL_ENV;
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

extern object SYMBOLdispatch_col_delegate_col_;
extern object SYMBOLbasicNew;
extern object SYMBOLobjectAt_col_put_col_;
extern object SYMBOLsuperclass;
extern object SYMBOLmethodDictionary;
extern object SYMBOLlayout;
extern object SYMBOLname;
extern object SYMBOLinstance;
extern object SYMBOLMetaclass;
extern object SYMBOLclass_col_super_col_instvars_col_classvars_col_;
extern object SYMBOLObject;
extern object SYMBOLsubclass_col_instvars_col_classvars_col_;
extern object SYMBOLprint;
extern object SYMBOLdoesNotUnderstand_col_env_col_args_col_;
extern object SYMBOLclass;
extern object SYMBOLdelegate;
extern object SYMBOLdispatch_col_delegate_col_size_col_;
extern object SYMBOLobjectAt_col_;
extern object SYMBOLeval;
extern object SYMBOLstore_col_at_col_in_col_;
extern object SYMBOLsubScope_col_key_col_;
extern object SYMBOLscope_col_key_col_;
extern object SYMBOLparent_col_;
extern object SYMBOLparent;
extern object SYMBOLsize_col_;
extern object SYMBOLiapply_col_;
extern object SYMBOLscope;
extern object SYMBOLbasicNew_col_;
extern object SYMBOLshift;
extern object SYMBOLtestMethod;
extern object SYMBOLArray;
extern object SYMBOLOrderedCollection;
extern object SYMBOLArrayedCollection;
extern object SYMBOLSequenceableCollection;
extern object SYMBOLCollection;
extern object SYMBOLFalse;
extern object SYMBOLTrue;
extern object SYMBOLBoolean;
extern object SYMBOLInteger;
extern object SYMBOLNumber;
extern object SYMBOLMagnitude;
extern object SYMBOLClass;
extern object SYMBOLClassBehaviour;
extern object SYMBOLnew;
extern object SYMBOLsize;
extern object SYMBOLlookup;
extern object SYMBOLeval_col_;
extern object SYMBOLdoesNotUnderstand_col_in_col_with_col_;
extern object SYMBOLapply_col_in_col_;
extern object SYMBOLlookup_col_;
extern object SYMBOLinitialize;
extern object SYMBOLIFixed;
extern object SYMBOLEnvironment;
extern object SYMBOLkey;
extern object SYMBOLindex;
extern object SYMBOLto_col_expression_col_;
extern object SYMBOLString;
extern object SYMBOLstore_col_method_col_;
extern object SYMBOLSymbol;
extern object SYMBOLUndefinedObject;
extern object SYMBOLSmallInteger;
extern object SYMBOLIList;
extern object SYMBOLICall;
extern object SYMBOLIConst;
extern object SYMBOLIVar;
extern object SYMBOLIAssign;
extern object SYMBOLICapture;
extern object SYMBOLIScoped;
extern object SYMBOLEvaluatable;
extern object SYMBOLon_col_;
extern object SYMBOLreadChar;
extern object SYMBOLwriteChar_col_;
extern object SYMBOLatEnd;
extern object SYMBOLreadAllChars;


#define define_symbol(name, value)\
    if (name.pointer == NULL) {\
        name = make_symbol(value);\
    }

extern void bootstrap_scheme_symbols();

#endif
