
void test_thread_stress()
{
    Object test     = (Object)new_Constant((Object)new_SmallInt(0));
    Object add      = (Object)new_Constant((Object)new_SmallInt(1));
    
    // AST_Send * send = new_Send(test, Symbol_plus_, new_Raw_Array(0));
    AST_Send * send = new_Send(test, Symbol_plus_, new_Array_With(1, add));
    
    int idx;
    int count = 10000000;
    for (idx = 0; idx < count; idx++) {   
        //    Eval((Object)assign);
        Eval((Object)send);
    }
}

/* ======================================================================== */

void test_Thread()
{
    //test_thread_stress();
}