#ifndef CONTINUATION_H
#define CONTINUATION_H

#include <pinocchio.h>

/* ========================================================================= */

struct Runtime_Continuation_t {
    Array  exp_stack;
    Array  cnt_stack;
    Optr      iss;
    Optr      env;
};

extern void post_init_Runtime_Continuation();
extern Runtime_Continuation new_Runtime_Continuation();

/* ========================================================================= */

#endif // CONTINUATION_H
