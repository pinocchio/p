void test_boolean_equals()
{
    Object result;
    
    result = EvalSend((Object)True,  Symbol_equals_, new_Array_With(1, (Object)True));
    assert(result == (Object)True);
    
    result = EvalSend((Object)True,  Symbol_equals_, new_Array_With(1, (Object)False));
    assert(result == (Object)False);
    
    result = EvalSend((Object)False, Symbol_equals_, new_Array_With(1, (Object)True));
    assert(result == (Object)False);
    
    result = EvalSend((Object)False, Symbol_equals_, new_Array_With(1, (Object)False));
    assert(result == (Object)True);
}


/* ======================================================================== */

void test_Boolean()
{
    test_boolean_equals();
}