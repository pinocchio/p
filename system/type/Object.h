#ifndef TYPE_OBJECT_H
#define TYPE_OBJECT_H

#include <pinocchio.h>

/* ========================================================================= */

#define OBJECT_SIZE 0
#define OBJECT_VARS

/* ========================================================================= */

struct Type_Object_t {
    Object ivals[0]; 
};

CREATE_INITIALIZERS(Type_Object)
extern void inter_init_Type_Object();

/* ========================================================================= */

extern void NM_Type_Object_equals(Object self, Object class, uns_int argc);

/* ========================================================================= */

Object raw_Type_Object_at(Type_Object o, Object tag, uns_int index);
void raw_Type_Object_at_put(Type_Object o, Object tag,
                            uns_int index, Object value);

/* ========================================================================= */

#endif // TYPE_OBJECT_H
