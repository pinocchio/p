
void pre_initialize_Self()
{
    Self_Class = new_Named_Class((Object)Object_Class, L"Self");
    Self       = (Object) NEW(AST_Self);
    HEADER(Self) = (Object) Self_Class;
}

/* =========================================================================*/

void AST_Self_eval()
{
    LOGFUN;
    Object env = current_env();
    if (HEADER(env) != (Object)Env_Class) {
        assert(NULL);
    }
    poke_EXP(1, ((Runtime_Env *)env)->self);
}

void ast_self_eval()
{
    LOGFUN;
    zap_CNT();
    // Push to allow poke in Self_eval
    push_EXP(Nil);
    AST_Self_eval();
}

/* =========================================================================*/

void post_initialize_Self()
{
}

