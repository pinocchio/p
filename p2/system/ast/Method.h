#ifndef METHOD_H
#define METHOD_H

#include <pinocchio.h>

/* ========================================================================== */

struct AST_Method_t {
    unsigned int    paramc;
    Object          environment;
    Type_Array          body;
};

CREATE_INITIALIZERS(Method)
extern AST_Method new_Method(unsigned int paramc, Type_Array body);

/* ========================================================================= */

extern void AST_Method_invoke(AST_Method method, Object self,Object class, Type_Array args);

extern void AST_Method_eval(Object self, Object class, Type_Array args);
extern void AST_Method_eval_(Object self, Object class, Type_Array args);

extern void Method_invoke(Object method, Object self, Object class, Type_Array args);

/* ========================================================================= */

#endif // METHOD_H
