
void Boolean_toString()
{
    // TODO implement
}

void Boolean_toSmallInt()
{
    // TODO implement
}

void pre_initialize_True()
{
    True_Class = new_Named_Class((Object)Boolean_Class, L"True");
    
    True = NEW(Type_Boolean);
    HEADER(True) = (Object)True_Class;
    True->value = 1;
    
    True_Const = new_Constant((Object) True);
}

AST_Constant * get_bool_const(bool value)
{
    return value ? True_Const : False_Const;
}

Type_Boolean * get_bool(bool value)
{
    return value ? True : False;
}

void pre_initialize_False() {
    False_Class = new_Named_Class((Object)Boolean_Class, L"False");
    
    False = NEW(Type_Boolean);
    HEADER(False) = (Object)False_Class;
    False->value = 0;
    
    False_Const = new_Constant((Object) False);
}

void pre_initialize_Type_Boolean()
{
    Boolean_Class = new_Named_Class((Object)Object_Class, L"Boolean");     
    pre_initialize_True();
    pre_initialize_False();
}

void post_initialize_Type_Boolean()
{
    // TODO install methods 
}

