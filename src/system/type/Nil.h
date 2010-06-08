#ifndef TYPE_NIL_H
#define TYPE_NIL_H

#include <pinocchio.h>

/* ========================================================================= */

struct Nil_t{};

extern Object nil;
extern AST_Constant nil_Const;
CREATE_INITIALIZERS(Nil)

/* ========================================================================= */

#endif // TYPE_NIL_H
