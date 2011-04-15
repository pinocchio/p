#include <tests/pinocchio_test.h>

int print_called = 0;

void op_print1(Thread thread)
{
    print_called = 1;
    thread->context->pc->data++;
}

static Object test_machine( Symbol message, Object self_and_arguments[], char expected_return_code ) 
{
    Object self = self_and_arguments[0];
    MethodClosure method = lookup( self, message );
    assert_int_equal( expected_return_code, method_context( method->method, NULL, self_and_arguments ) );

    return self_and_arguments[0];
}

static void install_method( Behavior class, Symbol name, RawArray bytecode )
{
    Array annotations;
    Array body;
    Method method = new_Method(annotations, bytecode, body);
    new_MethodClosure(class, name, method);
}

void test_interpreter_can_return_constant(void **state)
{

    SmallInteger integer = new_SmallInteger(500);
    
    RawArray code = new_RawArray(7, OP(allocate_locals), (uns_int)1, OP(load_constant), (uns_int)0, integer, OP(return), (uns_int)0);

    install_method( SmallInteger_class, new_Symbol(L"test"), code );

    Object arguments[] = {new_SmallInteger(0)};

    SmallInteger returned = test_machine( new_Symbol(L"test"), arguments, 0 );

    assert_true( returned == integer );
}

void test_interpreter_can_call_methods(void **state)
{
    SmallInteger integer = new_SmallInteger(500);

    // TODO allocate thread objects on C-stack
    Array annotations;
    RawArray code =
        new_RawArray(7,
            OP(allocate_locals), (uns_int)1,
            OP(load_constant), (uns_int)0, integer,
            OP(return), (uns_int)0);
    Array body;

    Method method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"test"), method);

    code = new_RawArray(1, OP(return_self));

    Object args[] = { (Object)new_SmallInteger(0) };
    method_context( method, NULL, args );


    assert_true( args[0] == integer );
}

void test_interpreter_can_call_native( void **state )
{
    Array annotations;

    RawArray code =
        new_RawArray(2,
            OP(lookup_native), new_NativeName( L"SmallInteger", L"plus"));
    Array body;

    Method method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"test"), method);


    SmallInteger integer = new_SmallInteger(1);

    Object args[] = { (Object)integer, (Object)new_SmallInteger(2) };
    method_context( method, NULL, args );

    assert_int_equal( ((SmallInteger)args[0])->value, 3 );
}

void test_interpreter_can_call_closure( void **state )
{
    Array annotations;
    RawArray code =
        new_RawArray(7,
            OP(allocate_locals), (uns_int)1,
            OP(load_constant), (uns_int)0, new_SmallInteger(500),
            OP(return), (uns_int)0);
    Block block = new_Block(code, NULL);

    Array body;
    code =
        new_RawArray(2,
            OP(lookup_native), new_NativeName( L"BlockClosure", L"apply"));
    Method method = new_Method(annotations, code, body);

    new_MethodClosure((Behavior)BlockClosure_class, new_Symbol(L"value"), method);

    code =
        new_RawArray(12,
            OP(allocate_locals), (uns_int)1,
            OP(capture), block, (uns_int)0, (uns_int)0, (uns_int)0,
            OP(send), (uns_int)0, new_Symbol(L"value"),
            OP(return), (uns_int)0);

    method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"test"), method);


    SmallInteger integer = new_SmallInteger(489);

    Object args[] = { (Object)integer, (Object)new_SmallInteger(2) };
    method_context( method, NULL, args );

    assert_int_equal( ((SmallInteger)args[0])->value, 500 );
}

void test_interpreter_can_call_closure_ignore_return( void **state )
{
    Array annotations;
    RawArray code =
        new_RawArray(7,
            OP(allocate_locals), (uns_int)1,
            OP(load_constant), (uns_int)0, new_SmallInteger(500),
            OP(return), (uns_int)0);
    Block block = new_Block(code, NULL);

    Array body;
    code =
        new_RawArray(2,
            OP(lookup_native), new_NativeName( L"BlockClosure", L"apply"));
    Method method = new_Method(annotations, code, body);

    new_MethodClosure((Behavior)BlockClosure_class, new_Symbol(L"value"), method);

    code =
        new_RawArray(15,
            OP(allocate_locals), (uns_int)1,
            OP(capture), block, (uns_int)0, (uns_int)0, (uns_int)0,
            OP(send), (uns_int)0, new_Symbol(L"value"),
            OP(load_constant), (uns_int)0, new_SmallInteger(700),
            OP(return), (uns_int)0);

    method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"test"), method);


    SmallInteger integer = new_SmallInteger(489);

    Object args[] = { (Object)integer, (Object)new_SmallInteger(2) };
    method_context( method, NULL, args );

    assert_int_equal( ((SmallInteger)args[0])->value, 700 );
}

void test_interpreter_can_nonlocal_return_from_closure( void **state )
{
    Array annotations;
    RawArray code =
        new_RawArray(7,
            OP(allocate_locals), (uns_int)1,
            OP(load_constant), (uns_int)0, new_SmallInteger(500),
            OP(block_return), (uns_int)0);
    Block block = new_Block(code, NULL);

    Array body;
    code =
        new_RawArray(2,
            OP(lookup_native), new_NativeName( L"BlockClosure", L"apply"));
    Method method = new_Method(annotations, code, body);

    new_MethodClosure((Behavior)BlockClosure_class, new_Symbol(L"value"), method);

    code =
        new_RawArray(15,
            OP(allocate_locals), (uns_int)1,
            OP(capture), block, (uns_int)0, (uns_int)0, (uns_int)0,
            OP(send), (uns_int)0, new_Symbol(L"value"),
            OP(load_constant), (uns_int)0, new_SmallInteger(700),
            OP(return), (uns_int)0);

    method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"test"), method);


    SmallInteger integer = new_SmallInteger(489);

    Object args[] = { (Object)integer, (Object)new_SmallInteger(2) };
    method_context( method, NULL, args );

    assert_int_equal( ((SmallInteger)args[0])->value, 500 );
}

