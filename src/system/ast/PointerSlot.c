#include <stdlib.h>
#include <stdio.h>
#include <system/ast/PointerSlot.h>

/* ========================================================================= */

DECLARE_CLASS(AST_PointerSlot);

/* ========================================================================= */

AST_PointerSlot new_AST_PointerSlot(uns_int index, const wchar_t * name) 
{
    NEW_OBJECT(AST_PointerSlot);
    result->index   = new_Type_SmallInt(index);
    result->name    = (Object)new_Type_Symbol(name);
    result->package = (Object)Nil;
    return result;
}


void pre_init_AST_PointerSlot()
{
    AST_PointerSlot_Class = new_Class_named(Type_Object_Class, L"PointerSlot",
							    CREATE_OBJECT_TAG(AST_POINTERSLOT));
    REFER_TO(AST_PointerSlot);
}

/* ========================================================================= */

// NATIVES GO HERE

/* ========================================================================= */

void post_init_AST_PointerSlot()
{

}
