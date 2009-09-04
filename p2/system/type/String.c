
Type_String *
new_String(const wchar_t * str)
{
    Type_String * string = (Type_String *) new_Symbol(str);
    HEADER(string)       = (Object)String_Class;
    return string;
}

void pre_initialize_String()
{
    String_Class = new_Named_Class((Object)Symbol_Class, L"String");
}

/* =========================================================================*/

void String_sub() 
{
    // TODO implement
}

void String_concat()
{
    // TODO implement
}

void String_toSymbol()
{
    // TODO implement
}

/* =========================================================================*/

void post_initialize_String()
{
    // TODO implement
}

