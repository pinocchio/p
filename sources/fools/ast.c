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

iassign_object make_iassign() {
    iassign_object result = NEW(struct assignment);
    return result;
}

icall_object make_icall() {
    icall_object result = NEW(struct callable);
    return result;
}

iconst_object make_iconst(object constant) {
    iconst_object result    = NEW(struct constant);
    header(result)          = (object)fools_system->iconst_class;
    result->constant        = constant;
    return result;
}

idoit_object make_idoit(object expression) {
    idoit_object result = NEW(struct doit);
    header(result)      = (object)fools_system->idoit_class;
    result->expression  = expression;
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
