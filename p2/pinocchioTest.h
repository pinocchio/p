#ifndef PINOCCHIOTEST_H
#define PINOCCHIOTEST_H

/* ========================================================================== */

#include <pinocchio.h>
#include <signal.h>
#include <setjmp.h>

#define NEW_TEST(name) void name() {\
	LOG("+++++++ %s %s:%u \n", #name, __FILE__, __LINE__);

#define SKIP_TEST printf("Test skipped: %s %s:%u\n",\
    __FUNCTION__, __FILE__, __LINE__); return;

#define NEW_CLASS_TEST(name) void name() {\
LOG("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n"); \
LOG("+++++++ %s %s:%u \n", #name, __FILE__, __LINE__); \
LOG("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

extern void test_suite_begin();
extern void test_suite_end();

extern void run_tests();

#define TEST_SUITE(name, tests) void test_##name() {\
    test_suite_begin();\
    tests\
    test_suite_end();\
}

#define RUN_TEST(f) test_##f();

/* ========================================================================== */

extern Object Eval_AST_SendConst(Object self, Object symbol, Type_Array args);
extern Object Eval_AST_Send(Object self, Object symbol, Type_Array args);
extern Object Eval_AST_Send0(Object self, Object symbol);
extern Object Eval_AST_Send1(Object self, Object symbol, Object arg);

/* ========================================================================== */

#endif // PINOCCHIOTEST_H
