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
extern object SET_PARENT;
extern object PARENT;
// Iscope_class
extern object NEW_SIZE;
// Iscope
extern object IAPPLY;
extern object APPLY_IN;
extern object SCOPE;
extern object SHIFT;
// Ifixed
extern object OBJECT_AT;
extern object OBJECT_AT_PUT;
extern object NEW;
extern object SIZED;
extern object DELEGATE;
extern object SIZE;
extern object DISPATCH_DELEGATE_SIZE;
extern object DISPATCH_SIZE;
extern object SET_DELEGATE;

#define NBR_SYMBOLS 20

#endif // BOOTSTRAP_H
