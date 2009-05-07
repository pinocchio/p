#ifndef BOOTSTRAP_H
#define BOOTSTRAP_H

#include <model.h>

extern fools_object fools_system;
extern fools_object bootstrap();

enum SYMBOL {
    // General purpose
    EVAL,
    PRE_EVAL_ENV,
    // Variable
    ASSIGN_IN,
    FETCH_FROM,
    // Environment
    STORE_AT_IN,
    SUBSCOPE_KEY,
    ENV_PARENT,
    ENV_SET_PARENT,
    PARENT,
    // Iscope_class
    ENV_NEW_SIZE,
    // Iscope
    EVAL_WITHARGUMENTS,
    DOEVAL_WITHARGUMENTS,
    SCOPE_IN_ENV
};

#define NBR_SYMBOLS 13

#endif // BOOTSTRAP_H
