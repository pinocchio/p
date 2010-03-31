#ifndef RUNTIME_CONTEXT_H
#define RUNTIME_CONTEXT_H

#include <pinocchio.h>

/* ========================================================================= */

#define RUNTIME_CONTEXT_SIZE 5
#define RUNTIME_CONTEXT_VARS\
    L"scopeId", L"captured", L"closure",\
    L"homeContext", L"returnContext"

CREATE_INITIALIZERS(Runtime_Context)

/* ========================================================================= */

#endif // RUNTIME_CONTEXT_H
