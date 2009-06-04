#include <bootstrap.h>
#include <primitives.h>
#include <system.h>
#include <assert.h>
#include <thread.h>
#include <scheme/natives.h>

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
object SET_PARENT;
object PARENT;
// Iscope_class
object NEW_SIZE;
// Iscope
object IAPPLY;
object APPLY_IN;
object SCOPE;
object SHIFT;
// Ifixed
object OBJECT_AT;
object OBJECT_AT_PUT;
object NEW;
object SIZED;
object DELEGATE;
object SIZE;
object DISPATCH_DELEGATE_SIZE;
object DISPATCH_SIZE;
object SET_DELEGATE;

#define make_empty_object(cls)\
    (object)make_object(0, (object)fools_system->cls)

#define wrap_dispatcher(dispatch) (object)make_native(dispatch)

#define define_symbol(name, value)\
    name = (object)make_string(value);
    
#define empty_class (object)make_object(1, (object)fools_system->nil);

fools_object bootstrap() {
    fools_system                            = NEW(struct fools);
    fools_system->nil                       = make_nil();

    fools_system->string_class      = wrap_dispatcher(string_dispatch);
    fools_system->number_class      = empty_class;
    fools_system->array_class       = wrap_dispatcher(array_dispatch);
    fools_system->array_metaclass   = wrap_dispatcher(array_class_dispatch);
    fools_system->dict_class        = wrap_dispatcher(dict_dispatch);
    fools_system->dict_metaclass    = wrap_dispatcher(dict_class_dispatch);

    fools_system->empty = (array_object)make_object(1, (object)fools_system->nil);
    fools_system->empty->size               = 0;
    header(fools_system->empty)             = fools_system->array_class;
    fools_system->symbols_known_to_the_vm   = make_array(NBR_SYMBOLS);

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
    fools_system->ifixed_stub_metaclass  = wrap_dispatcher(ifixed_stub_class_dispatch);
    fools_system->env_class         = wrap_dispatcher(env_dispatch);

    fools_system->level_shifter     = wrap_dispatcher(shift_level);

    fools_system->icapture  = (object)make_icapture();
    fools_system->iscoped   = make_empty_object(iscoped_metaclass);
    fools_system->ifixed    = make_empty_object(ifixed_metaclass);
    fools_system->ifixed_stub = make_empty_object(ifixed_stub_metaclass);
    fools_system->dict      = make_empty_object(dict_metaclass);
    fools_system->array     = make_empty_object(array_metaclass);

    init_thread();

    bootstrap_scheme();

    return fools_system;
}
