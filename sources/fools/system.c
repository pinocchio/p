#include <system.h>
#include <model.h>
#include <ast.h>
#include <assert.h>
#include <bootstrap.h>
#include <stdio.h>

// Context handling

void inline return_from_context(context_object context) {
    object return_context = context->return_context;
    if (return_context.nil != fools_system->nil) {
        return transfer(return_context.context);
    }
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

    while (header(context).pointer != fools_system->native.pointer) {
        context = make_meta_context(context);
    }
    
    native(context);
}


// AST Handling

// ilist>>eval:
void ilist_eval(context_object context) {
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

    transfer(ilist_context);
}

// ilist>>return:env:continue:
void ilist_continue_eval(context_object context) {
    context_object ilist_context = target_context(context);
    int index = number_value(argument_at(ilist_context, 3).number);
    ilist_object ilist = header(ilist_context).instruction.ilist;
    int size = number_value(ilist->size) - 1;

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

    transfer(context);
}

// iconst>>eval:
void iconst_eval(context_object context) {
    context_object iconst_context = target_context(context);
    iconst_object iconst = header(iconst_context).instruction.iconst;

    set_argument(return_context(iconst_context),
                 1, iconst->constant);

    return_from_context(iconst_context);
}

// icall>>eval:
void icall_eval(context_object context) {
    context_object icall_context = target_context(context);
    icall_object icall = header(icall_context).instruction.icall;

    object env = argument_at(icall_context, 1);

    header(context)                 = icall->interpreter;
    context->return_context         = (object)icall_context;
    context->arguments              = icall_context->arguments;

    icall_context->arguments        = make_array(3);
    set_message(icall_context, "invoke:env:");
    set_argument(icall_context, 2, env);

    transfer(context);
}

// icall>>invoke:env:
void icall_invoke(context_object context) {
    context_object icall_context = target_context(context);
    icall_object icall  = header(icall_context).instruction.icall;

    object interpreter  = argument_at(icall_context, 1);
    object env          = argument_at(icall_context, 2);

    header(context) = interpreter;
    context->arguments = icall->arguments;
    set_argument(context, 1, env);
    context->return_context = icall_context->return_context;
    transfer(context);
}

// ivinstr>>invoke:env:
void ivinstr_invoke(context_object context) {
    context_object icall_context = target_context(context);
    icall_object icall  = header(icall_context).instruction.icall;

    object interpreter  = argument_at(icall_context, 1);
    object env          = argument_at(icall_context, 2);

    header(icall_context) = env;
    set_message(icall_context, "subScopeFor:arguments:");
    set_argument(icall_context, 1, interpreter);
    set_argument(icall_context, 2, (object)icall->arguments);

    header(context)     = interpreter;
    set_message(context, "eval:");
    context->return_context = icall_context->return_context;

    icall_context->return_context = (object)context;

    transfer(icall_context);
}


// iassign>>eval:
void iassign_eval(context_object context) {
    context_object iassign_context = target_context(context);
    iassign_object iassign = header(iassign_context).instruction.iassign;
    
    env_object env = argument_at(iassign_context, 1).env;

    header(context)     = iassign->expression;
    context->arguments  = iassign_context->arguments;

    header(iassign_context)    = (object)(instruction)iassign->variable;
    iassign_context->arguments = make_array(3);
    set_message(iassign_context, "assign:in:");
    set_argument(iassign_context, 2, (object)env);

    context->return_context = (object)iassign_context;

    transfer(context);
}

// ivar>>assign:in:
void ivar_assign(context_object context) {
    context_object ivar_context = target_context(context);
    ivar_object ivar = header(ivar_context).instruction.ivar;

    object env = argument_at(ivar_context, 2);

    object value = argument_at(ivar_context, 1);
    
    header(ivar_context) = env;
    ivar_context->arguments = make_array(4);
    set_message(ivar_context, "store:at:in:");
    set_argument(ivar_context, 1, value);
    set_argument(ivar_context, 2, (object)ivar->index);
    set_argument(ivar_context, 3, ivar->scope);

    transfer(ivar_context);
}

// ivar>>eval:
void ivar_eval(context_object context) {
    context_object ivar_context = target_context(context);
    ivar_object ivar = header(ivar_context).instruction.ivar;

    object env = argument_at(ivar_context, 1);

    header(ivar_context) = env;
    ivar_context->arguments = make_array(3);
    set_message(ivar_context, "fetch:from:");
    set_argument(ivar_context, 1, (object)ivar->index);
    set_argument(ivar_context, 2, ivar->scope);

    transfer(ivar_context);
}

// iscoped>>eval:
void iscoped_eval(context_object context) {
    context_object iscoped_context = target_context(context);
    iscoped_object iscoped = header(iscoped_context).instruction.iscoped;

    // we just eval the attached expression.
    header(iscoped_context) = iscoped->expression;

    transfer(iscoped_context);
}

// icapture>>eval:
void icapture_eval(context_object context) {
    context_object icapture_context = target_context(context);

    object dynamic_env = argument_at(icapture_context, 1);

    set_argument(return_context(icapture_context), 1, dynamic_env);
    return_from_context(icapture_context);
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
        // printf("non-native: %s\n", selector.string->value);
        header(class_context) = class->class;
    } else {
        // printf("native: %s\n", selector.string->value);
        header(class_context) = native;
    }
    transfer(class_context);
}

// Function bootstrapping

object inline make_func(array_object arguments, object body) {

    iconst_object iconst = make_iconst(fools_system->iscope);

    int argsize = number_value(array_size(arguments));
    // Eval args, switch context, eval body
    ilist_object exp = make_ilist(argsize + 3); 


    icall_object parent_env = make_icall(fools_system->icapture, 1);
    set_callmsg(parent_env, "parent");

    // var1 = (capture) parent
    ilist_at_put(exp, 0, (instruction)
        make_iassign(
            make_ivar((object)fools_system->nil, make_number(1)),
            (object)(instruction)
            parent_env));

    icall_object arg_eval;
    // var2 = (var2 eval: var1)
    // ...  ...  ...
    // varN+1 = (varN+1 eval: var1)
    int i;
    for (i = 0; i < argsize; i++) {
        ivar_object variable = array_at(arguments, i).instruction.ivar;
        variable->index = make_number(i + 2); // skip receiver and dynamic scope

        arg_eval = make_icall((object)(instruction)variable, 2);
        set_callmsg(arg_eval, "eval:");
        set_callarg(arg_eval, 1,
            (object)(instruction)
            make_ivar((object)fools_system->nil,
                       make_number(1)));
        ilist_at_put(exp, i + 1, // skip scope fetching
            (instruction)
            make_iassign(
                variable,
                (object)(instruction)arg_eval
            )
        );
    }

    icall_object self_scope = make_icall(
        (object)(instruction)
        make_ivar((object)fools_system->nil, 0), 1); // receiver
    set_callmsg(self_scope, "scope");

    icall_object switch_env = make_icall(fools_system->icapture, 2);
    set_callmsg(switch_env, "parent:");
    set_callarg(switch_env, 1, (object)(instruction)self_scope);
        
    ilist_at_put(exp, argsize + 1, (instruction)switch_env);
    ilist_at_put(exp, argsize + 2, body.instruction);

    icall_object icall = make_icall((object)(instruction)iconst, 3);
    set_callmsg(icall, "env:new:");
    set_callarg(icall, 2, (object)(instruction)exp);

    return (object)(instruction)icall;
}
