#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Slot.h>

/* ========================================================================= */

DECLARE_CLASS(AST_Slot);

/* ========================================================================= */

AST_Slot new_AST_Slot(uns_int index, const wchar_t * name) 
{
    NEW_OBJECT(AST_Slot);
    result->index   = new_Type_SmallInt(index);
    result->name    = (Object)new_Type_Symbol(name);
    result->package = (Object)Nil;
    return result;
}

void fix_layout(Type_Array layout)
{
    uns_int size = layout->size;
    while(size--) {
        HEADER(layout->values[size]) = AST_Slot_Class;
    }
}

void pre_init_AST_Slot()
{
    AST_Slot_Class =
        new_Class_named(Type_Object_Class,
                        L"Slot",
                        CREATE_OBJECT_TAG(AST_SLOT));
    fix_layout((Type_Array)AST_Slot_Class->layout);
    fix_layout((Type_Array)Collection_Dictionary_Class->layout);
    fix_layout((Type_Array)Metaclass->layout);
    fix_layout((Type_Array)HEADER(Type_Object_Class)->layout);
}

/* ========================================================================= */

static Object AST_Slot_readFrom_(AST_Slot var, Object self)
{
    return Object_instVarAt_(self, unwrap_int((Object)var->index));
}

static void AST_Slot_assign_on_(AST_Slot var, Object value,
                                        Object self)
{
    Object_instVarAt_put_(self,
						  unwrap_int((Object)var->index),
						  value);
}

void AST_Slot_eval(AST_Slot var)
{
    poke_EXP(0, AST_Slot_readFrom_(var,
                    current_env()->home_context->self));
}

void AST_Slot_assign(AST_Slot var, Object value)
{
    AST_Slot_assign_on_(var, value, current_env()->home_context->self);
}

/* ========================================================================= */

NATIVE1(AST_Slot_readFrom_)
    Object receiver = NATIVE_ARG(0); 
    RETURN_FROM_NATIVE(
        AST_Slot_readFrom_((AST_Slot)self, receiver));
}

NATIVE2(AST_Slot_assign_on_)
    Object value = NATIVE_ARG(0);
    Object o = NATIVE_ARG(1);
    AST_Slot_assign_on_((AST_Slot)self,
                                value, o);
    RETURN_FROM_NATIVE(value);
}

/* ========================================================================= */

void post_init_AST_Slot()
{
    REFER_TO(AST_Slot);

    Collection_Dictionary natives = add_plugin(L"AST.Slot");
    store_native(natives, SMB_assign_on_, NM_AST_Slot_assign_on_);
    store_native(natives, SMB_readFrom_ , NM_AST_Slot_readFrom_);
}
