#include <scheme/system.h>
#include <system/ivar.h>
#include <system.h>

// Function bootstrapping

#define build_icall(name, receiver, msg, size)\
    name = make_icall((object)receiver, size);\
    set_callmsg(name, msg);

#define icall1(name, receiver, msg)\
    build_icall(name, receiver, msg, 1)

#define icall2(name, receiver, msg, arg)\
    build_icall(name, receiver, msg, 2)\
    set_callarg(name, 1, (object)arg);

#define icall3(name, receiver, msg, arg1, arg2)\
    build_icall(name, receiver, msg, 3)\
    set_callarg(name, 1, (object)arg1);\
    set_callarg(name, 2, (object)arg2);

void inline add_eval_args_code(ilist_object exp,
                               array_object arguments,
                               int argsize) {
    icall_object icall1(parent_env, fools_system->icapture, ENV_PARENT);

    icall_object arg_eval;
    // var1 = (var1 eval: (env parent))
    // ...  ...  ...
    // varN = (varN eval: (env parent))
    int i;
    for (i = 0; i < argsize; i++) {
        ivar_object variable = array_at(arguments, i).ivar;
        variable->index = make_number(i + 1); // skip receiver
        variable->scope = (object)exp;

        icall2(arg_eval, variable, PRE_EVAL_ENV, parent_env);
        ilist_at_put(exp, i,
            (object)make_iassign(variable, (object)arg_eval));
    }
}
 
void inline add_switch_scope_code(ilist_object exp, int position) {
    ivar_object receiver_var = make_ivar();
    receiver_var->scope = (object)exp;

    icall_object icall1(self_scope, receiver_var, SCOPE_IN_ENV);
    icall_object icall2(switch_env, fools_system->icapture,
                        ENV_SET_PARENT, self_scope)

    ilist_at_put(exp, position, (object)switch_env);
}

object iscoped_for(object exp, object size) {
    // TODO: optimization: don't wrap iscoped in a const.
    // Just don't eval the receiver.
    iconst_object iconst = make_iconst(fools_system->iscoped);
    icall_object icall3(icall, iconst, NEW_SIZE, exp, size);
    icall1(icall, icall, SHIFT);
    return (object)icall;
}


// Function which doesn't switch to static scope on eval automatically.
object inline make_dyn_func(array_object arguments, object body) {
    int argsize = number_value(array_size(arguments));
    // Eval args, eval body
    ilist_object exp = make_ilist(argsize + 1); 

    add_eval_args_code(exp, arguments, argsize);
    ilist_at_put(exp, argsize, body);

    return iscoped_for((object)exp,
                       (object)array_size(arguments));
}

object inline make_func(array_object arguments, object body) {
    int argsize = number_value(array_size(arguments));
    // Eval args, switch context, eval body
    ilist_object exp = make_ilist(argsize + 2);

    add_eval_args_code(exp, arguments, argsize);
    add_switch_scope_code(exp, argsize);
    ilist_at_put(exp, argsize + 1, body);

    return iscoped_for((object)exp,
                       (object)array_size(arguments));
}
