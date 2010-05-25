#ifndef CONTINUATION_H
#define CONTINUATION_H

#include <pinocchio.h>

/* ========================================================================= */

struct Runtime_Continuation_t {
    Collection_Array  exp_stack;
    Collection_Array  cnt_stack;
    Object      iss;
    Object      env;
};

extern void post_init_Runtime_Continuation();
extern Runtime_Continuation new_Runtime_Continuation();

/* ========================================================================= */

#endif // CONTINUATION_H
