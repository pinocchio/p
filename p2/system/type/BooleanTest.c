void test_boolean_equals()
{
    Object test     = (Object)new_Constant((Object)new_SmallInt(0));
    Object add      = (Object)new_Constant((Object)new_SmallInt(1));
    
    Object result = Eval((Object)new_Send(test,  Symbol_equals_, new_Array_With(1, add)));
    assert(!((Type_Boolean*)((AST_Constant*) result)->constant)->value);
    
    result = Eval((Object)new_Send(test,  Symbol_equals_, new_Array_With(1, test)));
    assert(((Type_Boolean*)((AST_Constant*) result)->constant)->value);
    
    result = Eval((Object)new_Send((Object)True_Const,  Symbol_equals_, new_Array_With(1, (Object)True_Const)));
    assert(((Type_Boolean*)((AST_Constant*) result)->constant)->value);
    
    result = Eval((Object)new_Send((Object)True_Const,  Symbol_equals_, new_Array_With(1, (Object)False_Const)));
    assert(!((Type_Boolean*)((AST_Constant*) result)->constant)->value);
    
    result = Eval((Object)new_Send((Object)False_Const, Symbol_equals_, new_Array_With(1, (Object)True_Const)));
    assert(!((Type_Boolean*)((AST_Constant*) result)->constant)->value);
    
    result = Eval((Object)new_Send((Object)False_Const, Symbol_equals_, new_Array_With(1, (Object)False_Const)));
    assert(((Type_Boolean*)((AST_Constant*) result)->constant)->value);
}


/* ======================================================================== */

void test_Boolean()
{
    test_boolean_equals();
}