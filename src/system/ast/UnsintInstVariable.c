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
    REFER_TO(AST_UnsintInstVariable);
}

/* ========================================================================= */


static Object AST_UnsintInstVariable_readFrom_(AST_UnsintInstVariable var, Object self)
{
    return wrap_int((uns_int)Object_instVarAt_(
						self,
						unwrap_int((Object)var->index)));
}

static void AST_UnsintInstVariable_assign_on_(AST_UnsintInstVariable var,
                                              Object value,
                                              Object self)
{
    Object_instVarAt_put_(self,
						  unwrap_int((Object)var->index),
						  (Object)(uns_int)unwrap_int(value));
}
void AST_UnsintInstVariable_eval(AST_UnsintInstVariable var)
{
    poke_EXP(0, AST_UnsintInstVariable_readFrom_(var,
                    current_env()->home_context->self));
}

void AST_UnsintInstVariable_assign(AST_UnsintInstVariable var, Object value)
{
    AST_UnsintInstVariable_assign_on_(var, value, current_env()->home_context->self);
}

/* ========================================================================= */

NATIVE1(AST_UnsintInstVariable_readFrom_)
    RETURN_FROM_NATIVE(
        AST_UnsintInstVariable_readFrom_((AST_UnsintInstVariable)self, NATIVE_ARG(0)));
}

NATIVE2(AST_UnsintInstVariable_assign_on_)
    AST_UnsintInstVariable_assign_on_((AST_UnsintInstVariable)self,
                                NATIVE_ARG(0), NATIVE_ARG(1));
    RETURN_FROM_NATIVE(self);
}

/* ========================================================================= */

void post_init_AST_UnsintInstVariable()
{
    Collection_Dictionary natives = add_plugin(L"AST.UnsintInstVariable");
    store_native(natives, SMB_assign_on_, NM_AST_UnsintInstVariable_assign_on_);
    store_native(natives, SMB_readFrom_ , NM_AST_UnsintInstVariable_readFrom_);
}
