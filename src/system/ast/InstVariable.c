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

void pre_init_AST_InstVariable()
{
    AST_InstVariable_Class =
        new_Class_named(Type_Object_Class,
                        L"InstVariable",
                        CREATE_OBJECT_TAG(AST_INSTVARIABLE));
}

/* ========================================================================= */

void AST_InstVariable_eval(AST_InstVariable var)
{
    // LOGFUN;
    Object self = current_env()->home_context->self;
    int index = unwrap_int((Object)var->index);

    Object tag = GETTAG(self);
    if (TAG_IS_LAYOUT(tag, Object)) {
        poke_EXP(0, raw_Type_Object_at((Type_Object)self, tag, index));
    } else if (TAG_IS_LAYOUT(tag, Array)) {
        poke_EXP(0, raw_Type_Array_instAt((Type_Array)self, tag, index));
    } else {
        assert1(NULL, "Trying to access object without instvars");
    }
}

void AST_InstVariable_assign(AST_InstVariable var, Object value)
{
    // LOGFUN;
    Object self = current_env()->home_context->self;
    int index = unwrap_int((Object)var->index);

    Object tag = GETTAG(self);
    if (TAG_IS_LAYOUT(tag, Object)) {
        raw_Type_Object_at_put((Type_Object)self, tag, index, value);
    } else if (TAG_IS_LAYOUT(tag, Array)) {
        raw_Type_Array_instAt_put((Type_Array)self, tag, index, value);
    } else {
        assert1(NULL, "Trying to access object without instvars");
    }
}

/* ========================================================================= */

void post_init_AST_InstVariable()
{
    REFER_TO(AST_InstVariable);
}
