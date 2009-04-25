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
    return array_at(interpreter_context->arguments, 1).context;
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

    object environment = array_at(ilist_context->arguments, 1);

    ilist_context->arguments = make_array(4);
    array_at_put(ilist_context->arguments, 0, symbol_known_to_the_vm("return:env:continue:"));
    array_at_put(ilist_context->arguments, 2, environment);
    array_at_put(ilist_context->arguments, 3, (object)make_number(0));

    transfer(ilist_context);
}

// ilist>>return:env:continue:
void ilist_continue_eval(context_object context) {
    context_object ilist_context = target_context(context);
    int index = number_value(array_at(ilist_context->arguments, 3).number);
    ilist_object ilist = header(ilist_context).instruction.ilist;
    int size = number_value(ilist->size) - 1;

    object instruction = (object)raw_ilist_at(ilist, index);
    header(context) = instruction;

    if (index != size) {
        array_at_put(ilist_context->arguments, 3, (object)make_number(index + 1));
        context->return_context = (object)ilist_context;
    } else { // tailcall.
        context->arguments = make_array(2);
        context->return_context = (object)ilist_context->return_context;
    }
    
    array_at_put(context->arguments, 0, symbol_known_to_the_vm("eval:"));

    transfer(context);
}

// iconst>>eval:
void iconst_eval(context_object context) {
    context_object iconst_context = target_context(context);
    iconst_object iconst = header(iconst_context).instruction.iconst;

    array_at_put(iconst_context->return_context.context->arguments, 1,
                 iconst->constant);

    return_from_context(iconst_context);
}

// icall>>eval:
void icall_eval(context_object context) {
    context_object icall_context = target_context(context);
    icall_object icall = header(icall_context).instruction.icall;

    header(icall_context)       = icall->receiver;
    icall_context->arguments    = icall->arguments;
    
    transfer(icall_context);
}

// iassign>>eval:
void iassign_eval(context_object context) {
    context_object iassign_context = target_context(context);
    iassign_object iassign = header(iassign_context).instruction.iassign;
    

    env_object env = array_at(iassign_context->arguments, 1).env;

    header(context)     = iassign->expression;
    context->arguments  = iassign_context->arguments;

    header(iassign_context)    = (object)(instruction)iassign->variable;
    iassign_context->arguments = make_array(3);
    array_at_put(iassign_context->arguments, 0,
                 symbol_known_to_the_vm("assign:in:"));
    array_at_put(iassign_context->arguments, 2, (object)env);

    context->return_context = (object)iassign_context;

    transfer(context);
}

// ivar>>assign:in:
void ivar_assign(context_object context) {
    context_object ivar_context = target_context(context);
    ivar_object ivar = header(ivar_context).instruction.ivar;

    object env = array_at(ivar_context->arguments, 2);

    object value = array_at(ivar_context->arguments, 1);
    
    header(ivar_context) = env;
    ivar_context->arguments = make_array(4);
    array_at_put(ivar_context->arguments, 0,
                 symbol_known_to_the_vm("store:at:in:"));
    array_at_put(ivar_context->arguments, 1, value);
    array_at_put(ivar_context->arguments, 2, (object)ivar->index);
    array_at_put(ivar_context->arguments, 3, ivar->scope);

    transfer(ivar_context);
}

// ivar>>eval:
void ivar_eval(context_object context) {
    context_object ivar_context = target_context(context);
    ivar_object ivar = header(ivar_context).instruction.ivar;

    object env = array_at(ivar_context->arguments, 1);

    header(ivar_context) = env;
    ivar_context->arguments = make_array(3);
    array_at_put(ivar_context->arguments, 0,
                 symbol_known_to_the_vm("fetch:from:"));
    array_at_put(ivar_context->arguments, 1, (object)ivar->index);
    array_at_put(ivar_context->arguments, 2, ivar->scope);

    transfer(ivar_context);
}

// [..., ilist>>return:continue:env:, iscoped>>eval:]
void iscoped_eval(context_object context) {
    context_object iscoped_context = target_context(context);
    iscoped_object iscoped = header(iscoped_context).instruction.iscoped;

    object dynamic_env = array_at(iscoped_context->arguments, 1);
    object static_env  = iscoped->scope;

    context_object return_context = iscoped_context->return_context.context;

    header(iscoped_context) = iscoped->expression;
    array_at_put(iscoped_context->arguments, 1, static_env);
    array_at_put(return_context->arguments, 2, dynamic_env); 

    transfer(iscoped_context);
}

// Native class handling

void with_native_class_lookup(context_object context) {
    context_object class_context    = target_context(context);
    context_object receiver_context = target_context(class_context);
    native_class_object class       = header(class_context).native_class;
    dict_object natives             = class->natives;
    array_object arguments          = receiver_context->arguments;
    object selector                 = array_at(arguments, 0);
    object native                   = dict_at(natives, selector);

    if (native.nil == fools_system->nil) {
        header(class_context) = class->class;
    } else {
        header(class_context) = native;
    }
    transfer(class_context);
}
