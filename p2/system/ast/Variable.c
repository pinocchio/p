
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Env.h>
#include <system/ast/Variable.h>

/* ======================================================================== */

extern AST_Variable new_Variable(const wchar_t* name)
{
    AST_Variable result = NEW_t(AST_Variable);
    HEADER(result)        = (Object)Variable_Class;
    /* TODO add name */
    return result;
}

extern void pre_initialize_Variable()
{
    Variable_Class      = new_Named_Class((Object)Object_Class, L"Variable");
}

/* =========================================================================*/

extern void AST_Variable_eval(AST_Variable self)
{
    LOGFUN;
    Object env = (Object)current_env();
    
    if (HEADER(env) == (Object)Env_Class) {
        return Env_lookup(
                                  (Runtime_Env)env, self->index, self->key);
    } else {
        // TODO
        assert(NULL);
        // Object args[2] = { (Object)new_SmallInt(self->index), self->key };
        // return Send(env,SMB_at_in_, 2, args);
    }
}

extern void AST_Variable_assign(AST_Variable self, Object value)
{
    Object env = (Object)current_env();
    if (HEADER(env) == (Object)Env_Class) {
        return Env_assign((Runtime_Env)env, self->index, self->key, value);
    }
    // TODO
    assert(NULL);
}

/* =========================================================================*/

extern void post_initialize_Variable(){}

