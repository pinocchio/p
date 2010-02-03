#ifndef RUNTIME_MESSAGE_H
#define RUNTIME_MESSAGE_H

#include <pinocchio.h>

/* ========================================================================= */

#define RUNTIME_MESSAGE_SIZE 1
#define RUNTIME_MESSAGE_VARS L"selector"

/* ========================================================================= */

struct Runtime_Message_t {
    Object      selector;
    uns_int     size;
    Object      arguments[];
};

CREATE_INITIALIZERS(Runtime_Message)
extern Runtime_Message new_Runtime_Message();

/* ========================================================================= */


/* ========================================================================= */

#endif // RUNTIME_MESSAGE_H
