#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <pinocchio.h>

#define BOOL_SIZE 0
#define BOOL_VARS 

/* ========================================================================= */

extern void post_init_Type_Boolean();
extern Object get_bool(bool value);

/* ========================================================================= */

extern Object true;
extern Object false;
extern AST_Constant true_Const;
extern AST_Constant false_Const;

/* ========================================================================= */

#endif // BOOLEAN_H
