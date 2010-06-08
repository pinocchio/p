#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Method.h>

/* ========================================================================= */

Method new_Method(uns_int paramCount,
                          uns_int localCount,
                          uns_int statementCount)
{
    NEW_ARRAY_OBJECT(Method, Optr[statementCount]);
    result->params = new_Array_raw(paramCount);
    result->locals = new_Array_raw(localCount);
    init_raw_variable_array(result->params, 0, paramCount, 0);
    init_raw_variable_array(result->locals, 0, localCount, paramCount);
    result->info   = empty_Info;
    result->size   = statementCount;
    result->package = nil;
    result->unused = nil;
    return result;
}

Method new_Method_withAll(uns_int paramCount,
                                  uns_int localCount,
                                  uns_int statementCount, ...)
{
    Method result = new_Method(paramCount, localCount, statementCount);
    COPY_ARGS(statementCount, result->body);
    return result;
}

Method new_Method_with(Array params,
                               Array locals,
                               Array annotations,
                               uns_int statementCount, ...)
{
    NEW_ARRAY_OBJECT(Method, Optr[statementCount]);
    result->params = params;
    result->locals = locals;
    result->annotations = annotations;
    init_variable_array(result->params, 0);
    init_variable_array(result->locals, result->params->size);
    result->info   = empty_Info;
    result->size   = statementCount;
    result->package = nil;
    result->unused = nil;
    COPY_ARGS(statementCount, result->body);

    return result;
}

/* ========================================================================= */

static void CNT_Method_continue()
{
    Runtime_MethodContext env = (Runtime_MethodContext)current_env();
    Method code = env->closure->code;
    uns_int pc = (uns_int)peek_EXP(1);
    poke_EXP(0, code->body[pc]);
    poke_EXP(1, ++pc);
    
    if (code->size <= pc) {
        poke_CNT(tail_send_Eval); 
    } else { 
        push_CNT(send_Eval);
    }

}

static void start_eval(Method method)
{
    if (1 < method->size) {
        push_CNT(Method_continue);
        push_CNT(send_Eval);
    } else {
        push_CNT(tail_send_Eval);
    }
    
    poke_EXP(0, 1); // pc
    push_EXP(method->body[0]);
}

/* ========================================================================= */

void Method_invoke(Runtime_MethodClosure closure, Method method,
                           Optr self, uns_int argc)
{
    assert(argc == method->params->size,
        printf("Argument count mismatch. Expected: %"F_I"u given: %"F_I"u\n",
                    method->params->size, argc););
    
    if (method->size == 0) { 
        RETURN_FROM_NATIVE(self);
        return;
    }
    
    set_env((Optr)new_Runtime_MethodContext(closure, self));
    activation_from_native(argc);

    start_eval(method);
}
