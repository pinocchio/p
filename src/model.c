#include <model.h>
#include <assert.h>
#include <bootstrap.h>
#include <thread.h>
#include <system/type/array.h>

object_object make_object(int size, object interpreter) {
    object_object result  = NEW_ARRAYED(object_object, object, size);
    header(result)        = interpreter;
    int i;
    for (i = 0; i < size; i++) {
        object_at_put(result, i, (object)woodstock->nil);
    }
    return result;
}

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

object inline object_at(object_object object, int index) {
    return object->fields[index];
}

void inline object_at_put(object_object o, int index, object value) {
    o->fields[index] = value;
}

int inline isinstance(object o, object class) {
	return pheader(o.pointer) == class.pointer;
}

object inline cast_check(object o, object class) {
	if (isinstance(o, class)) {
		return o;
	}
	// XXX error handler here
	return o;
}
