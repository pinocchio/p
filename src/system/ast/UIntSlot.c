#include <stdlib.h>
#include <stdio.h>
#include <system/ast/UIntSlot.h>

/* ========================================================================= */

DECLARE_CLASS(AST_UIntSlot);

/* ========================================================================= */

AST_UIntSlot new_AST_UIntSlot(uns_int index, const wchar_t * name) 
{
    NEW_OBJECT(AST_UIntSlot);
    result->index   = new_Type_SmallInt(index);
    result->name    = (Object)new_Type_Symbol(name);
    result->package = (Object)Nil;
    return result;
}

void pre_init_AST_UIntSlot()
{
    AST_UIntSlot_Class =
        new_Class_named(Type_Object_Class,
                        L"UIntSlot",
                        CREATE_OBJECT_TAG(AST_UNSINTINSTVARIABLE));
    REFER_TO(AST_UIntSlot);
}

/* ========================================================================= */


static Object AST_UIntSlot_readFrom_(AST_UIntSlot var, Object self)
{
    return wrap_int((uns_int)Object_instVarAt_(
						self,
						unwrap_int((Object)var->index)));
}

static void AST_UIntSlot_assign_on_(AST_UIntSlot var,
                                              Object value,
                                              Object self)
{
    Object_instVarAt_put_(self,
						  unwrap_int((Object)var->index),
						  (Object)(uns_int)unwrap_int(value));
}
void AST_UIntSlot_eval(AST_UIntSlot var)
{
    poke_EXP(0, AST_UIntSlot_readFrom_(var,
                    current_env()->home_context->self));
}

void AST_UIntSlot_assign(AST_UIntSlot var, Object value)
{
    AST_UIntSlot_assign_on_(var, value, current_env()->home_context->self);
}

/* ========================================================================= */

NATIVE1(AST_UIntSlot_readFrom_)
    Object receiver = NATIVE_ARG(0);
    RETURN_FROM_NATIVE(
        AST_UIntSlot_readFrom_((AST_UIntSlot)self,
                                         receiver));
}

NATIVE2(AST_UIntSlot_assign_on_)
    Object value = NATIVE_ARG(0);
    Object o = NATIVE_ARG(1);
    AST_UIntSlot_assign_on_((AST_UIntSlot)self,
                                value, o);
    RETURN_FROM_NATIVE(value);
}

/* ========================================================================= */

void post_init_AST_UIntSlot()
{
    Collection_Dictionary natives = add_plugin(L"AST.UIntSlot");
    store_native(natives, SMB_assign_on_, NM_AST_UIntSlot_assign_on_);
    store_native(natives, SMB_readFrom_ , NM_AST_UIntSlot_readFrom_);
}
