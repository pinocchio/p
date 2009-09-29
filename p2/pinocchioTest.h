#ifndef PINOCCHIOTEST_H
#define PINOCCHIOTEST_H

/* ========================================================================== */

#include <pinocchio.h>
#include <signal.h>
#include <setjmp.h>

#define NEW_TEST(name) void name() {\
	LOG("+++++++ %s %s:%u \n", #name, __FILE__, __LINE__);

#define NEW_CLASS_TEST(name) void name() {\
LOG("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n"); \
LOG("+++++++ %s %s:%u \n", #name, __FILE__, __LINE__); \
LOG("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

extern void run_tests();

/* ========================================================================== */

extern jmp_buf __test_continue__;
#define RUN_TEST(f)\
    if (!setjmp(__test_continue__)) {\
        RESET_LOG();\
        test##_##f();\
    }

/* ========================================================================== */

extern Object Eval_AST_SendConst(Object self, Object symbol, Type_Array args);
extern Object Eval_AST_Send(Object self, Object symbol, Type_Array args);
extern Object Eval_AST_Send0(Object self, Object symbol);
extern Object Eval_AST_Send1(Object self, Object symbol, Object arg);

/* ========================================================================== */

#endif // PINOCCHIOTEST_H
