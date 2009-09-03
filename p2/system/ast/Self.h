#ifndef AST_SELF
#define AST_SELF

/* ========================================================================== */

extern Type_Class * Self_Class;
extern Object Self;

/* ========================================================================== */

extern void AST_Self_eval();
extern void ast_self_eval();

/* ========================================================================== */

extern void pre_initialize_Self();
extern void post_initialize_Self();

/* ========================================================================== */

#endif  AST_SELF
