#ifndef CONTINUE_H
#define CONTINUE_H

#include <pinocchio.h>

/* ========================================================================= */

#define RUNTIME_CONTINUE_SIZE 4
#define RUNTIME_CONTINUE_VARS L"expOffset", L"cntOffset", L"env", L"target"

struct Runtime_Continue_t {
    uns_int     exp_offset;
    uns_int     cnt_offset;
    Object      Env;
    Object      target;
};

CREATE_INITIALIZERS(Runtime_Continue)
extern Runtime_Continue new_Runtime_Continue();

/* ========================================================================= */

#endif // CONTINUE_H
