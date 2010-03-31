#ifndef CONTINUATION_H
#define CONTINUATION_H

#include <pinocchio.h>

/* ========================================================================= */

#define RUNTIME_CONTINUATION_SIZE 4
#define RUNTIME_CONTINUATION_VARS\
    L"expStack", L"cntStack", L"interpreterStack", L"context"

struct Runtime_Continuation_t {
    Type_Array  exp_stack;
    Type_Array  cnt_stack;
    Object      iss;
    Object      env;
};

CREATE_INITIALIZERS(Runtime_Continuation)
extern Runtime_Continuation new_Runtime_Continuation();

/* ========================================================================= */

#endif // CONTINUATION_H
