#ifndef PINOCCHIOTEST_H
#define PINOCCHIOTEST_H

/* ========================================================================== */

#include <pinocchio.h>

#define test(name) void name##_test() {\
LOG("name");\

extern void run_tests();

/* ========================================================================== */

extern Object EvalAST_SendConst(Object self, Object symbol, Type_Array args);
extern Object EvalAST_Send(Object self, Object symbol, Type_Array args);
extern Object EvalAST_Send0(Object self, Object symbol);
extern Object EvalAST_Send1(Object self, Object symbol, Object arg);

/* ========================================================================== */

#endif // PINOCCHIOTEST_H
