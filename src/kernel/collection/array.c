#include <pinocchio.h>

/* ======================================================================= */
Class Array_class;
Array empty_array;
/* ======================================================================= */

Array new_Array_with(uns_int size, ...)
{
	if (size == 0) {
		return empty_array;
	}
    va_list args;
    va_start(args, size);
	NEW_ARRAYED(Array, Object, size);
    uns_int i;
    for (i = 0; i < size; i++) {
        result->data[i] = va_arg(args, void**);
    }
    va_end(args);
	return result;
}

Array new_Array(uns_int size)
{
	if (size == 0) {
		return empty_array;
	}
	NEW_ARRAYED(Array, Object, size);
	return result;
}
