#include <scheme/behaviour.h>
#include <system.h>

// Function bootstrapping
                    
void inline init_args(list_object exp,
                      array_object arguments,
                      int toskip) {
    int todo = array_size(arguments);
    int i;                 
    for (i = 0; i < todo; i++) {
        ast_var_object variable = array_at(arguments, i).ast_var;
        variable->index      = make_smallint(i + toskip);
        variable->scope      = (object) exp;
    }                      
}                          
       
void inline add_eval_args_code(list_object exp,
                               array_object arguments,
                               int toskip,
                               int todo) {
    call_object ast_call1(parent_env, woodstock->ast_capture, PARENT);
    call_object arg_eval;
    // var1 = (var1 eval: (env parent))
    // ...  ...  ...       
    // varN = (varN eval: (env parent))
    int i;                 
    for (i = toskip; i < todo; i++) {
        ast_var_object variable = array_at(arguments, i).ast_var;
        ast_call2(arg_eval, variable, EVAL_, parent_env);
        list_at_put(exp, i - toskip,
            (object)make_ast_assign((object)variable, (object)arg_eval));
    }                      
}                          
                           
void inline add_switch_scope_code(list_object exp, int position) {
    ast_var_object receiver_var = make_ast_var(L"switchvar");
    receiver_var->scope = (object)exp;
                           
    call_object ast_call1(self_scope, receiver_var, SCOPE);
    call_object ast_call2(switch_env, woodstock->ast_capture,
                        PARENT_, self_scope)
                           
    list_at_put(exp, position, (object)switch_env);
}                          
                           
object scoped_for(object exp, object size) {
    // TODO: optimization: don't wrap scoped in a const.
    // Just don't eval the receiver.
    constant_object constant = make_constant(woodstock->scoped_class);
    call_object ast_call3(ast_call, constant, NEW_SIZE_,
                                (object)make_constant(exp),
                                (object)make_constant(size));
    ast_call1(ast_call, ast_call, SHIFT);
    return (object)ast_call;
}


// Function which doesn't switch to static scope on eval automatically.
object inline make_dyn_func(array_object arguments, object body) {
    int argsize = array_size(arguments);
    // Eval args, eval body
    list_object exp = make_list(argsize + 1); 

    init_args(exp, arguments, 1); // skip receiver
    add_eval_args_code(exp, arguments, 0, argsize);
    list_at_put(exp, argsize, body);

    return scoped_for((object)exp,
                       (object)make_smallint(array_size(arguments)));
}

object inline make_func(array_object arguments, object body) {
    // Eval args, switch context, eval body
    list_object exp = make_list(2);

    init_args(exp, arguments, 1); // skip receiver;
    add_switch_scope_code(exp, 0);
    list_at_put(exp, 1, body);

    constant_object constant = make_constant(woodstock->scoped_class);
    call_object ast_call3(ast_call, constant, NEW_SIZE_,
                                (object)make_constant((object)exp),
                                (object)make_constant(
                                    (object)make_smallint(
                                        array_size(arguments))));
    ast_call1(ast_call, ast_call, LAMBDASHIFT);
    return (object)ast_call;
}

// Function which doesn't evaluate its arguments
object inline make_dispatch(array_object arguments, object body) {
    // Eval args, switch context, eval body
    list_object exp = make_list(2);

    init_args(exp, arguments, 1);
    add_switch_scope_code(exp, 0);
    list_at_put(exp, 1, body);

    return scoped_for((object)exp,
                       (object)make_smallint(array_size(arguments)));
}

object inline make_m(array_object arguments, object body) {
    int argsize = array_size(arguments);
    // Eval args (-1: skip self), switch context, eval body
    list_object exp = make_list(argsize);

    
    init_args(exp, arguments, 1);
    add_eval_args_code(exp, arguments, 2, argsize); // skip self
    add_switch_scope_code(exp, argsize - 2);
    list_at_put(exp, argsize - 1, body);

    constant_object constant = make_constant(woodstock->scoped_class);
    call_object ast_call3(ast_call, constant, NEW_SIZE_,
                            (object)make_constant((object)exp),
                            (object)make_constant((object)make_smallint(array_size(arguments))));
    return (object)ast_call;
}
