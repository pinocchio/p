#include <ast.h>
#include <bootstrap.h>
#include <system.h>
#include <assert.h>
#include <stdio.h>

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

icall_object make_icall(object interpreter, int argsize) {
    icall_object result = NEW(struct callable);
    header(result)      = (object)fools_system->icall_class;
    result->interpreter = interpreter;
    result->arguments   = make_array(argsize);
    return result;
}

iconst_object make_iconst(object constant) {
    iconst_object result    = NEW(struct constant);
    header(result)          = (object)fools_system->iconst_class;
    result->constant        = constant;
    //printf("new iconst: %p for %p\n", result, constant.pointer);
    return result;
}

ivar_object make_ivar() {
    ivar_object result      = NEW(struct variable);
    header(result)          = (object)fools_system->ivar_class;
    result->scope           = (object)fools_system->nil;
    result->index           = make_number(0);
    return result;
}

icapture_object make_icapture() {
    icapture_object result  = NEW(struct capture);
    header(result)          = (object)fools_system->icapture_class;
    return result;
}

appcall_object make_appcall(object expression, int argsize) {
    appcall_object result   = NEW(struct appcall);
    header(result)          = (object)fools_system->appcall_class;
    result->expression      = expression;
    result->arguments       = make_array(argsize);
    return result;
}

dircall_object make_dircall(object interpreter, int argsize) {
    dircall_object result   = NEW(struct dircall);
    header(result)          = (object)fools_system->dircall_class;
    result->interpreter     = interpreter;
    result->arguments       = make_array(argsize);
    return result;
}

iscoped_object make_iscoped(object scope, object expression, object argsize) {
    iscoped_object result   = NEW(struct scoped);
    header(result)          = (object)fools_system->iscope_class;
    result->scope           = scope;
    result->expression      = expression;
    result->argsize         = argsize;
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

object inline raw_ilist_at(ilist_object ilist, int index) {
    return ilist->instructions[index];
}

void inline raw_ilist_at_put(ilist_object ilist, int index, object value) {
    ilist->instructions[index] = value;
}

void inline ilist_at_put(ilist_object ilist, int index, object value) {
    ilist_check_bounds(ilist, index);
    raw_ilist_at_put(ilist, index, value);
}

void inline set_callarg(icall_object icall, int index, object value) {
    array_at_put(icall->arguments, index, value);
}

void inline set_callmsg(icall_object icall, object msg) {
    set_callarg(icall, 0, msg);
}

void inline set_appcarg(appcall_object appcall, int index, object value) {
    array_at_put(appcall->arguments, index, value);
}

void inline set_appcmsg(appcall_object appcall, object msg) {
    set_appcarg(appcall, 0, msg);
}

void inline set_dircarg(dircall_object dircall, int index, object value) {
    array_at_put(dircall->arguments, index, value);
}

void inline set_dircmsg(dircall_object dircall, object msg) {
    set_dircarg(dircall, 0, msg);
}
