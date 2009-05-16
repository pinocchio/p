#include <scheme/system.h>
#include <system/ivar.h>
#include <system.h>

// Function bootstrapping

// Function which doesn't switch to static scope on eval automatically.
object inline make_dyn_func(array_object arguments, object body) {

    iconst_object iconst = make_iconst(fools_system->iscoped);

    int argsize = number_value(array_size(arguments));
    // Eval args, eval body
    ilist_object exp = make_ilist(argsize + 1); 

    icall_object parent_env = make_icall(fools_system->icapture, 1);
    set_callmsg(parent_env, ENV_PARENT);

    icall_object arg_eval;
    // var1 = (var1 eval: (env parent))
    // ...  ...  ...
    // varN = (varN eval: (env parent))
    int i;
    for (i = 0; i < argsize; i++) {
        ivar_object variable = array_at(arguments, i).ivar;
        variable->index = make_number(i + 1); // skip receiver
        variable->scope = (object)exp;

        arg_eval = make_icall((object)variable, 2);
        set_callmsg(arg_eval, PRE_EVAL_ENV);
        set_callarg(arg_eval, 1, (object)parent_env);
        ilist_at_put(exp, i,
            (object)make_iassign(
                variable,
                (object)arg_eval));
    }
    
    ilist_at_put(exp, argsize, body);

    icall_object icall = make_icall((object)iconst, 3);
    set_callmsg(icall, ENV_NEW_SIZE);
    set_callarg(icall, 1, (object)exp);
    set_callarg(icall, 2, (object)array_size(arguments));

    return (object)icall;
}

object inline make_func(array_object arguments, object body) {

    iconst_object iconst = make_iconst(fools_system->iscoped);

    int argsize = number_value(array_size(arguments));
    // Eval args, switch context, eval body
    ilist_object exp = make_ilist(argsize + 2);

    icall_object parent_env = make_icall(fools_system->icapture, 2);
    set_callmsg(parent_env, ENV_PARENT);

    icall_object arg_eval;
    // var1 = (var1 eval: (env parent))
    // ...  ...  ...
    // varN = (varN eval: (env parent))
    int i;
    for (i = 0; i < argsize; i++) {
        ivar_object variable = array_at(arguments, i).ivar;
        variable->index = make_number(i + 1); // skip receiver
        variable->scope = (object)exp;

        arg_eval = make_icall((object)variable, 2);
        set_callmsg(arg_eval, PRE_EVAL_ENV);
        set_callarg(arg_eval, 1, (object)parent_env);
        ilist_at_put(exp, i,
            (object)make_iassign(
                variable,
                (object)arg_eval));
    }
    
    ivar_object receiver_var = make_ivar();
    receiver_var->scope = (object)exp;

    icall_object self_scope = make_icall((object)receiver_var, 2);
    set_callmsg(self_scope, SCOPE_IN_ENV);

    icall_object switch_env = make_icall(fools_system->icapture, 2);
    set_callmsg(switch_env, ENV_SET_PARENT);
    set_callarg(switch_env, 1, (object)self_scope);
        
    ilist_at_put(exp, argsize, (object)switch_env);
    ilist_at_put(exp, argsize + 1, body);

    icall_object icall = make_icall((object)iconst, 3);
    set_callmsg(icall, ENV_NEW_SIZE);
    set_callarg(icall, 1, (object)exp);
    set_callarg(icall, 2, (object)array_size(arguments));

    return (object)icall;
}
