
void test_Array_ObjectAt_()
{
    Object integer       = (Object)new_SmallInt(10);
    Object integer2      = (Object)new_SmallInt(2);
    Type_Array * array   = new_Array_With(10, integer);
    Type_Array * args    = new_Raw_Array(1);
    array->values[4]  = integer2;
    int i; 
    for (i=0; i<array->size; i++) {
        if (i==4) { continue; }
        args->values[0] = (Object)new_Constant(new_SmallInt(i)); 
        assert(EvalSend((Object)array, Symbol_objectAt_, args) == integer);
        assert(array->values[i] == integer);
    }
    args->values[0] = (Object)new_Constant(new_SmallInt(4)); 
    assert(EvalSend((Object)array, Symbol_objectAt_, args) == integer2);
}

/* ======================================================================== */

void test_Array() {
    test_Array_ObjectAt_();
}