#include <tests/pinocchio_test.h>

int print_called = 0;

void op_print1(Thread thread)
{
    print_called = 1;
    thread->context->pc->data++;
}

void test_interpreter_can_call_methods(void **state)
{
    SmallInteger integer = new_SmallInteger(500);

    // TODO allocate thread objects on C-stack
    Array annotations;
    RawArray code = new_RawArray(8, OP(allocate_locals), 1, OP(load_constant), 0, integer, OP(return), 0 );
    Array body;

    Method method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"test"), method);

    code = new_RawArray(1, OP(return_self));

    Object args[] = { (Object)new_SmallInteger(0) };
    method_context( method, args );


//    opcode_evaluate(thread);

    assert_true( args[0] == integer );
}


void test_interpreter_can_call_native( void **state )
{
    Array annotations;

    RawArray code = new_RawArray(5, OP(lookup_native), new_NativeName( L"SmallInteger", L"plus"), OP(exit));
    Array body;

    Method method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"test"), method);


    SmallInteger integer = new_SmallInteger(1);

    Object args[] = { (Object)integer, (Object)new_SmallInteger(2) };
    method_context( method, args );

    assert_int_equal( ((SmallInteger)args[0])->value, 3 );

//    assert_int_equal( , 3 );
    
}

