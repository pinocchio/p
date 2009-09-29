#ifndef TYPE_OBJECT_H
#define TYPE_OBJECT_H

#include <pinocchio.h>

/* ========================================================================== */

struct Type_Object_t {
    Object ivals[0]; 
};

CREATE_INITIALIZERS(Type_Object)

/* ======================================================================== */

#endif // TYPE_OBJECT_H
