#ifndef PINOCCHIOTEST_H
#define PINOCCHIOTEST_H

/* ========================================================================== */

#include <pinocchio.h>

#define test(name) void name##_test() {\
LOG("name");\

extern void run_tests();

/* ========================================================================== */

#endif // PINOCCHIOTEST_H
