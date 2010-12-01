#ifndef SELF_H
#define SELF_H

#include <pinocchio.h>

/* ========================================================================= */

struct Self_t {};

extern Optr self;

/* ========================================================================= */
extern void post_init_Self();

extern Optr current_self();

#endif // SELF_H
