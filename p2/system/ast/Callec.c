
AST_Callec * new_Callec()
{
    AST_Callec * result = NEW(AST_Callec);
    HEADER(result)      = (Object)Callec_Class;
    result->cont        = new_Continue((Object)result);
    return result;
}

void pre_initialize_Callec()
{
    Callec_Class = new_Named_Class((Object)Object_Class, L"Callec");
}

/* ======================================================================== */

void AST_Callec_eval(AST_Callec * self)
{
    LOGFUN;
    self->cont->EXP = _EXP_;
    self->cont->CNT = _CNT_;
    push_EXP(self->target);
    push_CNT(send_Eval);
}

/* ======================================================================== */

void post_initialize_Callec()
{
}