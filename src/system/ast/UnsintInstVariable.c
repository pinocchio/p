#include <stdlib.h>
#include <stdio.h>
#include <system/ast/UnsintInstVariable.h>

/* ========================================================================= */

DECLARE_CLASS(AST_UnsintInstVariable);

/* ========================================================================= */

AST_UnsintInstVariable new_AST_UnsintInstVariable(uns_int index, const wchar_t * name) 
{
    NEW_OBJECT(AST_UnsintInstVariable);
    result->index   = new_Type_SmallInt(index);
    result->name    = (Object)new_Type_Symbol(name);
    result->package = (Object)Nil;
    return result;
}

void pre_init_AST_UnsintInstVariable()
{
    AST_UnsintInstVariable_Class =
        new_Class_named(Type_Object_Class,
                        L"UnsintInstVariable",
                        CREATE_OBJECT_TAG(AST_UNSINTINSTVARIABLE));
}

/* ========================================================================= */

void AST_UnsintInstVariable_eval(AST_UnsintInstVariable var)
{
    // LOGFUN;
    poke_EXP(0, wrap_int(Object_instVarAt_(current_env()->home_context->self,
                                  unwrap_int((Object)var->index))));
}

void AST_UnsintInstVariable_assign(AST_UnsintInstVariable var, Object value)
{
    // LOGFUN;
	Object_instVarAt_put_(current_env()->home_context->self,
						  unwrap_int((Object)var->index),
						  unwrap_int(value));
}

/* ========================================================================= */

void post_init_AST_UnsintInstVariable()
{
    REFER_TO(AST_UnsintInstVariable);
}
