
void store_method(Type_Class * class, Object symbol, Object method)
{
    Type_Dictionary * dict = class->methods;
    Dictionary_store_(dict, symbol, method);
}

void store_native_method(Type_Class * class, Object symbol, native code)
{
    AST_Native_Method * native_method = new_Native_Method(code);
    store_method(class, symbol, (Object)native_method);
}