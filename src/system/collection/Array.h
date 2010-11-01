#ifndef ARRAY_H
#define ARRAY_H

#include <pinocchio.h>

/* ========================================================================= */

struct Array_t {
#ifdef ARRAY_WRAPPED
	SmallInt size;
#else //ARRAY_WRAPPED
    uns_int size;
#endif //ARRAY_WRAPPED
    Optr  values[];
};

#ifdef ARRAY_WRAPPED
	ARRAY_SIZE(array) ((Array)(array))->size->value
	SET_ARRAY_SIZE(array, size) ((Array)(array))->size = new_SmallInt(size)
#else //ARRAY_WRAPPED
	ARRAY_SIZE(array) ((Array)(array))->size
    SET_ARRAY_SIZE(array, size) ((Array)(array))->size = (size)
#endif //ARRAY_WRAPPED


extern Array empty_Array;

CREATE_INITIALIZERS(Array);

extern void late_init_Array();

extern Array new_Array_raw(uns_int c);
extern Array new_Array(uns_int c, Optr v[]);
extern Array new_Array_with(uns_int c, ...);
extern Array new_Array_withAll(uns_int c, Optr element);
extern Optr raw_Array_at(Array array, Optr tag, long index);
extern void raw_Array_at_put(Array array, Optr tag,
                                  long index, Optr value);
/* ========================================================================= */

#endif // ARRAY_H
