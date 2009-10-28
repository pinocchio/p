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
    int index = unwrap_int((Object)var->index);

    Object tag = gettag(self);
    if (tagIsType(tag, Object)) {
        poke_EXP(0, raw_Type_Object_at((Type_Object)self, tag, index));
    } else if (tagIsType(tag, Array)) {
        poke_EXP(0, raw_Type_Array_at((Type_Array)self, tag, index));
    } else {
        assert1(NULL, "Trying to access object without instvars");
    }
}

void AST_InstVariable_assign(AST_InstVariable var, Object value)
{
    LOGFUN;
    Object self = current_env()->home_context->self;
    int index = unwrap_int((Object)var->index);

    Object tag = gettag(self);
    if (tagIsType(tag, Object)) {
        raw_Type_Object_at_put((Type_Object)self, tag, index, value);
    } else if (tagIsType(tag, Array)) {
        raw_Type_Array_at_put((Type_Array)self, tag, index, value);
    } else {
        assert1(NULL, "Trying to access object without instvars");
    }
}

/* ========================================================================= */

void post_init_AST_InstVariable()
{

}
