#include <system.h>
#include <model.h>
#include <ast.h>
#include <assert.h>
#include <bootstrap.h>

#include <stdio.h>

// Transferring primitives.

void inline native(context_object context) {
    context_object passed_context = array_at(context->arguments, 0).context;
    native_target(passed_context->self.native)(passed_context);
}

void inline transfer(context_object context) {

    while (context->self.pointer != fools_system->native.pointer) {
        context = make_meta_context(context);
    }
    
    native(context);
}


// Context handling

void inline return_from_context(context_object context) {
    object return_context = context->return_context;
    if (return_context.nil != fools_system->nil) {
        return transfer(return_context.context);
    }
}


// AST Handling

// ilist>>eval
void ilist_eval(context_object context) {
    context_object ilist_context = array_at(context->arguments, 0).context;
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
    context_object ilist_context = array_at(context->arguments, 0).context;
    int index = number_value(array_at(ilist_context->arguments, 2).number);
    ilist_object ilist = ilist_context->self.instruction.ilist;
    int size = number_value(ilist->size) - 1;

    object instruction = (object)raw_ilist_at(ilist, index);

    if (index != size) {
        array_at_put(ilist_context->arguments, 2, (object)make_number(index + 1));
        context = make_context(instruction, 1);
        context->return_context = (object)ilist_context;
    } else { // tailcall.
        context->self = instruction;
        context->arguments = make_array(1);
    }
    
    array_at_put(context->arguments, 0, symbol_known_to_the_vm("eval"));

    transfer(context);
}

// icall>>eval
void icall_eval(context_object context) {
} /*
    context_object icall_context = array_at(context->arguments, 0).context;
    icall_object icall = icall_context->self.instruction.icall;

    context->self = icall_context->self;
    idoit_context->self = idoit->expression;
    context->arguments = make_array(2);
    array_at_put(context->arguments, 0, symbol_known_to_the_vm("return:"));
    // Return nil by default;
    array_at_put(context->arguments, 1, (object)fools_system->nil);
    idoit_context->return_context = (object)context;

    transfer(idoit_context);
}
*/

// iconst>>eval
void iconst_eval(context_object context) {
    context_object iconst_context = array_at(context->arguments, 0).context;
    iconst_object iconst = iconst_context->self.instruction.iconst;
    
    array_at_put(iconst_context->return_context.context->arguments, 1,
                 iconst->constant);

    return_from_context(iconst_context);
}

// Native class handling

void with_native_class_lookup(context_object context) {
    context_object class_context    = array_at(context->arguments, 0).context;
    context_object receiver_context = array_at(class_context->arguments, 0).context;
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
