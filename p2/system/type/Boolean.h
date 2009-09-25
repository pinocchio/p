#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <pinocchio.h>

AST_Constant new_Constant(Object value);

/* ========================================================================== */

struct Type_Boolean_t {
    int             value;
    wchar_t       * string;
};

CREATE_INITIALIZERS(Boolean)

/* ========================================================================= */

extern AST_Constant get_bool_const(bool value);
extern Type_Boolean get_bool(bool value);

/* ========================================================================= */

typedef Type_Boolean Type_False;

CREATE_INITIALIZERS(False)
extern AST_Constant False_Const;
extern Type_Boolean False;

/* ========================================================================= */

typedef Type_Boolean Type_True;

CREATE_INITIALIZERS(True)
extern Type_Boolean True;
extern AST_Constant True_Const;

/* ========================================================================= */

#endif // BOOLEAN_H
