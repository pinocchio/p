#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockContext.h>
#include <system/ast/Variable.h>

/* ========================================================================= */

AST_Variable new_AST_Variable_named(const wchar_t* name, uns_int scope_id)
{
    NEW_OBJECT(AST_Variable);
    result->name     = (Object)new_Type_String(name);
    result->info     = empty_AST_Info;
    result->scope_id = (Object)new_Number_SmallInt(scope_id);
    result->local_id = (Object)new_Number_SmallInt(0);
    return result;
}

AST_Variable new_AST_Variable(uns_int scope_id, uns_int local_id)
{
    NEW_OBJECT(AST_Variable);
    result->local_id = (Object)new_Number_SmallInt(local_id);
    result->scope_id = (Object)new_Number_SmallInt(scope_id);
    result->name     = Nil;
    result->info     = empty_AST_Info;
    return result;
}

/* ========================================================================= */

void AST_Variable_eval(AST_Variable self)
{
    // LOGFUN;
    Object env = (Object)current_env();

    uns_int local_id = (uns_int)unwrap_int(self->local_id);    
    uns_int scope_id = (uns_int)unwrap_int(self->scope_id);    

    if (IS_CONTEXT(env)) {
        poke_EXP(0, Runtime_BlockContext_lookup((Runtime_BlockContext)env, 
                                                local_id,
                                                scope_id));
    } else {
        // TODO
        assert0(NULL);
        // Object args[2] = { (Object)new_Number_SmallInt(self->index), self->key };
        // return AST_Send(env, SMB_at_in_, 2, args);
    }
}

void AST_Variable_assign(AST_Variable self, Object value)
{
    Object env = (Object)current_env();

    uns_int local_id = (uns_int)unwrap_int(self->local_id);    
    uns_int scope_id = (uns_int)unwrap_int(self->scope_id);    

    if (IS_CONTEXT(env)) {
        return Runtime_BlockContext_assign((Runtime_BlockContext)env,
                                           local_id, scope_id,
                                           value);
    }
    // TODO
    assert0(NULL);
}
