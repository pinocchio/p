

AST_Constant *
new_Constant(Object constant)
{
    AST_Constant * result = NEW(AST_Constant);
    HEADER(result)        = (Object)Constant_Class;
    result->constant      = constant;
    return result;
}


void AST_Constant_eval(AST_Constant * self)
{
    poke_EXP(1, self->constant);
}

void pre_initialize_Constant()
{
    Constant_Class = new_Named_Class((Object)Object_Class, L"Constant");
}

void post_initialize_Constant(){}

