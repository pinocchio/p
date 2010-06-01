#ifndef AST_THREADED_METHOD
#define AST_THREADED_METHOD

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

extern void AST_ThreadedMethod_invoke(Runtime_MethodClosure closure, Object self,
                                      Type_Class class, uns_int argc);

#endif // AST_THREADED_METHOD
