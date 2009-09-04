void test_Dictionary_ObjectAt_()
{
    Object integer         = (Object)new_SmallInt(10);
    Object integer2        = (Object)new_SmallInt(2);
    Type_Dictionary * dict = new_Dictionary();
    // fill the dictionary
    int i=0;
    for (i=0; i<100; ++i) {
        Object key = (Object)new_SmallInt(i);
        Dictionary_store_(dict, key, integer);
    }
    Dictionary_store_(dict, (Object)new_SmallInt(4), integer2);
    
    Type_Array * args      = new_Raw_Array(1);
    for (i=0; i<100; i++) {
        if (i==4) { continue; }
        Object key = (Object)new_SmallInt(i);
        args->values[0] = key;
        assert(EvalSend((Object)dict, Symbol_objectAt_, args) == integer);
        assert(Dictionary_lookup(dict, key) == integer);
    }
    args->values[0] = (Object)new_SmallInt(4); 
    assert(EvalSend((Object)dict, Symbol_objectAt_, args) == integer2);
}

void test_Dictionary_size()
{
    // TODO implement
}

void test_Dictionary_ObjectAt_put()
{
    Object result;
    Object integer         = (Object)new_SmallInt(10);
    Object integer0        = (Object)new_SmallInt(0);
    Object integer1        = (Object)new_SmallInt(1);
    Object integer2        = (Object)new_SmallInt(2);
    Type_Dictionary * dict = new_Dictionary();
    // fill the dictionary
    int i=0;
    for (i=0; i<100; ++i) {
        Object key = (Object)new_SmallInt(i);
        Dictionary_store_(dict, key, integer);
    }
    Type_Array * args  = new_Array_With(2, (Object)integer1);
    args->values[0] = integer0; 
    
    result = EvalSend((Object)dict, Symbol_objectAt_put_, args);
    assert(result == integer1);
    assert(Dictionary_lookup(dict, integer0) == integer1);
    
    args->values[0] = integer2; 
    args->values[1] = integer1;
    result = EvalSend((Object)dict, Symbol_objectAt_put_, args);
    assert(result == integer1);
    assert(Dictionary_lookup(dict, integer2) == integer1);
    // check that all the other places aren't changed
    args  = new_Array_With(1, (Object)integer1);
    for (i=0; i<100; i++) {
        if (i==0 || i==2) { continue; }
        Object key = (Object)new_SmallInt(i);
        args->values[0] = key;
        assert(EvalSend((Object)dict, Symbol_objectAt_, args) == integer);
        assert(Dictionary_lookup(dict, key) == integer);
    }
}



/* ======================================================================== */

void test_Dictionary()
{  
    test_Dictionary_ObjectAt_();
    test_Dictionary_ObjectAt_put();
}