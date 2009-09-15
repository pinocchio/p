
void test_SmallInt_equals()
{
    Object int0     = (Object)new_SmallInt(0);
    Object int2     = (Object)new_SmallInt(2);
    Object result;
    
    result = EvalSend(int0,SMB_equals_, new_Array_With(1, int2));
    assert(result == (Object)False);
    result = EvalSend(int2,SMB_equals_, new_Array_With(1, int0));
    assert(result == (Object)False);
    
    result = EvalSend(int0,SMB_equals_, new_Array_With(1, int0));
    assert(result == (Object)True);
    
    result = EvalSend(int2,SMB_equals_, new_Array_With(1, int2));
    assert(result == (Object)True);
}

/* ======================================================================== */

void test_SmallInt()
{
    test_SmallInt_equals();
}