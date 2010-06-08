#ifndef TYPE_OBJECT_H
#define TYPE_OBJECT_H

#include <pinocchio.h>

/* ========================================================================= */

#define OBJECT_SIZE 0
#define OBJECT_VARS

/* ========================================================================= */

struct Type_Object_t {
    Optr ivals[0]; 
};

CREATE_INITIALIZERS(Type_Object)

/* ========================================================================= */

extern Optr Object_instVarAt_(Optr self, int index);
extern void Object_instVarAt_put_(Optr self, int index, Optr value);

extern SmallInt Type_Object_hash(Type_Object object);
/* ========================================================================= */

#endif // TYPE_OBJECT_H
