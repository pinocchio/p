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

void AST_InstVariable_eval(AST_InstVariable var)
{
    // LOGFUN;
    poke_EXP(0, Object_instVarAt_(current_env()->home_context->self,
                                  unwrap_int((Object)var->index)));
}

void AST_InstVariable_assign(AST_InstVariable var, Object value)
{
    // LOGFUN;
	Object_instVarAt_put_(current_env()->home_context->self,
						  unwrap_int((Object)var->index),
						  value);
}

/* ========================================================================= */

void post_init_AST_InstVariable()
{
    REFER_TO(AST_InstVariable);
}
