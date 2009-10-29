#ifndef SUPER_H
#define SUPER_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_SUPER_SIZE 4
#define AST_SUPER_VARS L"cache", L"message", L"arguments", L"info"

struct AST_Super_t {
    InlineCache     cache;
    Object          message; 
    Type_Array      arguments;
    AST_Info        info;   
};

CREATE_INITIALIZERS(AST_Super)
extern AST_Super new_AST_Super(Object message, Type_Array arguments);

/* ========================================================================= */

extern void AST_Super_eval(AST_Super self);

/* ========================================================================= */

#endif // SUPER_H
