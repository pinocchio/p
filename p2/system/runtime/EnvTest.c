void test_variable_lookup()
{
    // TODO complete test
    AST_Variable * var = new_Variable(L"test");
    var->index         = 0;
    var->key           = (Object)new_SmallInt(10);
    
    Env = (Object)new_Env_Sized(current_env(), var->key, 1);
    Env = (Object)new_Env_Sized(current_env(), Nil, 0);
}

/* ======================================================================== */

void test_Env()
{
    test_variable_lookup();
}