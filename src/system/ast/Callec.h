#ifndef CALLEC_H
#define CALLEC_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_CALLEC_SIZE 2
#define AST_CALLEC_VARS L"target", L"info"

struct AST_Callec_t {
    AST_Info       info;
    Object         target;
};

CREATE_INITIALIZERS(AST_Callec)

extern AST_Callec new_AST_Callec();

/* ========================================================================= */

extern void AST_Callec_eval(AST_Callec self);

/* ========================================================================= */

#endif // CALLEC_H
