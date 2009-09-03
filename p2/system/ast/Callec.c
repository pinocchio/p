
AST_Callec * new_Callec()
{
    AST_Callec * result = NEW(AST_Callec);
    HEADER(result)      = (Object)Callec_Class;
    result->cont        = new_Continue((Object)result);
    return result;
}

void AST_Callec_eval(AST_Callec * self)
{
    push_EXP(self->send);
    push_CNT(send_Eval);
}

void pre_initialize_Callec()
{
    Callec_Class = new_Named_Class((Object)Object_Class, L"Callec");
}

void post_initialize_Callec()
{
}