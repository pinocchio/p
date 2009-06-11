#include <scheme/system.h>
#include <system.h>

// Function bootstrapping

void inline add_eval_args_code(ilist_object exp,
                               array_object arguments,
                               int toskip,
                               int todo) {
    icall_object icall1(parent_env, fools_system->icapture, PARENT);

    icall_object arg_eval;
    // var1 = (var1 eval: (env parent))
    // ...  ...  ...
    // varN = (varN eval: (env parent))
    int i;
    for (i = toskip; i < todo; i++) {
        ivar_object variable = array_at(arguments, i).ivar;
        icall2(arg_eval, variable, PRE_EVAL_ENV, parent_env);
        ilist_at_put(exp, i - toskip,
            (object)make_iassign((object)variable, (object)arg_eval));
    }
}

void inline init_args(ilist_object exp,
                               array_object arguments,
                               int toskip) {
    int todo = array_size(arguments);
    int i;
    for (i = 0; i < todo; i++) {
        ivar_object variable = array_at(arguments, i).ivar;
        variable->index = make_number(i + toskip);
        variable->scope = (object)exp;
    }
}

void inline add_switch_scope_code(ilist_object exp, int position) {
    ivar_object receiver_var = make_ivar(L"switchvar");
    receiver_var->scope = (object)exp;

    icall_object icall1(self_scope, receiver_var, SCOPE);
    icall_object icall2(switch_env, fools_system->icapture,
                        SET_PARENT, self_scope)

    ilist_at_put(exp, position, (object)switch_env);
}

object iscoped_for(object exp, object size) {
    // TODO: optimization: don't wrap iscoped in a const.
    // Just don't eval the receiver.
    iconst_object iconst = make_iconst(fools_system->iscoped_class);
    icall_object icall3(icall, iconst, NEW_SIZE, exp, size);
    icall1(icall, icall, SHIFT);
    return (object)icall;
}


// Function which doesn't switch to static scope on eval automatically.
object inline make_dyn_func(array_object arguments, object body) {
    int argsize = array_size(arguments);
    // Eval args, eval body
    ilist_object exp = make_ilist(argsize + 1); 

    init_args(exp, arguments, 1); // skip receiver
    add_eval_args_code(exp, arguments, 0, argsize);
    ilist_at_put(exp, argsize, body);

    return iscoped_for((object)exp,
                       (object)make_number(array_size(arguments)));
}

object inline make_func(array_object arguments, object body) {
    int argsize = array_size(arguments);
    // Eval args, switch context, eval body
    ilist_object exp = make_ilist(argsize + 2);

    init_args(exp, arguments, 1); // skip receiver;
    add_eval_args_code(exp, arguments, 0, argsize);
    add_switch_scope_code(exp, argsize);
    ilist_at_put(exp, argsize + 1, body);

    return iscoped_for((object)exp,
                       (object)make_number(array_size(arguments)));
}

// Function which doesn't evaluate its arguments
object inline make_dispatch(array_object arguments, object body) {
    // Eval args, switch context, eval body
    ilist_object exp = make_ilist(2);

    init_args(exp, arguments, 1);
    add_switch_scope_code(exp, 0);
    ilist_at_put(exp, 1, body);

    return iscoped_for((object)exp,
                       (object)make_number(array_size(arguments)));
}

object inline make_m(array_object arguments, object body) {
    int argsize = array_size(arguments);
    // Eval args (-1: skip self), switch context, eval body
    ilist_object exp = make_ilist(argsize + 1);

    
    init_args(exp, arguments, 1);
    add_eval_args_code(exp, arguments, 1, argsize); // skip self
    add_switch_scope_code(exp, argsize - 1);
    ilist_at_put(exp, argsize, body);

    iconst_object iconst = make_iconst(fools_system->iscoped_class);
    icall_object icall3(icall, iconst, NEW_SIZE, (object)exp,
                        (object)make_number(array_size(arguments)));
    return (object)icall;
}
