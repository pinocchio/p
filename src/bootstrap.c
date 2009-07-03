#include <bootstrap.h>
#include <primitives.h>
#include <system.h>
#include <assert.h>
#include <thread.h>
#include <scheme/natives.h>

// System global
fools_object fools_system;

#define make_sized_object(cls, size)\
    ((object)make_object(size, (object)fools_system->cls))

#define wrap_dispatcher(dispatch) (object)make_native(dispatch)
#define build_native_class(header, cdisp)\
    (object)make_native_class(header, cdisp##_##stub_dispatch)

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
    
fools_object bootstrap() {
    fools_system                    = NEW(struct fools);
    fools_system->nil               = make_nil();

    fools_system->ilist_class       = incomplete_class(ilist);
    fools_system->iconst_class      = incomplete_class(iconst);
    fools_system->icall_class       = incomplete_class(icall);
    fools_system->iassign_class     = incomplete_class(iassign);
    fools_system->ivar_class        = incomplete_class(ivar);
    fools_system->icapture_class    = incomplete_class(icapture);
    fools_system->iscoped_class     = incomplete_class(iscoped);
    fools_system->env_class         = incomplete_class(env);
    fools_system->fixed_class       = incomplete_class(fixed);
    fools_system->number_class      = incomplete_class(number);

    /* Objects used for handling types; these should not be exposed to the
     * outside world as they are internal objects
     */
    setup_type(ifixed);
    setup_type(iarray);
    setup_type(istring);
    setup_type(idict);
    setup_type(infile);
    setup_type(outfile);
    setup_type(char);

    fools_system->array_class       = incomplete_typed_class(iarray);
    fools_system->string_class      = incomplete_typed_class(istring);
    fools_system->symbol_class      = incomplete_typed_class(istring);
    fools_system->dict_class        = incomplete_typed_class(idict);
    fools_system->inputfile_class   = incomplete_typed_class(infile);
    fools_system->outputfile_class  = incomplete_typed_class(outfile);
    fools_system->chr_class         = incomplete_typed_class(char);
    incomplete_ifixed_class(fools_system->nil_class, 0);

    // Build after building the array_class!
    fools_system->empty             = make_sized_object(array_class, 1).array;
    fools_system->empty->size       = 0;
    // Set after building the nil_class
    header(fools_system->nil)       = fools_system->nil_class;

    fools_system->level_shifter     = wrap_dispatcher(shift_level);

    fools_system->icapture          = make_sized_object(icapture_class, 0);
    fools_system->ifixed            = make_sized_object(fixed_class,    0);

    init_thread();
    bootstrap_scheme();

    return fools_system;
}
