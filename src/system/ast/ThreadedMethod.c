#include <system/ast/ThreadedMethod.h>
#include <stdarg.h>

/* ========================================================================= */

Collection_Array threaded_code()
{
    return (Collection_Array)peekn_CNT(2);
}

void set_pc(int pc)
{
    poken_CNT_raw(1, (uns_int)pc);
}

void inc_pc(int pc)
{
    set_pc(pc + 1);
}

void branch(int pc, int condition)
{
    set_pc(pc + 1 + condition);
}

void t_branch_gt(int pc)
{
    int left = unwrap_int(pop_EXP());
    int right = unwrap_int(pop_EXP());
    branch(pc, left > right);
}

void t_push_self(int pc)
{
    inc_pc(pc);
    claim_EXP(1);
    AST_Self_eval();
}

void jump(int pc, int offset)
{
    set_pc(pc + offset);
}

void t_jump_1(int pc)
{
    jump(pc, 2);
}

void t_return(int pc)
{
    zapn_CNT(3);
}

void t_return_1(int pc)
{
    push_EXP(new_Number_SmallInt(1));
    t_return(pc);
}

void t_push_1(int pc)
{
    inc_pc(pc);
    push_EXP(new_Number_SmallInt(1));
}

void t_minus(int pc)
{
    inc_pc(pc);
    int right = unwrap_int(pop_EXP());
    int left = unwrap_int(peek_EXP(0));
    poke_EXP(0, new_Number_SmallInt(left - right));
}

void t_times(int pc)
{
    inc_pc(pc);
    int right = unwrap_int(pop_EXP());
    int left = unwrap_int(peek_EXP(0));
    poke_EXP(0, new_Number_SmallInt(left * right));
}

void t_send_0(int pc)
{
    inc_pc(pc);
    Object self = peek_EXP(0);
    Type_Class_dispatch(self, HEADER(self), 0);
}

void t_push_next(int pc)
{
    Object v = threaded_code()->values[pc + 1];
    set_pc(pc + 2);
    push_EXP(v);
}

#define THREADED(name) RAW_THREADED(&t_##name);
#define RAW_THREADED(o) code->values[pc++] = (Object)(o);

Collection_Array create_fac_code()
{
    Collection_Array code = new_Collection_Array_raw(14);
    int pc = 0;
    THREADED(push_self);
    THREADED(push_1);
    THREADED(branch_gt);
    THREADED(jump_1);
    THREADED(return_1);
    THREADED(push_self);
    THREADED(push_next);
    RAW_THREADED(new_AST_Send_raw(Nil, (Object)new_Symbol(L"fac"), 0));
    THREADED(push_self);
    THREADED(push_1);
    THREADED(minus);
    THREADED(send_0);
    THREADED(times);
    THREADED(return);
    return code;
}

AST_ThreadedMethod new_AST_ThreadedMethod_with(Collection_Array params,
                               Collection_Array locals,
                               Collection_Array annotations,
                               uns_int statementCount, ...)
{
    NEW_ARRAY_OBJECT(AST_ThreadedMethod, Object[statementCount]);
    result->params = params;
    result->locals = locals;
    result->annotations = annotations;
    init_variable_array(result->params, 0);
    init_variable_array(result->locals, result->params->size);
    result->info   = empty_AST_Info;
    result->size   = statementCount;
    result->code = NULL;
    COPY_ARGS(statementCount, result->body);

    result->code = create_fac_code();

    return result;
}

void AST_ThreadedMethod_invoke(Runtime_MethodClosure closure,
                               AST_ThreadedMethod method,
                               Object self, uns_int argc)
{
    if (method->code == (Collection_Array)Nil) {
        return AST_Method_invoke(closure, (AST_Method)method, self, argc);
    }

    assert(argc == method->params->size,
        printf("Argument count mismatch. Expected: %"F_I"u given: %"F_I"u\n",
                    method->params->size, argc););
    
    if (method->size == 0) { 
        RETURN_FROM_NATIVE(self);
        return;
    }
    
    set_env((Object)new_Runtime_MethodContext(closure, self));
    activation_from_native(argc);

	push_CNT_raw(method->code);
	push_CNT_raw(0);
	push_CNT(eval_threaded);
    zap_EXP();
    CNT_eval_threaded();
}

/* ========================================================================= */

void CNT_eval_threaded()
{
    int pc                = (int)(uns_int)peekn_CNT(1);
    Collection_Array code = (Collection_Array)peekn_CNT(2);
    ((threaded)code->values[pc])(pc);
}

void post_init_AST_ThreadedMethod()
{
}
