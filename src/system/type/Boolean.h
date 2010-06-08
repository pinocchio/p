#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <pinocchio.h>

#define BOOL_SIZE 0
#define BOOL_VARS 

/* ========================================================================= */

extern void post_init_Boolean();
extern Object get_bool(bool value);

/* ========================================================================= */

extern Object true;
extern Object false;
extern Constant true_Const;
extern Constant false_Const;

/* ========================================================================= */

#endif // BOOLEAN_H
