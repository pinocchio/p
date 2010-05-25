#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <pinocchio.h>

#define BOOL_SIZE 0
#define BOOL_VARS 

/* ========================================================================= */

extern void post_init_Type_Boolean();
extern Object get_bool(bool value);

/* ========================================================================= */

extern Object True;
extern Object False;
extern AST_Constant True_Const;
extern AST_Constant False_Const;

/* ========================================================================= */

#endif // BOOLEAN_H
