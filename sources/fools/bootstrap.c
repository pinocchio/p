#include <bootstrap.h>
#include <primitives.h>
#include <system.h>
#include <assert.h>
#include <thread.h>
#include <scheme/natives.h>

// System global
fools_object fools_system;

#define make_empty_object(cls)\
    (object)make_object(0, (object)fools_system->cls)

#define wrap_dispatcher(dispatch) (object)make_native(dispatch)
#define build_native_class(header, cdisp)\
    (object)make_native_class(header, cdisp##_##stub_dispatch)

#define define_symbol(name, value)\
    name = (object)make_string(value);

#define incomplete_class(name)\
    build_native_class(wrap_dispatcher(name##_##class_stub_dispatch),\
                       name)

#define incomplete_ifixed_class(name, size)\
    name = make_class((object)make_number(size), &ifixed_stub_dispatch);\
    header(name.pointer) = fools_system->ifixed_stub_class;

#define incomplete_typed_class(type)\
    build_native_class(fools_system->type##_##stub_class, type);

#define setup_type(type)\
    fools_system->type##_##class =\
        wrap_dispatcher(type##_##class_dispatch);\
    fools_system->type##_##stub_class =\
        wrap_dispatcher(type##_##class_stub_dispatch);
    
#define empty_class (object)make_object(0, (object)fools_system->nil);

fools_object bootstrap() {
    fools_system                            = NEW(struct fools);
    fools_system->nil                       = make_nil();

    fools_system->ilist_class    = incomplete_class(ilist);
    fools_system->iconst_class   = incomplete_class(iconst);
    fools_system->icall_class    = incomplete_class(icall);
    fools_system->iassign_class  = incomplete_class(iassign);
    fools_system->ivar_class     = incomplete_class(ivar);
    fools_system->icapture_class = incomplete_class(icapture);
    fools_system->iscoped_class  = incomplete_class(iscoped);
    fools_system->env_class      = incomplete_class(env);
    fools_system->fixed_class    = incomplete_class(fixed);
    fools_system->number_class   = incomplete_class(number);

    /* Objects used for handling types; these should not be exposed to the
     * outside world as they are internal objects
     */
    setup_type(ifixed);
    setup_type(iarray);
    setup_type(istring);
    setup_type(idict);

    fools_system->array_class  = incomplete_typed_class(iarray);
    fools_system->string_class = incomplete_typed_class(istring);
    fools_system->symbol_class = incomplete_typed_class(istring);
    fools_system->dict_class   = incomplete_typed_class(idict);
    incomplete_ifixed_class(fools_system->nil_class, 0);

    // Build after building the array_class!
    fools_system->empty = (array_object)make_object(1, (object)fools_system->nil);
    fools_system->empty->size   = 0;
    header(fools_system->empty) = fools_system->array_class;
    // Set after building the nil_class
    header(fools_system->nil) = fools_system->nil_class;

    fools_system->level_shifter = wrap_dispatcher(shift_level);

    fools_system->icapture      = (object)make_icapture();
    fools_system->ifixed        = make_empty_object(fixed_class);

    init_thread();

    bootstrap_scheme();

    return fools_system;
}
