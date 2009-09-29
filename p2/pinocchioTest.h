#ifndef PINOCCHIOTEST_H
#define PINOCCHIOTEST_H

/* ========================================================================== */

#include <pinocchio.h>

#define test(name) void name##_test() {\
LOG("name");\

extern void run_tests();

/* ========================================================================== */

extern Object EvalSendConst(Object self, Object symbol, Type_Array args);
extern Object EvalSend(Object self, Object symbol, Type_Array args);
extern Object EvalSend0(Object self, Object symbol);
extern Object EvalSend1(Object self, Object symbol, Object arg);

/* ========================================================================== */

#endif // PINOCCHIOTEST_H
