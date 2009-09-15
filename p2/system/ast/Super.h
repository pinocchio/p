
CREATE_INITIALIZERS(Super);

/* ========================================================================== */

extern Type_Class * Super_Class;

extern AST_Super * new_Super(Object message, Type_Array * arguments);

/* ========================================================================== */

extern void AST_Super_eval(AST_Super * self);

/* ========================================================================== */

