#ifndef OBJECT_H
#define OBJECT_H

#include <pinocchio.h>

/* ========================================================================== */

struct Type_Object_t {
    Object ivals[0]; 
};

CREATE_INITIALIZERS(Object)

/* ======================================================================== */

#endif // OBJECT_H
