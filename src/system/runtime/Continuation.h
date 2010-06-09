#ifndef CONTINUATION_H
#define CONTINUATION_H

#include <pinocchio.h>

/* ========================================================================= */

struct Continuation_t {
    Array  exp_stack;
    Array  cnt_stack;
    Optr      iss;
    Optr      env;
};

extern void post_init_Continuation();
extern Continuation new_Continuation();

/* ========================================================================= */

#endif // CONTINUATION_H
