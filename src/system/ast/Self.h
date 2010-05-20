#ifndef SELF_H
#define SELF_H

#include <pinocchio.h>

/* ========================================================================= */

struct AST_Self_t {};

extern Object Self;
extern void post_init_AST_Self();

/* ========================================================================= */

extern void AST_Self_eval();
extern void CNT_AST_Self_eval();

#endif // SELF_H
