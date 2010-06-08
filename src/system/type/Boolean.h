#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <pinocchio.h>

#define BOOL_SIZE 0
#define BOOL_VARS 

/* ========================================================================= */

extern void post_init_Boolean();
extern Optr get_bool(bool value);

/* ========================================================================= */

extern Optr true;
extern Optr false;
extern Constant true_Const;
extern Constant false_Const;

/* ========================================================================= */

#endif // BOOLEAN_H
