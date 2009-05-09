#include <system.h>
#include <stdio.h>

#define if_selector(selector, symb, todo)\
    if (selector.pointer == symb.pointer)\
        return todo();

void doesnotunderstand(const char* class, object selector) {
    printf("DNU: %s>>%s\n", class, selector.string->value);
    assert(NULL);
}

// Context handling

context_object global_context;

void inline set_transfer(context_object context) {
    global_context = context;
}

void inline return_from_context(context_object context) {
    return set_transfer(return_context(context));
}

context_object inline target_context(context_object interpreter_context) {
    return argument_at(interpreter_context, 1).context;
}

context_object inline get_context() {
    return global_context;
}

void inline new_target(context_object context, object target) {
    header(context) = target;
    context->code = ntarget(header(pheader(target.pointer)));
}

// Transferring primitives.

void inline native() {
    // Finds the code which was tagged with native and executes it.
    // Code tagged with native has to know by itself on which level it
    // executes!
    object code = (object)global_context;
    while (pheader(code.pointer) != ((object)fools_system->native).pointer) {
        code = header(code.pointer);
    }
    global_context->code = ntarget(code);
}

void inline transfer(context_object context) {

    global_context = context;

    while (((object)global_context).nil != fools_system->nil) {
        global_context->code();
    }
}


// AST Handling

// o>>preEval:env:
void pre_eval_env() {
    debug("o>>preEval:env:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 3);

    object env      = argument_at(receiver, 1);
    object env_arg  = argument_at(receiver, 2);

    context_object context = make_context(env_arg, 2);
    set_message(context, EVAL);
    set_argument(context, 1, env);

    receiver->arguments = make_array(2);
    set_new_message(receiver, EVAL);

    context->return_context = (object)receiver;

    debug("ret>>o>>preEval:env:\n");
    set_transfer(context);
}
/*
// Native class handling

void with_native_class_lookup() {
    context_object receiver_context = get_context();
                                    // call -> object -> class
    native_class_object class       = header(pheader(receiver_context)).native_class;
    dict_object natives             = class->natives;
    object selector                 = message(receiver_context);
    object native                   = dict_at(natives, selector);

    if (native.nil == fools_system->nil) {
        debug("non-native: %s sent \n",
                selector.string->value);
        //header(class_context) = class->class;
        assert(NULL);
    } else {
        debug("native: %s\n", selector.string->value);
        receiver_context->code = ntarget(native);
    }
}*/

// Function bootstrapping

// Function which doesn't switch to static scope on eval automatically.
object inline make_dyn_func(array_object arguments, object body) {

    iconst_object iconst = make_iconst(fools_system->iscope);

    int argsize = number_value(array_size(arguments));
    // Eval args, eval body
    ilist_object exp = make_ilist(argsize + 1); 

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

        arg_eval = make_icall((object)variable, 3);
        set_callmsg(arg_eval, PRE_EVAL_ENV);
        set_callarg(arg_eval, 2, (object)parent_env);
        ilist_at_put(exp, i,
            (object)make_iassign(
                variable,
                (object)arg_eval));
    }
    
    ilist_at_put(exp, argsize, body);

    icall_object icall = make_icall((object)iconst, 4);
    set_callmsg(icall, ENV_NEW_SIZE);
    set_callarg(icall, 2, (object)exp);
    set_callarg(icall, 3, (object)array_size(arguments));

    return (object)icall;
}

object inline make_func(array_object arguments, object body) {

    iconst_object iconst = make_iconst(fools_system->iscope);

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

        arg_eval = make_icall((object)variable, 3);
        set_callmsg(arg_eval, PRE_EVAL_ENV);
        set_callarg(arg_eval, 2, (object)parent_env);
        ilist_at_put(exp, i,
            (object)make_iassign(
                variable,
                (object)arg_eval));
    }
    
    ivar_object receiver_var = make_ivar();
    receiver_var->scope = (object)exp;
    icall_object self_scope = make_icall((object)receiver_var, 2);
        
    set_callmsg(self_scope, SCOPE_IN_ENV);

    icall_object switch_env = make_icall(fools_system->icapture, 3);
    set_callmsg(switch_env, ENV_SET_PARENT);
    set_callarg(switch_env, 2, (object)self_scope);
        
    ilist_at_put(exp, argsize, (object)switch_env);
    ilist_at_put(exp, argsize + 1, body);

    icall_object icall = make_icall((object)iconst, 4);
    set_callmsg(icall, ENV_NEW_SIZE);
    set_callarg(icall, 2, (object)exp);
    set_callarg(icall, 3, (object)array_size(arguments));

    return (object)icall;
}
