#ifndef AST_SUPER
#define AST_SUPER


/* ========================================================================== */

typedef struct AST_Super {
    InlineCache     cache;
    Object          message; 
    Object          arguments;
} AST_Super;

extern Type_Class * Super_Class;

extern AST_Super * new_Super(Object message, Type_Array * arguments);

/* ========================================================================== */

extern void AST_Super_eval(AST_Super * self);

/* ========================================================================== */

extern void pre_initialize_Super();
extern void post_initialize_Super();

#endif // AST_SUPER
