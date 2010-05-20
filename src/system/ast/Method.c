#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Method.h>

/* ========================================================================= */

DECLARE_CLASS(AST_Method);

/* ========================================================================= */

void pre_init_AST_Method()
{
    AST_Method_Class = new_Class(Type_Object_Class);
}

/* ========================================================================= */

AST_Method new_AST_Method(uns_int paramCount,
                          uns_int localCount,
                          uns_int statementCount)
{
    NEW_ARRAY_OBJECT(AST_Method, Object[statementCount]);
    result->params = new_Collection_Array_raw(paramCount);
    result->locals = new_Collection_Array_raw(localCount);
    init_raw_variable_array(result->params, 0, paramCount, 0);
    init_raw_variable_array(result->locals, 0, localCount, paramCount);
    result->info   = empty_AST_Info;
    result->size   = statementCount;
    return result;
}

AST_Method new_AST_Method_withAll(uns_int paramCount,
                                  uns_int localCount,
                                  uns_int statementCount, ...)
{
    AST_Method result = new_AST_Method(paramCount, localCount, statementCount);
    COPY_ARGS(statementCount, result->body);
    return result;
}

AST_Method new_AST_Method_with(Collection_Array params,
                               Collection_Array locals,
                               Collection_Array annotations,
                               uns_int statementCount, ...)
{
    NEW_ARRAY_OBJECT(AST_Method, Object[statementCount]);
    result->params = params;
    result->locals = locals;
    result->annotations = annotations;
    init_variable_array(result->params, 0);
    init_variable_array(result->locals, result->params->size);
    result->info   = empty_AST_Info;
    result->size   = statementCount;
    COPY_ARGS(statementCount, result->body);

    return result;
}

/* ========================================================================= */

static void CNT_AST_Method_continue()
{
    Runtime_MethodContext env = (Runtime_MethodContext)current_env();
    AST_Method code = env->closure->code;
    uns_int pc = (uns_int)peek_EXP(1);
    poke_EXP(0, code->body[pc]);
    poke_EXP(1, ++pc);
    
    if (code->size <= pc) {
        poke_CNT(tail_send_Eval); 
    } else { 
        push_CNT(send_Eval);
    }

}

static void start_eval(AST_Method method)
{
    if (1 < method->size) {
        push_CNT(AST_Method_continue);
        push_CNT(send_Eval);
    } else {
        push_CNT(tail_send_Eval);
    }
    
    poke_EXP(0, 1); // pc
    push_EXP(method->body[0]);
}

/* ========================================================================= */

void AST_Method_invoke(Runtime_MethodClosure closure, AST_Method method,
                           Object self, uns_int argc)
{
    assert(argc == method->params->size,
        printf("Argument count mismatch. Expected: %"F_I"u given: %"F_I"u\n",
                    method->params->size, argc););
    
    if (method->size == 0) { 
        RETURN_FROM_NATIVE(self);
        return;
    }
    
    set_env((Object)new_Runtime_MethodContext(closure, self));
    activation_from_native(argc);

    start_eval(method);
}

/* ========================================================================= */

void post_init_AST_Method()
{
}
