#include <system.h>
#include <model.h>
#include <ast.h>
#include <assert.h>
#include <bootstrap.h>
#include <stdio.h>

#define NDEBUG 1
#define debug if (!NDEBUG) printf

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


// Transferring primitives.

void inline native(context_object context) {
    context_object passed_context = target_context(context);
    native_target(header(passed_context).native)(passed_context);
}

void inline transfer(context_object context) {

    global_context = context;

    while (((object)global_context).nil != fools_system->nil) {

        while (header(global_context).pointer != fools_system->native.pointer) {
            global_context = make_meta_context(global_context);
        }

        native(global_context);

    }
    
}


// AST Handling

// ilist>>eval:
void ilist_eval(context_object context) {
    debug("ilist>>eval:\n");
    context_object ilist_context = target_context(context);
    ilist_object ilist = (ilist_object)header(ilist_context).pointer;

    if (number_value(ilist->size) == 0) {
        return return_from_context(ilist_context);
    }

    object environment = argument_at(ilist_context, 1);

    ilist_context->arguments = make_array(4);
    set_message(ilist_context, "return:env:continue:");
    set_argument(ilist_context, 2, environment);
    set_argument(ilist_context, 3, (object)make_number(0));

    set_transfer(ilist_context);
}

// ilist>>return:env:continue:
void ilist_continue_eval(context_object context) {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    context_object ilist_context = target_context(context);
    int index = number_value(argument_at(ilist_context, 3).number);
    debug("ilist>>return:env:continue: %i\n", index);
    ilist_object ilist = header(ilist_context).ilist;
    int size = number_value(ilist->size) - 1;

    object env = argument_at(ilist_context, 2);

    object instruction = (object)raw_ilist_at(ilist, index);
    header(context) = instruction;

    if (index != size) {
        set_argument(ilist_context, 3, (object)make_number(index + 1));
        context->return_context = (object)ilist_context;
    } else { // tailcall.
        context->arguments = make_array(2);
        context->return_context = ilist_context->return_context;
    }
    
    set_message(context, "eval:");
    set_argument(context, 1, env);

    set_transfer(context);
}

// iconst>>eval:
void iconst_eval(context_object context) {
    context_object iconst_context = target_context(context);
    iconst_object iconst = header(iconst_context).iconst;

    debug("iconst>>eval\n");

    set_argument(return_context(iconst_context), 1, iconst->constant);

    debug("ret>>iconst>>eval:\n");

    return_from_context(iconst_context);
}

// icall>>eval:
void icall_eval(context_object context) {
    debug("icall>>eval:\n");
    context_object icall_context = target_context(context);
    icall_object icall = header(icall_context).icall;

    object env = argument_at(icall_context, 1);

    header(context)                 = icall->interpreter;
    context->return_context         = (object)icall_context;
    context->arguments              = icall_context->arguments;

    icall_context->arguments        = make_array(3);
    set_message(icall_context, "invoke:env:");
    set_argument(icall_context, 2, env);

    debug("ret>>icall>>eval:\n");
    set_transfer(context);
}

// icall>>invoke:env:
void icall_invoke_env(context_object context) {
    debug("icall>>invoke:env:\n");
    context_object icall_context = target_context(context);
    icall_object icall  = header(icall_context).icall;

    object interpreter  = argument_at(icall_context, 1);
    object env          = argument_at(icall_context, 2);

    header(context) = interpreter;
    // XXX should be a copy of the arguments;
    // ensuring that it's an array!
    context->arguments = icall->arguments;
    set_argument(context, 1, env);
    context->return_context = icall_context->return_context;

    debug("ret>>icall>>invoke:env:\n");
    set_transfer(context);
}

// appcall>>invoke:env:
void appcall_invoke(context_object context) {
    debug("appcall>>invoke:env:\n");
    context_object appcall_context = target_context(context);
    appcall_object appcall  = header(appcall_context).appcall;

    object interpreter  = argument_at(appcall_context, 1);
    object env          = argument_at(appcall_context, 2);

    header(appcall_context) = interpreter;
    set_message(appcall_context, "eval:withArguments:");
    set_argument(appcall_context, 1, env);
    set_argument(appcall_context, 2, (object)appcall->arguments);

    debug("ret>>appcall>>invoke:env:\n");
    set_transfer(appcall_context);
}


// iassign>>eval:
void iassign_eval(context_object context) {
    context_object iassign_context = target_context(context);
    iassign_object iassign = header(iassign_context).iassign;

    debug("iassign>>eval:\n");
    
    object env = argument_at(iassign_context, 1);

    header(context)     = iassign->expression;
    context->arguments  = iassign_context->arguments;

    header(iassign_context)    = (object)iassign->variable;
    iassign_context->arguments = make_array(3);
    set_message(iassign_context, "assign:in:");
    set_argument(iassign_context, 2, env);

    context->return_context = (object)iassign_context;

    debug("ret>>iassign>>eval:\n");

    set_transfer(context);
}

// ivar>>assign:in:
void ivar_assign(context_object context) {
    context_object ivar_context = target_context(context);
    ivar_object ivar = header(ivar_context).ivar;

    debug("ivar>>assign:in:\n");

    object value    = argument_at(ivar_context, 1);
    object env      = argument_at(ivar_context, 2);

    header(ivar_context) = env;
    ivar_context->arguments = make_array(4);
    set_message(ivar_context, "store:at:in:");
    set_argument(ivar_context, 1, value);
    set_argument(ivar_context, 2, (object)ivar->index);
    set_argument(ivar_context, 3, ivar->scope);

    set_transfer(ivar_context);
}

// o>>preEval:env:
void pre_eval_env(context_object context) {
    debug("o>>preEval:env:\n");
    context_object receiver = target_context(context);

    object env      = argument_at(receiver, 1);
    object env_arg  = argument_at(receiver, 2);

    header(context) = env_arg;
    set_message(context, "eval:");
    set_argument(context, 1, env);

    receiver->arguments = make_array(2);
    set_message(receiver, "eval:");

    context->return_context = (object)receiver;

    debug("ret>>o>>preEval:env:\n");
    set_transfer(context);
}

// ivar>>eval:
void ivar_eval(context_object context) {
    debug("ivar>>eval:\n");
    context_object ivar_context = target_context(context);
    ivar_object ivar = header(ivar_context).ivar;

    object env = argument_at(ivar_context, 1);

    header(ivar_context) = env;
    ivar_context->arguments = make_array(3);
    set_message(ivar_context, "fetch:from:");
    set_argument(ivar_context, 1, (object)ivar->index);
    set_argument(ivar_context, 2, ivar->scope);

    debug("ret>>ivar>>eval:\n");
    set_transfer(ivar_context);
}

// iscoped>>eval:withArguments:
void iscoped_eval_arguments(context_object context) {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    debug("iscoped>>eval:withArguments:\n");
    context_object iscoped_context = target_context(context);
    iscoped_object iscoped = header(iscoped_context).iscoped;

    object env = argument_at(iscoped_context, 1);
    int argsize = number_value(iscoped->argsize.number);

    header(context) = env;
    context->arguments = make_array(3);
    set_message(context, "subScope:key:");
    set_argument(context, 1, (object)make_number(argsize + 2));
    set_argument(context, 2, iscoped->expression);

    context->return_context = (object)iscoped_context;
    
    set_message(iscoped_context, "doEval:withArguments:");

    debug("ret>>iscoped>>eval:withArguments:\n");
    set_transfer(context);
}

// iscoped>>eval:
void iscoped_eval(context_object context) {
    debug("iscoped>>doEval:withArguments\n");
    context_object iscoped_context = target_context(context);
    iscoped_object iscoped = header(iscoped_context).iscoped;

    // filling in scope with interpreter + arguments.
    // XXX have to do this by extending the continuation context!
    object env          = argument_at(iscoped_context, 1);
    array_object args   = argument_at(iscoped_context, 2).array;
    env_at_put(env.env, 0, (object)iscoped);

    int argsize = number_value(iscoped->argsize.number);

    int i;
    for (i = 0; i < argsize; i++) {
        env_at_put(env.env, i + 1, array_at(args, i));
    }

    // we just eval the attached expression.
    header(context) = iscoped->expression;
    set_message(context, "eval:");
    set_argument(context, 1, env);
    context->return_context = iscoped_context->return_context;

    debug("ret>>iscoped>>doEval:withArguments\n");
    set_transfer(context);
}

// iscoped>>scope
void iscoped_scope(context_object context) {
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    iscoped_object iscoped = header(receiver).iscoped;
    set_argument(return_context(receiver), 1, iscoped->scope);
    return_from_context(receiver);
}

// icapture>>eval:
void icapture_eval(context_object context) {
    context_object icapture_context = target_context(context);

    debug("icapture>>eval:\n");

    object dynamic_env = argument_at(icapture_context, 1);

    set_argument(return_context(icapture_context), 1, dynamic_env);

    debug("ret>>icapture>>eval:\n");

    return_from_context(icapture_context);
}

// env>>fetch:from:
void env_fetch_from(context_object context) {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    debug("env>>fetch:from:\n");
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    env_object env = header(receiver).env;
    if (env->scope.pointer == array_at(receiver->arguments, 2).pointer) {
        int index = number_value(array_at(receiver->arguments, 1).number);
        object value = env_at(env, index);
        array_at_put(receiver->return_context.context->arguments, 1, value);
        return return_from_context(receiver);
    }
    if (env->parent.nil == fools_system->nil) {
        assert(NULL); // XXX should go to error-handler here.
    }
    header(receiver) = env->parent;
    debug("ret>>env>>fetch:from:\n");
    set_transfer(receiver);
}

// env>>store:at:in:
void env_store_at_in(context_object context) {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    debug("env>>store:at:in:\n");
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    env_object env = header(receiver).env;
    if (env->scope.pointer == array_at(receiver->arguments, 3).pointer) {
        int index = number_value(array_at(receiver->arguments, 2).number);
        object value = array_at(receiver->arguments, 1);
        env_at_put(env, index, value);
        return return_from_context(receiver);
    }
    if (env->parent.nil == fools_system->nil) {
        return;
    }
    header(receiver) = env->parent;
    debug("ret>>env>>store:at:in:\n");
    set_transfer(receiver);
}

// env>>subScope:
void env_subscope(context_object context) {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    debug("env>>subScope:key:\n");
    context_object receiver = target_context(context);
    object env  = header(receiver);
    // arguments at: 0 -> selector
    int size    = number_value(argument_at(receiver, 1).number);
    object key  = argument_at(receiver, 2);

    env_object new_env = make_env(key, env, size);
    set_argument(return_context(receiver), 1, (object)new_env);

    debug("ret>>env>>subScope:key:\n");

    return_from_context(receiver);
}

// env>>env:parent:
void env_set_env_parent(context_object context) {
    debug("env>>env:parent:\n");
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    object env = argument_at(receiver, 1);
    object new_env = argument_at(receiver, 2);

    header(context) = new_env;
    set_message(context, "eval:");
    set_argument(context, 1, env);

    context->return_context = (object)receiver;

    set_message(receiver, "parent:");

    debug("ret>>env>>env:parent:\n");
    set_transfer(context);
}

// env>>parent:
void env_set_parent(context_object context) {
    debug("env>>parent:\n");
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    object env = header(receiver);
    object new_env = argument_at(receiver, 1);

    env.env->parent = new_env;

    assert(env.env->parent.env != env.env);
    debug("ret>>env>>parent:\n");
    return_from_context(receiver);
}

// env>>parent
void env_parent(context_object context) {
    debug("env>>envParent:\n");
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    object env = header(receiver);
    set_argument(return_context(receiver), 1, env.env->parent);
    debug("ret>>env>>envParent:\n");
    return_from_context(receiver);
}

// iscope_class>>env:new:size:
void iscope_new(context_object context) {
    debug("iscopecls>>env:new:size:\n");
    context_object iscope_context = target_context(context);
    iscoped_object iscoped =
        make_iscoped(
            argument_at(iscope_context, 1),  // env
            argument_at(iscope_context, 2),  // expression
            argument_at(iscope_context, 3)); // argsize

    set_argument(return_context(iscope_context), 1, (object)iscoped);

    debug("ret>>iscopecls>>env:new:size:\n");
    return_from_context(iscope_context);
}

// Native class handling

void with_native_class_lookup(context_object context) {
    context_object class_context    = target_context(context);
    context_object receiver_context = target_context(class_context);
    native_class_object class       = header(class_context).native_class;
    dict_object natives             = class->natives;
    object selector                 = message(receiver_context);
    object native                   = dict_at(natives, selector);

    if (native.nil == fools_system->nil) {
        debug("non-native: %s\n",
                selector.string->value);
        header(class_context) = class->class;
    } else {
        debug("native: %s\n", selector.string->value);
        header(class_context) = native;
    }
    set_transfer(class_context);
}

// Function bootstrapping

object inline make_func(array_object arguments, object body) {

    iconst_object iconst = make_iconst(fools_system->iscope);

    int argsize = number_value(array_size(arguments));
    // Eval args, switch context, eval body
    ilist_object exp = make_ilist(argsize + 2); 

    icall_object parent_env = make_icall(fools_system->icapture, 2);
    set_callmsg(parent_env, "envParent:");

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
        set_callmsg(arg_eval, "preEval:env:");
        set_callarg(arg_eval, 2, (object)parent_env);
        ilist_at_put(exp, i,
            (object)make_iassign(
                variable,
                (object)arg_eval
            )
        );
    }
    
    ivar_object receiver_var = make_ivar();
    receiver_var->scope = (object)exp;
    icall_object self_scope = make_icall((object)receiver_var, 2);
        
    set_callmsg(self_scope, "scopeInEnv:");

    icall_object switch_env = make_icall(fools_system->icapture, 3);
    set_callmsg(switch_env, "env:parent:");
    set_callarg(switch_env, 2, (object)self_scope);
        
    ilist_at_put(exp, argsize, (object)switch_env);
    ilist_at_put(exp, argsize + 1, body);

    icall_object icall = make_icall((object)iconst, 4);
    set_callmsg(icall, "env:new:size:");
    set_callarg(icall, 2, (object)exp);
    set_callarg(icall, 3, (object)array_size(arguments));

    return (object)icall;
}
