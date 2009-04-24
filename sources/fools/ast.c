#include <ast.h>
#include <bootstrap.h>
#include <system.h>
#include <assert.h>

ilist_object make_ilist(int size) {
    ilist_object result = NEW_ARRAYED(ilist_object, object, size + 1);
    header(result)      = (object)fools_system->ilist_class;
    result->size        = make_number(size);
    return result;
}

iassign_object make_iassign(ivar_object variable, object expression) {
    iassign_object result   = NEW(struct assignment);
    result->variable        = variable;
    result->expression      = expression;
    header(result)          = (object)fools_system->iassign_class;
    return result;
}

icall_object make_icall(object receiver, int argsize) {
    icall_object result = NEW(struct callable);
    header(result)      = (object)fools_system->icall_class;
    result->receiver    = receiver;
    result->arguments   = make_array(argsize);
    return result;
}

iconst_object make_iconst(object constant) {
    iconst_object result    = NEW(struct constant);
    header(result)          = (object)fools_system->iconst_class;
    result->constant        = constant;
    return result;
}

ivar_object make_ivar(object scope, number_object index) {
    ivar_object result      = NEW(struct variable);
    header(result)          = (object)fools_system->ivar_class;
    result->scope           = scope;
    result->index           = index;
    return result;
}

// Accessors 

number_object inline ilist_size(ilist_object ilist) {
    return ilist->size;
}

void inline ilist_check_bounds(ilist_object ilist, int index) {
    assert(0 <= index);
    assert(index < number_value(ilist_size(ilist)));
}

instruction inline raw_ilist_at(ilist_object ilist, int index) {
    return ilist->instructions[index];
}

void inline raw_ilist_at_put(ilist_object ilist, int index, instruction value) {
    ilist->instructions[index] = value;
}

void inline ilist_at_put(ilist_object ilist, int index, instruction value) {
    ilist_check_bounds(ilist, index);
    raw_ilist_at_put(ilist, index, value);
}

void inline eval_instruction(instruction instruction) {
    // TODO: cache array with eval
    context_object context = make_context((object)instruction, 1);
    array_at_put(context->arguments, 0, symbol_known_to_the_vm("eval:"));
    transfer(context);
}

void inline variable_assign(ivar_object variable, env_object env, object value) {
    array_at_put(((object)env).array,
                 number_value(variable->index),
                 value);
}

object inline variable_value(ivar_object variable, env_object env) {
    return array_at(((object)env).array,
                    number_value(variable->index));
}
