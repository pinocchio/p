

AST_Super *
new_Super(Object message, Type_Array * arguments)
{
    AST_Super * result = NEW(AST_Super);
    HEADER(result)     = (Object)Super_Class;
    result->message    = message;
    result->arguments  = arguments;
    return result;
}

void pre_initialize_Super()
{
    Super_Class = new_Named_Class((Object)Object_Class, L"Super");
}

/* =========================================================================*/

void ast_super_send() 
{
    LOGFUN;
    zap_CNT();
    Object class = pop_EXP();
    Object receiver = pop_EXP();
    Type_Array * args = (Type_Array *)pop_EXP();
    
    AST_Super * super   = (AST_Super *)peek_EXP(1);
    // insert the receiver at the old ast_super position
    poke_EXP(1, receiver);
    
    Class_dispatch(&super->cache, receiver, class,
                   super->message, args);
}

void push_env_class()
{
    zap_CNT();
    Object env = current_env();
    if (HEADER(env) != (Object)Env_Class) {
        assert(NULL);
    }
    push_EXP(((Runtime_Env *)env)->class);
}

void AST_Super_eval(AST_Super * super)
{
    LOGFUN;
    Type_Array * args = new_Raw_Array(super->arguments->size->value);
    // execute the method
    push_CNT(ast_super_send);
    push_CNT(Class_super);
    push_CNT(push_env_class);
    push_CNT(ast_self_eval);
    push_EXP(args);
    // evaluate the arguments
    int i;
    for (i = 0; i < super->arguments->size->value; i++) {
        push_CNT(store_argument);
        push_EXP(args);
        push_EXP(new_SmallInt(i));
        push_CNT(send_Eval);
        push_EXP(super->arguments->values[i]);
    }
}

/* =========================================================================*/

void post_initialize_Super()
{
}
