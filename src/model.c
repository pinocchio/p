#include <model.h>
#include <bootstrap.h>
#include <thread.h>
#include <system/type/array.h>
#include <system/type/object.h>

native_object make_native(transfer_target native) {
    // Natives don't need a header, so we just allocate what we need.
    native_object result    = (native_object)PALLOC(sizeof(struct native));
    result->target          = (object)native;
    return result;
}

native_class_object make_native_class(object header, transfer_target cdisp) {
    native_class_object result  = NEW(struct native_class);
    header(result)              = header;
    result->cdisp               = (object)cdisp;
    return result;
}

// Accessors

transfer_target inline native_target(native_object native) {
    return native->target.target;
}
