#ifndef CONTINUE_H
#define CONTINUE_H

#include <pinocchio.h>

/* ========================================================================= */

struct Continue_t {
    uns_int     exp_offset;
    uns_int     cnt_offset;
    Optr      iss;
    Optr      env;
};

extern void post_init_Continue();
extern Continue new_Continue();
extern Continue new_Continue_offset(int offset);
extern void Continue_escape(Continue cont, Optr return_value);
/* ========================================================================= */

#endif // CONTINUE_H
