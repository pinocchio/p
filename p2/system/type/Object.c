
NATIVE(NM_Object_equals)
{
    ASSERT_ARG_SIZE(1);
    push_EXP(get_bool(self == args->values[0]));
}

wchar_t * Object_classname(Object self) 
{
    return ((Type_String *)((Type_Class *)HEADER(self))->name)->value;
}

void pre_initialize_Object() 
{
    // explicitely use new_Class not new_Named_Class! to avoid early use
    // of symbols.
    Class_Class         = new_Class(Null);
    HEADER(Class_Class) = (Object)Class_Class;
    
    Object_Class        = new_Class(Null);
}

void post_initialize_Object()
{
    // put the names here, now after the Symbols_Class is initialized
    Class_Class->name  = new_String(L"Class");
    Object_Class->name = new_String(L"Object");
    
    store_native_method((Type_Class *)Object_Class, Symbol_equals_, NM_Object_equals);
    
    assert(Dictionary_lookup(Object_Class->methods, Symbol_equals_));
    assert(HEADER((AST_Native_Method*)Dictionary_lookup(Object_Class->methods, Symbol_equals_)) == (Object)Native_Method_Class);
}