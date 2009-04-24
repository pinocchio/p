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
    native_target(passed_context->self.native)(passed_context);
}

void inline transfer(context_object context) {

    while (context->self.pointer != fools_system->native.pointer) {
        context = make_meta_context(context);
    }
    
    native(context);
}


// AST Handling

// ilist>>eval
void ilist_eval(context_object context) {
    context_object ilist_context = target_context(context);
    ilist_object ilist = (ilist_object)ilist_context->self.pointer;

    if (number_value(ilist->size) == 0) {
        return return_from_context(ilist_context);
    }

    ilist_context->arguments = make_array(3);
    array_at_put(ilist_context->arguments, 0, symbol_known_to_the_vm("return:continue:"));
    array_at_put(ilist_context->arguments, 2, (object)make_number(0));

    transfer(ilist_context);
}

// ilist>>continue:
void ilist_continue_eval(context_object context) {
    context_object ilist_context = target_context(context);
    int index = number_value(array_at(ilist_context->arguments, 2).number);
    ilist_object ilist = ilist_context->self.instruction.ilist;
    int size = number_value(ilist->size) - 1;

    object instruction = (object)raw_ilist_at(ilist, index);
    context->self = instruction;

    if (index != size) {
        array_at_put(ilist_context->arguments, 2, (object)make_number(index + 1));
        context->return_context = (object)ilist_context;
    } else { // tailcall.
        context->arguments = make_array(1);
        context->return_context = (object)ilist_context->return_context;
    }
    
    array_at_put(context->arguments, 0, symbol_known_to_the_vm("eval"));

    transfer(context);
}

// iconst>>eval
void iconst_eval(context_object context) {
    context_object iconst_context = target_context(context);
    iconst_object iconst = iconst_context->self.instruction.iconst;

    array_at_put(iconst_context->return_context.context->arguments, 1,
                 iconst->constant);

    return_from_context(iconst_context);
}

// icall>>eval
void icall_eval(context_object context) {
    context_object icall_context = target_context(context);
    icall_object icall = icall_context->self.instruction.icall;

    icall_context->self         = icall->receiver;
    icall_context->arguments    = icall->arguments;
    
    transfer(icall_context);
}

// iassign>>eval
void iassign_eval(context_object context) {
    context_object iassign_context = target_context(context);
    iassign_object iassign = iassign_context->self.instruction.iassign;
    
    context->self       = iassign->expression;
    context->arguments  = iassign_context->arguments;

    iassign_context->self      = (object)(instruction)iassign->variable;
    iassign_context->arguments = make_array(2);
    array_at_put(iassign_context->arguments, 0, symbol_known_to_the_vm("assign:"));

    context->return_context = (object)iassign_context;

    transfer(context);
}

// ivar>>assign:
void ivar_assign(context_object context) {
    context_object ivar_context = target_context(context);
    ivar_object ivar = ivar_context->self.instruction.ivar;
    
    object value = array_at(ivar_context->arguments, 1);
    variable_assign(ivar, value);

    return_from_context(ivar_context);
}

// iconst>>eval
void ivar_eval(context_object context) {
    context_object ivar_context = target_context(context);
    ivar_object ivar = ivar_context->self.instruction.ivar;

    array_at_put(ivar_context->return_context.context->arguments, 1,
                 variable_value(ivar));

    return_from_context(ivar_context);
}

// Native class handling

void with_native_class_lookup(context_object context) {
    context_object class_context    = target_context(context);
    context_object receiver_context = target_context(class_context);
    native_class_object class       = class_context->self.native_class;
    dict_object natives             = class->natives;
    array_object arguments          = receiver_context->arguments;
    object selector                 = array_at(arguments, 0);
    object native                   = dict_at(natives, selector);

    if (native.nil == fools_system->nil) {
        class_context->self = class->class;
    } else {
        class_context->self = native;
    }
    transfer(class_context);
}
