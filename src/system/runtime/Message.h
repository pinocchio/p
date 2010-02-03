#ifndef RUNTIME_MESSAGE_H
#define RUNTIME_MESSAGE_H

#include <pinocchio.h>

/* ========================================================================= */

#define RUNTIME_MESSAGE_SIZE 2
#define RUNTIME_MESSAGE_VARS L"selector", L"arguments"

/* ========================================================================= */

struct Runtime_Message_t {
    Object      selector;
    Type_Array  arguments;
};

CREATE_INITIALIZERS(Runtime_Message)
extern Runtime_Message new_Runtime_Message();

/* ========================================================================= */


/* ========================================================================= */

#endif // RUNTIME_MESSAGE_H
