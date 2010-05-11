#ifndef SUPER_H
#define SUPER_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_SUPER_SIZE 4
#define AST_SUPER_VARS L"info", L"cache", L"message", L"unused"

struct AST_Super_t {
    uns_int         size;
    AST_Info        info;   
    Type_Array      cache;
    Object          message; 
    Object          unused;
    Object          arguments[];
};

CREATE_INITIALIZERS(AST_Super)
extern AST_Super new_AST_Super(Object message, uns_int argc, ...);

/* ========================================================================= */

extern void AST_Super_eval(AST_Super self);
extern void AST_Super_tail_eval(AST_Super self);

/* ========================================================================= */

#endif // SUPER_H
