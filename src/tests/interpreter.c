#include <tests/pinocchio_test.h>

int print_called = 0;

void op_print1(Thread thread)
{
    print_called = 1;
    thread->context->pc->data++;
}

void test_interpreter_can_call_methods(void **state)
{
    // TODO allocate thread objects on C-stack
    Array annotations;
    RawArray code = new_RawArray(7, OP(self), 0, OP(send), 0, 0, new_Symbol(L"test2"), OP(exit));
    Array body;

    Method method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"test"), method);

    code = new_RawArray(2, OP(print1), OP(return_self));

    method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"test2"), method);

    Thread thread = new_Thread(THREAD_SIZE, (Object)new_SmallInteger(0), new_Symbol(L"test"));
    opcode_evaluate(thread);

    assert_true( print_called==1 );
}

void test_interpreter_can_call_native( void **state )
{
    Array annotations;
    

    RawArray code = new_RawArray(5, OP(self), 0, OP(lookup_native), new_NativeName( L"SmallInteger", L"plus"), OP(exit));
    Array body;

    Method method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"test"), method);

    Thread thread = new_Thread(THREAD_SIZE, (Object)new_SmallInteger(0), new_Symbol(L"test"));

//    opcode_evaluate(thread);
printf( "!! skipped !!\n" );
}
