#ifndef AST_CONSTANT
#define AST_CONSTANT


/* ========================================================================== */

typedef struct AST_Constant {
    Object          constant;
} AST_Constant;

AST_Constant * new_Constant(Object constant);

/* ========================================================================== */

void pre_initialize_Constant();
void post_initialize_Constant();

/* ========================================================================== */

#endif AST_CONSTANT