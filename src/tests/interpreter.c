#include <tests/pinocchio_test.h>

static Object test_machine_return( Object self_and_arguments[], Symbol message, char expected_return_code ) 
{
    Object self = self_and_arguments[0];
    MethodClosure method = lookup( self, message );
    assert_int_equal( expected_return_code, method_context( method->method, NULL, self_and_arguments ) );

    return self_and_arguments[0];
}

static Object test_machine( Object self_and_args[], Symbol message )
{
    return test_machine_return( self_and_args, message, 0);
}

static void install_method( Behavior class, Symbol name, RawArray bytecode )
{
    Array annotations = NULL;
    Array body = NULL;
    Method method = new_Method(annotations, bytecode, body);
    new_MethodClosure(class, name, method);
}

static Object test_code( Object self, RawArray bytecode )
{
    install_method( get_class( self ), new_Symbol(L"test"), bytecode );
    Object self_and_args[] = { self };
    return test_machine( self_and_args, new_Symbol(L"test") );
}

void test_interpreter_can_return_constant(void **state)
{

    SmallInteger integer = new_SmallInteger(500);
    RawArray code = new_RawArray(7, &method_context, (uns_int)1, OP(load_constant), (uns_int)0, integer, OP(return), (uns_int)0);

    SmallInteger returned = (SmallInteger) test_code( (Object)new_SmallInteger(0), code );

    assert_true( returned == integer );
}

void test_interpreter_can_call_methods(void **state)
{
    SmallInteger integer = new_SmallInteger(500);
    RawArray code =
        new_RawArray(7,
            &method_context, (uns_int)1,
            OP(load_constant), (uns_int)0, integer,
            OP(return), (uns_int)0);

    SmallInteger returned = (SmallInteger)test_code( (Object)new_SmallInteger(0), code );

    assert_true( returned == integer );
}

void test_interpreter_can_call_native( void **state )
{
    RawArray code =
        new_RawArray(2,
            OP(lookup_native), new_NativeName( L"SmallInteger", L"plus"));


    install_method( (Behavior)SmallInteger_class, new_Symbol(L"test"), code );

    Object args[] = { (Object)new_SmallInteger(1), (Object)new_SmallInteger(2) };
    SmallInteger returned = (SmallInteger)test_machine_return( args, new_Symbol(L"test"), 3 );

    assert_int_equal( returned->value, 3 );
}

void test_interpreter_can_call_closure( void **state )
{
    RawArray code =
        new_RawArray(7,
            &method_context, (uns_int)1,
            OP(load_constant), (uns_int)0, new_SmallInteger(500),
            OP(return), (uns_int)0);
    Block block = new_Block(code, NULL);

    code =
        new_RawArray(2,
            OP(lookup_native), new_NativeName( L"BlockClosure", L"apply"));
    install_method((Behavior)BlockClosure_class, new_Symbol(L"value"), code );

    code =
        new_RawArray(12,
            &method_context, (uns_int)1,
            OP(capture), block, (uns_int)0, (uns_int)0, (uns_int)0,
            OP(send), (uns_int)0, new_Symbol(L"value"), OP(nop),
            OP(return), (uns_int)0);

    install_method((Behavior)SmallInteger_class, new_Symbol(L"test"), code);

    SmallInteger integer = new_SmallInteger(489);
    Object args[] = { (Object)integer, (Object)new_SmallInteger(2) };
    
    SmallInteger returned = (SmallInteger) test_machine( args, new_Symbol(L"test") );

    assert_int_equal( returned->value, 500 );
}

void test_interpreter_can_call_closure_ignore_return( void **state )
{
    Array annotations;
    RawArray code =
        new_RawArray(7,
            &method_context, (uns_int)1,
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
            &method_context, (uns_int)1,
            OP(capture), block, (uns_int)0, (uns_int)0, (uns_int)0,
            OP(send), (uns_int)0, new_Symbol(L"value"), OP(nop),
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
            &method_context, (uns_int)1,
            OP(load_constant), (uns_int)0, new_SmallInteger(500),
            OP(block_return), (uns_int)0);
    Block block = new_Block(code, NULL);

    Array body;
    code =
        new_RawArray(4,
            &method_context, (uns_int)0,
            OP(lookup_native), new_NativeName( L"BlockClosure", L"apply"));
    Method method = new_Method(annotations, code, body);

    new_MethodClosure((Behavior)BlockClosure_class, new_Symbol(L"value"), method);

    code =
        new_RawArray(17,
            &method_context, (uns_int)1,
            OP(capture), block, (uns_int)0, (uns_int)0, (uns_int)0,
            OP(send), (uns_int)0, new_Symbol(L"value"), (uns_int)0, (uns_int)0,
            OP(load_constant), (uns_int)0, new_SmallInteger(700),
            OP(return), (uns_int)0);

    method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"test"), method);


    SmallInteger integer = new_SmallInteger(489);

    Object args[] = { (Object)integer, (Object)new_SmallInteger(2) };
    method_context( &method->code->data[1], NULL, args );

    assert_int_equal( ((SmallInteger)args[0])->value, 500 );
}

void test_interpreter_can_fib( void **state )
{

    Array annotations;
    Array body;
    RawArray code;
    Block block;
    Method method;

    code = new_RawArray(4,
            &method_context, 0,
            OP(lookup_native), new_NativeName( L"SmallInteger", L"smaller"));
    method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"<"), method);

    code = new_RawArray(4,
            &method_context, 0,
            OP(lookup_native), new_NativeName( L"SmallInteger", L"minus"));
    method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"-"), method);

    code = new_RawArray(4,
            &method_context, 0,
            OP(lookup_native), new_NativeName( L"SmallInteger", L"plus"));
    method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"+"), method);

    code = new_RawArray(57,
            &method_context, (uns_int)3,
            OP(self), (uns_int)0,
            OP(load_constant), (uns_int)1, new_SmallInteger(2),
            OP(send), (uns_int)0, new_Symbol(L"<"), (uns_int)0, (uns_int)0,
            OP(iftrue_iffalse), (uns_int)0, (uns_int)6, (uns_int)0,
            OP(return_constant), new_SmallInteger(1),
            
            OP(self), (uns_int)0,
            OP(load_constant), (uns_int)1, new_SmallInteger(2),
            OP(send), (uns_int)0, new_Symbol(L"-"), (uns_int)0, (uns_int)0,
            OP(send), (uns_int)0, new_Symbol(L"fib"), (uns_int)0, (uns_int)0,
            
            OP(self), (uns_int)1,
            OP(load_constant), (uns_int)2, new_SmallInteger(1),
            OP(send), (uns_int)1, new_Symbol(L"-"), (uns_int)0, (uns_int)0,
            OP(send), (uns_int)1, new_Symbol(L"fib"), (uns_int)0, (uns_int)0,

            OP(send), (uns_int)0, new_Symbol(L"+"), (uns_int)0, (uns_int)0,

            OP(return), (uns_int)0);

    method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"fib"), method);

    SmallInteger integer = new_SmallInteger(34);

    Object args[] = { (Object)integer };
    method_context( &method->code->data[1], NULL, args );

    assert_int_equal( ((SmallInteger)args[0])->value, 8 );
}
