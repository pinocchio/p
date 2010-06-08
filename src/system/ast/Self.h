#ifndef SELF_H
#define SELF_H

#include <pinocchio.h>

/* ========================================================================= */

struct Self_t {};

extern Optr self;

/* ========================================================================= */
extern void post_init_Self();

extern void Self_eval();
extern void CNT_Self_eval();

#endif // SELF_H
