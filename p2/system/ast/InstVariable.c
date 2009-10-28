#include <stdlib.h>
#include <stdio.h>
#include <system/ast/InstVariable.h>

/* ========================================================================= */

Type_Class AST_InstVariable_Class;

/* ========================================================================= */

AST_InstVariable new_AST_InstVariable(uns_int index) 
{
    NEW_OBJECT(AST_InstVariable);
    result->index   = new_Type_SmallInt(index);
    result->name    = (Object)Nil;
    result->package = (Object)Nil;
    return result;
}

void pre_init_AST_InstVariable()
{
    AST_InstVariable_Class =
        new_Named_Class((Object)Type_Object_Class,
                        L"AST_InstVariable",
                        create_type(AST_INSTVARIABLE_SIZE, OBJECT));
}

/* ========================================================================= */

void AST_InstVariable_eval(AST_InstVariable var)
{
    LOGFUN;
    Object self = current_env()->home_context->self;

    Object tag = gettag(self);
    if (tagIsType(tag, Object)) {
    } else if (tagIsType(tag, Array)) {
        
    } else {
        assert1(NULL, "Trying to access object without instvars");
    }
}

/* ========================================================================= */

void post_init_AST_InstVariable()
{

}
