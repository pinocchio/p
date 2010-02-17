
#include <stdio.h>
#include <stdlib.h>
#include <system/type/Nil.h>

/* ========================================================================= */

DECLARE_CLASS(Type_Nil);
Type_Class Type_Nil_Class;
Object Nil;
AST_Constant Nil_Const;

/* ========================================================================= */

void pre_init_Type_Nil() 
{
    Nil = (Object) NEW_t(Type_Nil);
    REFER_TO(Type_Nil);
}

/* ========================================================================= */

/* ========================================================================= */

void post_init_Type_Nil()
{
    Type_Nil_Class = new_Class_named((Object)Type_Object_Class,
                                     L"Nil",
                                     create_layout(0, OBJECT));
    HEADER(Nil) = (Object)Type_Nil_Class;
    Nil_Const = new_AST_Constant(Nil);
}
