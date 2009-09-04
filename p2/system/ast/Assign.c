
AST_Assign *
new_Assign(Object variable, Object expression)
{
    AST_Assign * result = NEW(AST_Assign);
    HEADER(result)      = (Object)Assign_Class;
    result->variable    = variable;
    result->expression  = expression;
    return result;
}

void pre_initialize_Assign()
{
    Assign_Class        = new_Named_Class((Object)Object_Class, L"Assign");
}

/* ======================================================================== */

void AST_Assign_eval(AST_Assign * self)
{
    LOGFUN;
    push_CNT(AST_Assign_assign);
    poke_EXP(1, self->variable);
    push_CNT(send_Eval);
    push_EXP(self->expression);
}

void AST_Assign_assign()
{
    LOGFUN;
    zap_CNT();
    Object value = pop_EXP();
    Object var   = peek_EXP(1);
    /* result of evaluating expression is result of assignment */
    poke_EXP(1, value);
    
    if (HEADER(var) == (Object)Variable_Class) {
        return AST_Variable_assign((AST_Variable *)var, value);
    }
    
    // TODO send assign: to self->variable.
    assert(NULL);
}

/* ======================================================================== */

void post_initialize_Assign()
{
}