
AST_Continue * new_Continue(Object target)
{
    AST_Continue * result = NEW(AST_Continue);
    HEADER(result)        = (Object)Continue_Class;
    result->target        = target;
    return result;
}


void AST_Continue_eval(AST_Continue * self)
{
    // clear the stack
    
    // insert the continuation
}

void pre_initialize_Continue()
{
    Continue_Class = new_Named_Class((Object)Object_Class, L"Continue");
}

void post_initialize_Continue()
{
    
}