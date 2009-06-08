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
    
#define empty_class (object)make_object(0, (object)fools_system->nil);

fools_object bootstrap() {
    fools_system                            = NEW(struct fools);
    fools_system->nil                       = make_nil();

    fools_system->number_class      = incomplete_class(number);
    fools_system->dict_class        = wrap_dispatcher(dict_dispatch);
    fools_system->dict_metaclass    = wrap_dispatcher(dict_class_dispatch);

    fools_system->ilist_class    = incomplete_class(ilist);
    fools_system->iconst_class   = incomplete_class(iconst);
    fools_system->icall_class    = incomplete_class(icall);
    fools_system->iassign_class  = incomplete_class(iassign);
    fools_system->ivar_class     = incomplete_class(ivar);
    fools_system->icapture_class = incomplete_class(icapture);
    fools_system->iscoped_class  = incomplete_class(iscoped);
    fools_system->env_class      = incomplete_class(env);
    fools_system->fixed_class    = incomplete_class(fixed);

    fools_system->array_class    = incomplete_class(array);
    fools_system->string_class   = incomplete_class(string);

    // Build after building the array_class!
    fools_system->empty = (array_object)make_object(1, (object)fools_system->nil);
    fools_system->empty->size               = 0;
    header(fools_system->empty)             = fools_system->array_class;
    
    /* Special cases which are never to be exposed to the outside world. 
     * They are only used internally to navigate to the right object or flag
     * that an instance 'doesNotUnderstand' a message.
     */
    fools_system->ifixed_class      = wrap_dispatcher(ifixed_class_dispatch);
    fools_system->ifixed_stub_class = wrap_dispatcher(ifixed_class_stub_dispatch);
    fools_system->iarray_class      = wrap_dispatcher(iarray_class_dispatch);
    fools_system->iarray_stub_class = wrap_dispatcher(iarray_class_stub_dispatch);

    fools_system->level_shifter     = wrap_dispatcher(shift_level);

    fools_system->icapture      = (object)make_icapture();
    fools_system->ifixed        = make_empty_object(fixed_class);
    fools_system->dict          = make_empty_object(dict_metaclass);

    init_thread();

    bootstrap_scheme();

    return fools_system;
}
