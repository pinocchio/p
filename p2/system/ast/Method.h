
/* ========================================================================= */

AST_Method * new_Method(unsigned int paramc, Type_Array * body);
void AST_Method_invoke(AST_Method * method, Object self,Object class, Type_Array * args);

void AST_Method_eval(Object self, Object class, Type_Array * args);
void AST_Method_eval_(Object self, Object class, Type_Array * args);

void Method_invoke(Object method, Object self, Object class, Type_Array * args);

/* ========================================================================= */

void pre_initialize_Method();
void post_initialize_Method();