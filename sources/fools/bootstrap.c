#include <bootstrap.h>
#include <primitives.h>
#include <system.h>
#include <ast.h>
#include <assert.h>

fools_object fools_system;

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

#define define_symbol(idx, value)\
    raw_array_at_put(fools_system->symbols_known_to_the_vm,\
                     idx,\
                     (object)make_string(value))
    
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
    define_symbol(DOEVAL_WITHARGUMENTS, "doEval:withArguments:");
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

    fools_system->ilist_class = wrap_dispatcher(ilist_dispatch);
    fools_system->iconst_class = wrap_dispatcher(iconst_dispatch);
    fools_system->icall_class = wrap_dispatcher(icall_dispatch);

    fools_system->iassign_class = make_native_class(2);
    define_native(iassign_class, EVAL,                  iassign_eval);
    define_native(iassign_class, PRE_EVAL_ENV,          pre_eval_env);

    fools_system->ivar_class = make_native_class(3);
    define_native(ivar_class, EVAL,                     ivar_eval);
    define_native(ivar_class, ASSIGN_IN,                ivar_assign);
    define_native(ivar_class, PRE_EVAL_ENV,             pre_eval_env);

    fools_system->icapture_class = make_native_class(1);
    define_native(icapture_class, EVAL,                 icapture_eval);

    fools_system->icapture = (object)make_icapture();

    fools_system->env_class = make_native_class(6);
    define_native(env_class, FETCH_FROM,                env_fetch_from);
    define_native(env_class, STORE_AT_IN,               env_store_at_in);
    define_native(env_class, SUBSCOPE_KEY,              env_subscope);
    define_native(env_class, ENV_SET_PARENT,            env_set_env_parent);
    define_native(env_class, PARENT,                    env_set_parent);
    define_native(env_class, ENV_PARENT,                env_parent);

    fools_system->iscope_metaclass = make_native_class(1);
    define_native(iscope_metaclass, ENV_NEW_SIZE,       iscope_new);

    fools_system->iscope = make_empty_object(iscope_metaclass);

    fools_system->iscope_class = make_native_class(3);
    define_native(iscope_class, EVAL_WITHARGUMENTS,     iscoped_eval_arguments);
    define_native(iscope_class, DOEVAL_WITHARGUMENTS,   iscoped_eval);
    define_native(iscope_class, SCOPE_IN_ENV,           iscoped_scope);

    fools_system->appcall_class = wrap_dispatcher(appcall_dispatch);

    fools_system->number_class = make_native_class(0);

    return fools_system;
}
