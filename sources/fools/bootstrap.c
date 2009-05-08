#include <bootstrap.h>
#include <primitives.h>
#include <system.h>
#include <ast.h>
#include <assert.h>

// System global
fools_object fools_system;

// Global symbols
// General purpose
object EVAL;
object PRE_EVAL_ENV;
// Variable
object ASSIGN_IN;
object FETCH_FROM;
// Environment
object STORE_AT_IN;
object SUBSCOPE_KEY;
object ENV_PARENT;
object ENV_SET_PARENT;
object PARENT;
// Iscope_class
object ENV_NEW_SIZE;
// Iscope
object EVAL_WITHARGUMENTS;
object SCOPE_IN_ENV;

#define define_native(cls, name, native)\
    do_define_native(fools_system->cls, name, &native)

#define make_empty_object(cls)\
    (object)make_object(0, (object)fools_system->cls)

void inline do_define_native(object cls,
                             int index,
                             transfer_target native) {
    dict_at_put(cls.native_class->natives,
                symbol_known_to_the_vm(index),
                (object)make_native(native));
}

#define wrap_dispatcher(dispatch) (object)make_object(1, (object)make_native(dispatch))

#define define_symbol(name, value)\
    name = (object)make_string(value);
    //raw_array_at_put(fools_system->symbols_known_to_the_vm,
    //                 idx,
    //                 name)
    
void bootstrap_symbols() {
    define_symbol(EVAL,                 "eval:");
    define_symbol(PRE_EVAL_ENV,         "preEval:env:");
    define_symbol(ASSIGN_IN,            "assign:in:");
    define_symbol(FETCH_FROM,           "fetch:from:");
    define_symbol(STORE_AT_IN,          "store:at:in:");
    define_symbol(SUBSCOPE_KEY,         "subScope:key:");
    define_symbol(ENV_PARENT,           "envParent:");
    define_symbol(ENV_SET_PARENT,       "env:parent:");
    define_symbol(PARENT,               "parent:");
    define_symbol(ENV_NEW_SIZE,         "env:new:size:");
    define_symbol(EVAL_WITHARGUMENTS,   "eval:withArguments:");
    define_symbol(SCOPE_IN_ENV,         "scope:in:env:");
}

fools_object bootstrap() {
    fools_system                            = NEW(struct fools);
    fools_system->nil                       = make_nil();
    fools_system->empty = (array_object)make_object(1, (object)fools_system->nil);
    fools_system->empty->size               = make_number(0);
    fools_system->native                    = (object)make_native(&native);
 
    header(fools_system->native.pointer)    = fools_system->native;

    fools_system->symbols_known_to_the_vm   = make_array(NBR_SYMBOLS);

    fools_system->native_metaclass = (object)make_native(&with_native_class_lookup);

    fools_system->string_class = make_native_class(0);
    fools_system->array_class = make_native_class(0);

    bootstrap_symbols();

    fools_system->ilist_class       = wrap_dispatcher(ilist_dispatch);
    fools_system->iconst_class      = wrap_dispatcher(iconst_dispatch);
    fools_system->icall_class       = wrap_dispatcher(icall_dispatch);
    fools_system->iassign_class     = wrap_dispatcher(iassign_dispatch);
    fools_system->ivar_class        = wrap_dispatcher(ivar_dispatch);
    fools_system->icapture_class    = wrap_dispatcher(icapture_dispatch);
    fools_system->iscope_class      = wrap_dispatcher(iscoped_dispatch);
    fools_system->iscope_metaclass  = wrap_dispatcher(iscoped_class_dispatch);
    fools_system->appcall_class     = wrap_dispatcher(appcall_dispatch);
    fools_system->dircall_class     = wrap_dispatcher(dircall_dispatch);
    fools_system->env_class         = wrap_dispatcher(env_dispatch);

    fools_system->icapture = (object)make_icapture();
    fools_system->iscope = make_empty_object(iscope_metaclass);

    fools_system->number_class = make_native_class(0);

    return fools_system;
}
