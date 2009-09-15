

#define SYMBOL_TEST_SETUP \
Type_Symbol * symbol = new_Symbol(L"symbol"); \
Object result;

/* ======================================================================== */

void test_Symbol_equals_()
{
    Type_Symbol * symbol = new_Symbol(L"symbol"); 
    Type_Symbol * symbol2 = new_Symbol(L"symbol");
    // Symbols should use a symbol table
    // TODO create SymbolTable
    //ASSERT_EQUALS(symbol,  symbol2);
    //ASSERT_EQUALS(symbol2, symbol);
}

void test_Symbol_size()
{
    SYMBOL_TEST_SETUP;
    result = EvalSend0((Object)symbol, Symbol_size);
    ASSERT_TYPE(result, SmallInt_Class);
    assert(((Type_SmallInt *)result)->value == 6);
    
}

void test_Symbol_asString()
{
    SYMBOL_TEST_SETUP;
    result = EvalSend0((Object)symbol, Symbol_asString);
    ASSERT_TYPE(result, String_Class);
}

void test_Symbol_concat()
{
    //SYMBOL_TEST_SETUP;
}

void test_Symbol_indexOf()
{
    //SYMBOL_TEST_SETUP;
}

void test_Symbol_lastIndexOf()
{
    //SYMBOL_TEST_SETUP;
}

void test_Symbol_objectAt_()
{
    SYMBOL_TEST_SETUP;
    int i;
    for (i= 0; i<symbol->size->value; ++i) {
        result = EvalSend1((Object)symbol, Symbol_objectAt_, (Object)new_SmallInt(i));
        ASSERT_TYPE(result, Character_Class);
        assert(((Type_Character *) result)->value == symbol->value[i]);
    }
}

void test_Symbol_asArray()
{
    SYMBOL_TEST_SETUP;
    result = EvalSend0((Object)symbol, Symbol_asArray);
    ASSERT_TYPE(result, Array_Class);
    int i;
    Object item;
    for (i= 0; i<symbol->size->value; ++i) {
        item = ((Type_Array *) result)->values[i];
        ASSERT_TYPE(item, Character_Class);
        assert(((Type_Character *) item)->value == symbol->value[i]);
    }
}

/* ======================================================================== */

void test_Symbol()
{
    test_Symbol_equals_();
    test_Symbol_size();
    test_Symbol_asString();
    test_Symbol_objectAt_();
    test_Symbol_asArray();
}
