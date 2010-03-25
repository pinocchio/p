#include <stdlib.h>
#include <stdio.h>
#include <system/ast/InstVariable.h>

/* ========================================================================= */

DECLARE_CLASS(AST_InstVariable);

/* ========================================================================= */

AST_InstVariable new_AST_InstVariable(uns_int index, const wchar_t * name) 
{
    NEW_OBJECT(AST_InstVariable);
    result->index   = new_Type_SmallInt(index);
    result->name    = (Object)new_Type_Symbol(name);
    result->package = (Object)Nil;
    return result;
}

void fix_layout(Type_Array layout)
{
    uns_int size = layout->size;
    while(size--) {
        HEADER(layout->values[size]) = AST_InstVariable_Class;
    }
}

void pre_init_AST_InstVariable()
{
    AST_InstVariable_Class =
        new_Class_named(Type_Object_Class,
                        L"InstVariable",
                        CREATE_OBJECT_TAG(AST_INSTVARIABLE));
    fix_layout((Type_Array)AST_InstVariable_Class->layout);
    fix_layout((Type_Array)Collection_Dictionary_Class->layout);
    fix_layout((Type_Array)Metaclass->layout);
    fix_layout((Type_Array)HEADER(Type_Object_Class)->layout);
}

/* ========================================================================= */

static Object AST_InstVariable_readFrom_(AST_InstVariable var, Object self)
{
    return Object_instVarAt_(self, unwrap_int((Object)var->index));
}

static void AST_InstVariable_assign_on_(AST_InstVariable var, Object value,
                                        Object self)
{
    Object_instVarAt_put_(self,
						  unwrap_int((Object)var->index),
						  value);
}

void AST_InstVariable_eval(AST_InstVariable var)
{
    poke_EXP(0, AST_InstVariable_readFrom_(var,
                    current_env()->home_context->self));
}

void AST_InstVariable_assign(AST_InstVariable var, Object value)
{
    AST_InstVariable_assign_on_(var, value, current_env()->home_context->self);
}

/* ========================================================================= */

NATIVE1(AST_InstVariable_readFrom_)
    RETURN_FROM_NATIVE(
        AST_InstVariable_readFrom_((AST_InstVariable)self, NATIVE_ARG(0)));
}

NATIVE2(AST_InstVariable_assign_on_)
    AST_InstVariable_assign_on_((AST_InstVariable)self,
                                NATIVE_ARG(0), NATIVE_ARG(1));
    RETURN_FROM_NATIVE(self);
}

/* ========================================================================= */

void post_init_AST_InstVariable()
{
    REFER_TO(AST_InstVariable);

    Collection_Dictionary natives = add_plugin(L"AST.InstVariable");
    store_native(natives, SMB_assign_on_, NM_AST_InstVariable_assign_on_);
    store_native(natives, SMB_readFrom_ , NM_AST_InstVariable_readFrom_);
}
