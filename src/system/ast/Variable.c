#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockContext.h>
#include <system/ast/Variable.h>

/* ========================================================================= */

Variable new_Variable_named(const wchar_t* name, uns_int scope_id)
{
    NEW_OBJECT(Variable);
    result->name     = (Symbol)new_String(name);
    result->scope_id = (Optr)new_SmallInt(scope_id);
    result->local_id = (Optr)new_SmallInt(0);
    return result;
}

Variable new_Variable(uns_int scope_id, uns_int local_id)
{
    NEW_OBJECT(Variable);
    result->local_id = (Optr)new_SmallInt(local_id);
    result->scope_id = (Optr)new_SmallInt(scope_id);
    result->name     = (Symbol)nil;
    return result;
}

/* ========================================================================= */

void Variable_eval(Variable self)
{
    BlockContext env = current_env();

    uns_int local_id = (uns_int)unwrap_int(self->local_id);    
    uns_int scope_id = (uns_int)unwrap_int(self->scope_id);

    POKE_EXP(0, BlockContext_lookup(env, local_id, scope_id));
}

void Variable_assign(Variable self, Optr value)
{
    BlockContext env = current_env();

    uns_int local_id = (uns_int)unwrap_int(self->local_id);
    uns_int scope_id = (uns_int)unwrap_int(self->scope_id);

    return BlockContext_assign(env, local_id, scope_id, value);
}
