#ifndef CONTINUE_H
#define CONTINUE_H

#include <pinocchio.h>

/* ========================================================================= */

#define RUNTIME_CONTINUE_SIZE 5
#define RUNTIME_CONTINUE_VARS L"expOffset", L"cntOffset", L"env", L"target", L"info"

struct Runtime_Continue_t {
    uns_int     exp_offset;
    uns_int     cnt_offset;
    Object      Env;
    Object      target;
    AST_Info    info;
};

CREATE_INITIALIZERS(Runtime_Continue)
extern Runtime_Continue new_Runtime_Continue();

/* ========================================================================= */

#endif // CONTINUE_H
