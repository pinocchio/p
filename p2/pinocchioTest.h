#ifndef PINOCCHIOTEST_H
#define PINOCCHIOTEST_H

/* ========================================================================== */

#include <pinocchio.h>

#define test(name) void name##_test() {\
LOG("testing for name");

extern void run_tests();

/* ========================================================================== */

extern Object Eval_AST_SendConst(Object self, Object symbol, Type_Array args);
extern Object Eval_AST_Send(Object self, Object symbol, Type_Array args);
extern Object Eval_AST_Send0(Object self, Object symbol);
extern Object Eval_AST_Send1(Object self, Object symbol, Object arg);

/* ========================================================================== */

#endif // PINOCCHIOTEST_H
