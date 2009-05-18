#include <bootstrap.h>
#include <primitives.h>
#include <system.h>
#include <assert.h>
#include <thread.h>

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
object NEW_SIZE;
// Iscope
object EVAL_WITHARGUMENTS;
object SCOPE_IN_ENV;
object SHIFT;
// Ifixed
object DISPATCH;
object OBJECT_AT;
object OBJECT_AT_PUT;
object NEW;
object DELEGATE;
object SIZE;
object DISPATCH_DELEGATE_SIZE;

#define make_empty_object(cls)\
    (object)make_object(0, (object)fools_system->cls)

#define wrap_dispatcher(dispatch) (object)make_native(dispatch)

#define define_symbol(name, value)\
    name = (object)make_string(value);
    //raw_array_at_put(fools_system->symbols_known_to_the_vm,
    //                 idx,
    //                 name)
    
void bootstrap_symbols() {
    define_symbol(EVAL,                     "eval:");
    define_symbol(PRE_EVAL_ENV,             "preEval:env:");
    define_symbol(ASSIGN_IN,                "assign:in:");
    define_symbol(FETCH_FROM,               "fetch:from:");
    define_symbol(STORE_AT_IN,              "store:at:in:");
    define_symbol(SUBSCOPE_KEY,             "subScope:key:");
    define_symbol(ENV_PARENT,               "envParent:");
    define_symbol(ENV_SET_PARENT,           "env:parent:");
    define_symbol(PARENT,                   "parent:");
    define_symbol(NEW_SIZE,                 "new:size:");
    define_symbol(EVAL_WITHARGUMENTS,       "eval:withArguments:");
    define_symbol(SCOPE_IN_ENV,             "scope:in:env:");
    define_symbol(DISPATCH,                 "dispatch");
    define_symbol(OBJECT_AT,                "objectAt:");
    define_symbol(OBJECT_AT_PUT,            "objectAt:put:");
    define_symbol(NEW,                      "basicNew");
    define_symbol(DELEGATE,                 "delegate");
    define_symbol(SIZE,                     "size");
    define_symbol(DISPATCH_DELEGATE_SIZE,   "dispatch:delegate:size:");
    define_symbol(SHIFT,                    "shift");
}

#define empty_class (object)make_object(1, (object)fools_system->nil);

fools_object bootstrap() {
    fools_system                            = NEW(struct fools);
    fools_system->nil                       = make_nil();

    // This has to go!
    fools_system->native                    = (object)make_native(&native);
    header(fools_system->native.pointer)    = fools_system->native;
    // This has to go!

    fools_system->string_class  = empty_class;
    fools_system->number_class  = empty_class;
    fools_system->array_class   = wrap_dispatcher(array_dispatch);

    fools_system->empty = (array_object)make_object(1, (object)fools_system->nil);
    fools_system->empty->size               = make_number(0);
    header(fools_system->empty)             = fools_system->array_class;
    fools_system->symbols_known_to_the_vm   = make_array(NBR_SYMBOLS);

    bootstrap_symbols();

    fools_system->ilist_class       = wrap_dispatcher(ilist_dispatch);
    fools_system->iconst_class      = wrap_dispatcher(iconst_dispatch);
    fools_system->icall_class       = wrap_dispatcher(icall_dispatch);
    fools_system->iassign_class     = wrap_dispatcher(iassign_dispatch);
    fools_system->ivar_class        = wrap_dispatcher(ivar_dispatch);
    fools_system->icapture_class    = wrap_dispatcher(icapture_dispatch);
    fools_system->iscoped_class     = wrap_dispatcher(iscoped_dispatch);
    fools_system->iscoped_metaclass = wrap_dispatcher(iscoped_class_dispatch);
    fools_system->ifixed_class      = wrap_dispatcher(ifixed_dispatch);
    fools_system->ifixed_metaclass  = wrap_dispatcher(ifixed_class_dispatch);
    fools_system->env_class         = wrap_dispatcher(env_dispatch);

    fools_system->level_shifter     = wrap_dispatcher(shift_level);

    fools_system->icapture  = (object)make_icapture();
    fools_system->iscoped   = make_empty_object(iscoped_metaclass);
    fools_system->ifixed    = make_empty_object(ifixed_metaclass);

    init_thread();

    return fools_system;
}
