#include <system.h>
#include <model.h>
#include <ast.h>
#include <assert.h>
#include <bootstrap.h>
#include <stdio.h>

#define NDEBUG 1
#define debug if (!NDEBUG) indent(); if (!NDEBUG) printf

#define if_selector(selector, symb, todo)\
    if (selector.pointer == symb.pointer)\
        return todo();

int _indent_ = 0;

void indent() {
    int i;
    for (i = 0; i < _indent_; i++) {
        printf("\t");
    }
}

void inline inc() { if (!NDEBUG) _indent_++; }
void inline dec() { if (!NDEBUG) _indent_--; }

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

// ilist>>return:env:continue:
void ilist_continue_eval() {
    context_object ilist_context = get_context();
    int index = number_value(argument_at(ilist_context, 3).number);

    ilist_object ilist = header(ilist_context).ilist;
    int size = number_value(ilist->size) - 1;

    object env = argument_at(ilist_context, 2);
    context_object context = argument_at(ilist_context, 0).context;

    if (index < size) {
        set_argument(ilist_context, 3, (object)make_number(index + 1));
        context->return_context = (object)ilist_context;
    } else { // tailcall.
        context->arguments = make_array(2);
        context->return_context = ilist_context->return_context;
        dec();
    }
    
    object instruction = (object)raw_ilist_at(ilist, index);
    new_target(context, instruction);

    set_message(context, EVAL);
    set_argument(context, 1, env);

    set_transfer(context);
}

// ilist>>eval:
void inline ilist_eval() {
    debug("ilist>>eval:\n");
    context_object ilist_context = get_context();
    assert_argsize(ilist_context, 2);
    ilist_object ilist = (ilist_object)header(ilist_context).pointer;

    if (number_value(ilist->size) == 0) {
        return return_from_context(ilist_context);
    }

    if (number_value(ilist->size) == 1) {
        object instruction = (object)raw_ilist_at(ilist, 0);
        new_target(ilist_context, instruction);
        return;
    }


    context_object rec = make_context((object)ilist, 4);

    object environment = argument_at(ilist_context, 1);

    // optimization, reuse object.
    set_argument(rec, 0, (object)ilist_context); 
    set_argument(rec, 2, environment);
    set_argument(rec, 3, (object)make_number(0));
    rec->code = &ilist_continue_eval;
    rec->return_context = ilist_context->return_context;

    set_transfer(rec);

    debug("ret>>ilist>>eval:\n");
    inc();
}

void ilist_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         ilist_eval);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("ilist", selector);
}

// iconst>>eval:
void inline iconst_eval() {
    context_object iconst_context = get_context();
    iconst_object iconst = header(iconst_context).iconst;

    debug("iconst>>eval: %p\n", iconst);

    set_argument(return_context(iconst_context), 1, iconst->constant);

    debug("ret>>iconst>>eval:\n");

    return_from_context(iconst_context);
}

void iconst_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         iconst_eval);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("iconst", selector);
}

// icall>>invoke:env:
void inline icall_invoke_env() {
    debug("icall>>invoke:env:\n");
    context_object icall_context = get_context();

    icall_object icall  = header(icall_context).icall;

    object env          = argument_at(icall_context, 0);
    object interpreter  = argument_at(icall_context, 1);

    new_target(icall_context, interpreter);

    // XXX Do an ensuring copy! Check it's an array!
    int argsize = number_value(array_size(icall->arguments));
    array_object context_arguments = make_array(argsize);

    int i;
    for (i = 0; i < argsize; i++) {
        raw_array_at_put(context_arguments, i, raw_array_at(icall->arguments, i));
    }
    // until here.

    icall_context->arguments = context_arguments;
    set_argument(icall_context, 1, env);

    debug("ret>>icall>>invoke:env:\n");
    dec();
}

// icall>>eval:
void inline icall_eval() {
    debug("icall>>eval:\n");
    context_object icall_context = get_context();
    assert_argsize(icall_context, 2);

    icall_object icall = header(icall_context).icall;

    object env = argument_at(icall_context, 1);
    set_argument(icall_context, 0, env);
    icall_context->code = &icall_invoke_env;
    
    context_object context = make_context(icall->interpreter, 2);
    set_message(context, EVAL);
    set_argument(context, 1, env);
    context->return_context = (object)icall_context;

    set_transfer(context);

    debug("ret>>icall>>eval:\n");
    inc();
}

void icall_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         icall_eval);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("icall", selector);
}

// appcall>>invoke:env:
void appcall_invoke() {
    debug("appcall>>invoke:env:\n");
    context_object appcall_context = get_context();

    appcall_object appcall  = header(appcall_context).appcall;

    object env          = argument_at(appcall_context, 0);
    object expression   = argument_at(appcall_context, 1);

    new_target(appcall_context, expression);
    set_message(appcall_context, EVAL_WITHARGUMENTS);
    set_argument(appcall_context, 1, env);
    set_argument(appcall_context, 2, (object)appcall->arguments);

    debug("ret>>appcall>>invoke:env:\n");
    dec();
}

// appcall>>eval:
void appcall_eval() {
    debug("appcall>>eval:\n");
    context_object appcall_context = get_context();
    assert_argsize(appcall_context, 2);

    appcall_object appcall = header(appcall_context).appcall;

    object env = argument_at(appcall_context, 1);

    context_object context = make_context((object)appcall, 3);
    set_argument(context, 0, env);
    context->code = &appcall_invoke;
    context->return_context = appcall_context->return_context;

    new_target(appcall_context, appcall->expression);
    appcall_context->return_context   = (object)context;

    debug("ret>>appcall>>eval:\n");
    inc();
}

void appcall_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         appcall_eval);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("appcall", selector);
}

void inline dircall_eval() {
    debug("dircall>>eval:\n");
    context_object dircall_context = get_context();
    assert_argsize(dircall_context, 2);
    
    dircall_object dircall = header(dircall_context).dircall;
    
    object env          = argument_at(dircall_context, 1);
    object interpreter  = dircall->interpreter;

    context_object context = make_context(interpreter, 3);
    set_message(context, EVAL_WITHARGUMENTS);
    set_argument(context, 1, env);
    set_argument(context, 2, (object)dircall->arguments);
    set_transfer(context);
    debug("ret>>dircall>>eval:\n");
}

void dircall_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         dircall_eval);
    doesnotunderstand("dircall", selector);
}

// iassign>>eval:
void inline iassign_eval() {
    context_object iassign_context = get_context();
    assert_argsize(iassign_context, 2);

    iassign_object iassign = header(iassign_context).iassign;

    debug("iassign>>eval:\n");
    
    object env = argument_at(iassign_context, 1);

    new_target(iassign_context, iassign->expression);

    context_object context = make_context((object)iassign->variable, 3);
    set_message(context, ASSIGN_IN);
    set_argument(context, 2, env);
    context->return_context = iassign_context->return_context;

    iassign_context->return_context = (object)context;

    debug("ret>>iassign>>eval:\n");

    //set_transfer(iassign_context);
}

void iassign_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         iassign_eval);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("iassign", selector);
}

// ivar>>assign:in:
void ivar_assign() {
    context_object ivar_context = get_context();
    assert_argsize(ivar_context, 3);

    ivar_object ivar = header(ivar_context).ivar;

    debug("ivar>>assign:in:\n");

    object value    = argument_at(ivar_context, 1);
    object env      = argument_at(ivar_context, 2);

    new_target(ivar_context, env);
    ivar_context->arguments = make_array(4);
    set_message(ivar_context, STORE_AT_IN);
    set_argument(ivar_context, 1, value);
    set_argument(ivar_context, 2, (object)ivar->index);
    set_argument(ivar_context, 3, ivar->scope);

    set_transfer(ivar_context);
}

// ivar>>eval:
void ivar_eval() {
    debug("ivar>>eval:\n");
    context_object ivar_context = get_context();
    assert_argsize(ivar_context, 2);

    ivar_object ivar = header(ivar_context).ivar;

    object env = argument_at(ivar_context, 1);

    new_target(ivar_context, env);
    ivar_context->arguments = make_array(3);
    set_message(ivar_context, FETCH_FROM);
    set_argument(ivar_context, 1, (object)ivar->index);
    set_argument(ivar_context, 2, ivar->scope);

    debug("ret>>ivar>>eval:\n");
    set_transfer(ivar_context);
}

void ivar_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         ivar_eval);
    if_selector(selector, ASSIGN_IN,    ivar_assign);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("ivar", selector);
}

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

// icapture>>eval:
void inline icapture_eval() {
    context_object icapture_context = get_context();
    assert_argsize(icapture_context, 2);

    debug("icapture>>eval:\n");

    object dynamic_env = argument_at(icapture_context, 1);
    set_argument(return_context(icapture_context), 1, dynamic_env);

    debug("ret>>icapture>>eval:\n");

    return_from_context(icapture_context);
}

void icapture_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL, icapture_eval);
    doesnotunderstand("icapture", selector);
}

// env>>fetch:from:
void inline env_fetch_from() {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    debug("env>>fetch:from:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 3);
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
    new_target(receiver, env->parent);
    debug("ret>>env>>fetch:from:\n");
    set_transfer(receiver);
}

// env>>store:at:in:
void inline env_store_at_in() {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    debug("env>>store:at:in:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 4);
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
    new_target(receiver, env->parent);
    debug("ret>>env>>store:at:in:\n");
    set_transfer(receiver);
}

// env>>subScope:key:
void inline env_subscope() {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    debug("env>>subScope:key:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 3);
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
void inline env_set_env_parent() {
    debug("env>>env:parent:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 3);
    // arguments at: 0 -> selector
    object env = argument_at(receiver, 1);
    object new_env = argument_at(receiver, 2);

    context_object context = make_context(new_env, 2);
    set_message(context, EVAL);
    set_argument(context, 1, env);

    context->return_context = (object)receiver;

    set_new_message(receiver, PARENT);

    debug("ret>>env>>env:parent:\n");
    set_transfer(context);
}

// env>>parent:
void inline env_set_parent() {
    debug("env>>parent:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 2);
    // arguments at: 0 -> selector
    object env = header(receiver);
    object new_env = argument_at(receiver, 1);

    env.env->parent = new_env;

    // Don't accidentally set parent to self!
    assert(env.env->parent.env != env.env);
    debug("ret>>env>>parent:\n");
    return_from_context(receiver);
}

// env>>parent
void inline env_parent() {
    debug("env>>envParent:\n");
    context_object receiver = get_context();
    // arguments at: 0 -> selector
    object env = header(receiver);
    set_argument(return_context(receiver), 1, env.env->parent);
    debug("ret>>env>>envParent:\n");
    return_from_context(receiver);
}

void env_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, FETCH_FROM,       env_fetch_from);
    if_selector(selector, STORE_AT_IN,      env_store_at_in);
    if_selector(selector, SUBSCOPE_KEY,     env_subscope);
    if_selector(selector, ENV_SET_PARENT,   env_set_env_parent);
    if_selector(selector, PARENT,           env_set_parent);
    if_selector(selector, ENV_PARENT,       env_parent);
    doesnotunderstand("env", selector);
}

// iscoped>>eval:
void iscoped_eval() {
    debug("iscoped>>doEval:withArguments\n");
    context_object iscoped_context = get_context();
    assert_argsize(iscoped_context, 3);

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
    new_target(iscoped_context, iscoped->expression);
    iscoped_context->arguments = make_array(2);
    set_message(iscoped_context, EVAL);
    set_argument(iscoped_context, 1, env);

    debug("ret>>iscoped>>doEval:withArguments\n");
    //set_transfer(iscoped_context);
}

// iscoped>>eval:withArguments:
void inline iscoped_eval_arguments() {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    debug("iscoped>>eval:withArguments:\n");
    context_object iscoped_context = get_context();
    assert_argsize(iscoped_context, 3);

    iscoped_object iscoped = header(iscoped_context).iscoped;

    object env = argument_at(iscoped_context, 1);
    int argsize = number_value(iscoped->argsize.number);

    context_object context = make_context(env, 3);
    set_message(context, SUBSCOPE_KEY);
    set_argument(context, 1, (object)make_number(argsize + 2));
    set_argument(context, 2, iscoped->expression);

    context->return_context = (object)iscoped_context;
    
    iscoped_context->code = &iscoped_eval;

    debug("ret>>iscoped>>eval:withArguments:\n");
    set_transfer(context);
}

// iscoped>>scope
void inline iscoped_scope() {
    debug("iscoped>>scope\n");
    context_object receiver = get_context();
    // arguments at: 0 -> selector
    iscoped_object iscoped = header(receiver).iscoped;
    set_argument(return_context(receiver), 1, iscoped->scope);
    return_from_context(receiver);
    debug("ret>>iscoped>>scope\n");
}

void iscoped_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL_WITHARGUMENTS,   iscoped_eval_arguments);
    if_selector(selector, SCOPE_IN_ENV,         iscoped_scope);
    doesnotunderstand("iscoped", selector);
}

// iscoped_class>>env:new:size:
void inline iscoped_class_new() {
    debug("iscopecls>>env:new:size:\n");
    context_object iscope_context = get_context();
    assert_argsize(iscope_context, 4);
    iscoped_object iscoped =
        make_iscoped(
            argument_at(iscope_context, 1),  // env
            argument_at(iscope_context, 2),  // expression
            argument_at(iscope_context, 3)); // argsize

    set_argument(return_context(iscope_context), 1, (object)iscoped);

    debug("ret>>iscopecls>>env:new:size:\n");
    return_from_context(iscope_context);
}

void iscoped_class_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, ENV_NEW_SIZE, iscoped_class_new);
    doesnotunderstand("iscoped_class", selector);
}
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
}

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
