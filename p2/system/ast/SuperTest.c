
void test_ast_super()
{
    Type_SmallInt integer       = new_SmallInt(70);
    Type_SmallInt integer7      = new_SmallInt(7);
    AST_Constant integer_const  = new_Constant((Object)integer);
    AST_Constant integer7_const = new_Constant((Object)integer7);
    
    Type_Symbol test  = new_Symbol(L"test");
    Type_Array body   = new_Array_With(3, (Object)integer7_const);
    body->values[2]     = (Object)new_Super((Object)test, new_Raw_Array(0));
    AST_Method method = new_Method(0, body);
    store_method(True_Class, (Object)test, (Object)method);
    
    body             = new_Array_With(3, (Object)integer7_const);
    body->values[2]  = (Object)integer_const;
    method = new_Method(0, body);
    store_method(Boolean_Class, (Object)test, (Object)method);
    
    Object result = Eval((Object)new_Send((Object)True_Const, (Object)test, new_Raw_Array(0)));
    assert(result == (Object)integer);
}


/* ======================================================================== */

void test_Super()
{
    test_ast_super();
}