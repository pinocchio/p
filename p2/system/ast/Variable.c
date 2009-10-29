
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockContext.h>
#include <system/ast/Variable.h>

/* ========================================================================= */

Type_Class AST_Variable_Class;

/* ========================================================================= */

AST_Variable new_AST_Variable_named(const wchar_t* name)
{
    NEW_OBJECT(AST_Variable);
    result->name = (Object)new_Type_String(name);
    result->info = empty_AST_Info;
    return result;
}

AST_Variable new_AST_Variable(Object key, uns_int index)
{
    NEW_OBJECT(AST_Variable);
    result->index   = index;
    result->key     = key;
    result->name    = Nil;
    result->info    = empty_AST_Info;
    return result;
}

void pre_init_AST_Variable()
{
    AST_Variable_Class = new_Named_Class((Object)Type_Object_Class,
                                         L"AST_Variable",
                                         create_object_tag(AST_VARIABLE));
}

/* ========================================================================= */

void AST_Variable_eval(AST_Variable self)
{
    LOGFUN;
    Object env = (Object)current_env();
    
    if (IS_CONTEXT(env)) {
            poke_EXP(0, Runtime_BlockContext_lookup((Runtime_BlockContext)env, 
                                                self->index, self->key));
    } else {
        // TODO
        assert0(NULL);
        // Object args[2] = { (Object)new_Type_SmallInt(self->index), self->key };
        // return AST_Send(env, SMB_at_in_, 2, args);
    }
}

void AST_Variable_assign(AST_Variable self, Object value)
{
    Object env = (Object)current_env();
    if (HEADER(env) == (Object)Runtime_BlockContext_Class) {
        return Runtime_BlockContext_assign((Runtime_BlockContext)env, self->index, self->key, value);
    }
    // TODO
    assert0(NULL);
}

/* ========================================================================= */

void post_init_AST_Variable(){}

