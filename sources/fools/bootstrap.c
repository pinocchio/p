#include <bootstrap.h>
#include <primitives.h>
#include <system.h>
#include <ast.h>
#include <assert.h>

fools_object fools_system;

#define define_native(cls, name, native)\
    do_define_native(fools_system->cls, name, &native)

void inline do_define_native(native_class_object cls,
                          const char* name,
                          transfer_target native) {
    dict_at_put(cls->natives,
                symbol_known_to_the_vm(name),
                (object)make_native(native));
}

fools_object bootstrap() {
    fools_system                            = NEW(struct fools);
    fools_system->nil                       = make_nil();
    fools_system->empty = (array_object)make_object(1, (object)fools_system->nil);
    fools_system->empty->size               = make_number(0);
    fools_system->native                    = (object)make_native(&native);
 
    header(fools_system->native.pointer)    = fools_system->native;

    fools_system->symbols_known_to_the_vm   = make_array(14);

    fools_system->native_metaclass = (object)make_native(&with_native_class_lookup);

// currently broken.
//    fools_system->dict_class = make_native_class(2);
//    header(fools_system->dict_class->natives) = (object)fools_system->dict_class;
//    define_native(dict_class, "at:",                    prim_dict_at);
//    define_native(dict_class, "at:put:",                prim_dict_at_put);

    fools_system->ilist_class = make_native_class(2);
    define_native(ilist_class, "return:env:continue:",  ilist_continue_eval);
    define_native(ilist_class, "eval:",                 ilist_eval);
    
    fools_system->iconst_class = make_native_class(1);
    define_native(iconst_class, "eval:",                iconst_eval);

    fools_system->icall_class = make_native_class(2);
    define_native(icall_class, "eval:",                 icall_eval);
    define_native(icall_class, "invoke:env:",           icall_invoke);

    fools_system->iassign_class = make_native_class(1);
    define_native(iassign_class, "eval:",               iassign_eval);

    fools_system->ivar_class = make_native_class(2);
    define_native(ivar_class, "eval:",                  ivar_eval);
    define_native(ivar_class, "assign:in:",             ivar_assign);

    fools_system->icapture_class = make_native_class(1);
    define_native(icapture_class, "eval:",              icapture_eval);

    fools_system->icapture = (object)(instruction)make_icapture();

    fools_system->env_class = make_native_class(4);
    define_native(env_class, "fetch:from:",             prim_env_fetch_from);
    define_native(env_class, "store:at:in:",            prim_env_store_at_in);
    define_native(env_class, "subScopeFor:arguments:",  prim_env_subscope);
    define_native(env_class, "parent:",                 prim_env_set_parent);
    define_native(env_class, "parent",                  prim_env_parent);

    fools_system->iscope_metaclass = make_native_class(1);
    define_native(iscope_metaclass, "env:new:size:",    prim_iscope_new);

    fools_system->iscope =
        (object)make_object(0, (object)fools_system->iscope_metaclass);

    fools_system->iscope_class = make_native_class(2);
    define_native(iscope_class, "eval:",                iscoped_eval);
    define_native(iscope_class, "scope",                prim_iscoped_scope);

    fools_system->ivinstr_class = make_native_class(2);
    define_native(ivinstr_class, "eval:",               icall_eval);
    define_native(ivinstr_class, "invoke:env:",         ivinstr_invoke);


    return fools_system;
}
