#ifndef BOOTSTRAP_H
#define BOOTSTRAP_H

#include <model.h>

extern fools_object fools_system;
extern fools_object bootstrap();

// General purpose
extern object EVAL;
extern object PRE_EVAL_ENV;
// Variable
extern object ASSIGN_IN;
extern object FETCH_FROM;
// Environment
extern object STORE_AT_IN;
extern object SUBSCOPE_KEY;
extern object ENV_PARENT;
extern object ENV_SET_PARENT;
extern object PARENT;
// Iscope_class
extern object NEW_SIZE;
// Iscope
extern object EVAL_WITHARGUMENTS;
extern object APPLY;
extern object SCOPE_IN_ENV;
extern object SHIFT;
// Ifixed
extern object DISPATCH;
extern object OBJECT_AT;
extern object OBJECT_AT_PUT;
extern object NEW;
extern object DELEGATE;
extern object SIZE;
extern object DISPATCH_DELEGATE_SIZE;

#define NBR_SYMBOLS 12

#endif // BOOTSTRAP_H
