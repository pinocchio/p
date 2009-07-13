#include <bootstrap.h>
#include <primitives.h>
#include <system.h>
#include <assert.h>
#include <thread.h>
#include <scheme/natives.h>

// System global
woodstock_t woodstock;

#define make_sized_object(cls, size)\
    ((object)make_object(size, (object)woodstock->cls))

#define wrap_dispatcher(dispatch) (object)make_native(dispatch)
#define build_native_class(header, cdisp)\
    (object)make_native_class(header, cdisp##_##stub_dispatch)

#define incomplete_class(name)\
    build_native_class(wrap_dispatcher(name##_##class_stub_dispatch),\
                       name)

#define incomplete_ifixed_class(name, size)\
    name = make_class((object)make_number(size), &ifixed_stub_dispatch);\
    header(name.pointer) = woodstock->ifixed_stub_class;

#define incomplete_typed_class(type)\
    build_native_class(woodstock->type##_##stub_class, type);

#define setup_type(type)\
    woodstock->type##_##class =\
        wrap_dispatcher(type##_##class_dispatch);\
    woodstock->type##_##stub_class =\
        wrap_dispatcher(type##_##class_stub_dispatch);
    
woodstock_t bootstrap() {
    woodstock                    = NEW(struct woodstock);
    woodstock->nil               = make_nil();

    woodstock->ilist_class       = incomplete_class(ilist);
    woodstock->iconst_class      = incomplete_class(iconst);
    woodstock->icall_class       = incomplete_class(icall);
    woodstock->iassign_class     = incomplete_class(iassign);
    woodstock->ivar_class        = incomplete_class(ivar);
    woodstock->icapture_class    = incomplete_class(icapture);
    woodstock->iscoped_class     = incomplete_class(iscoped);
    woodstock->env_class         = incomplete_class(env);
    woodstock->fixed_class       = incomplete_class(fixed);
    woodstock->number_class      = incomplete_class(number);

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

    woodstock->array_class       = incomplete_typed_class(iarray);
    woodstock->string_class      = incomplete_typed_class(istring);
    woodstock->symbol_class      = incomplete_typed_class(istring);
    woodstock->dict_class        = incomplete_typed_class(idict);
    woodstock->inputfile_class   = incomplete_typed_class(infile);
    woodstock->outputfile_class  = incomplete_typed_class(outfile);
    woodstock->chr_class         = incomplete_typed_class(char);
    incomplete_ifixed_class(woodstock->nil_class, 0);

    // Build after building the array_class!
    woodstock->empty             = make_sized_object(array_class, 1).array;
    woodstock->empty->size       = 0;
    // Set after building the nil_class
    header(woodstock->nil)       = woodstock->nil_class;

    woodstock->level_shifter     = wrap_dispatcher(shift_level);

    woodstock->icapture          = make_sized_object(icapture_class, 0);
    woodstock->ifixed            = make_sized_object(fixed_class,    0);

    init_thread();
    bootstrap_scheme();

    return woodstock;
}
