#ifndef ARRAY_H
#define ARRAY_H

#include <pinocchio.h>

/* ========================================================================= */

#ifdef ARRAY_WRAPPED
    #define ARRAY_SIZE(array) ((Array)(array))->size->value
    #define SET_ARRAY_SIZE(array, size) ((Array)(array))->size = new_SmallInt(value)
#else //ARRAY_WRAPPED
    #define ARRAY_SIZE(array) ((Array)(array))->size
    #define SET_ARRAY_SIZE(array, value) ((Array)(array))->size = (value)
#endif //ARRAY_WRAPPED

/* ========================================================================= */

struct Array_t {
#ifdef ARRAY_WRAPPED
	SmallInt size;
#else //ARRAY_WRAPPED
    uns_int size;
#endif //ARRAY_WRAPPED
    Optr  values[];
};

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
