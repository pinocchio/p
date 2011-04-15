#ifndef TESTS_INTERPRETER_H
#define TESTS_INTERPRETER_H

extern void test_interpreter_can_return_constant(void**);
extern void test_interpreter_can_call_methods(void**);
extern void test_interpreter_can_call_native(void**);
extern void test_interpreter_can_call_closure(void**);
extern void test_interpreter_can_call_closure_ignore_return(void**);
extern void test_interpreter_can_nonlocal_return_from_closure(void **);
extern void test_interpreter_can_fib(void **);

#endif // TESTS_INTERPRETER_H
