#ifndef TYPE_OBJECT_H
#define TYPE_OBJECT_H

#include <pinocchio.h>

/* ========================================================================= */

#define OBJECT_SIZE 0
#define OBJECT_VARS

/* ========================================================================= */

struct Object_t {
    Optr ivals[0]; 
};

CREATE_INITIALIZERS(Object)

/* ========================================================================= */

extern SmallInt Object_hash(Object object);

/* ========================================================================= */

#endif // TYPE_OBJECT_H
