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
	NEW_ARRAYED(Array, Object, size);
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
