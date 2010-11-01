#ifndef ANNOTATION_H
#define ANNOTATION_H

#include <pinocchio.h>

/* ========================================================================= */

struct Annotation_t {
    ARRAY_SIZE_TYPE;
    Optr  selector;
    Optr  arguments[];
};

extern Annotation new_Annotation_raw(Optr selector, uns_int argc);
extern Annotation new_Annotation(Optr selector, uns_int argc, ...);

/* ========================================================================= */

extern Annotation lookup_annotation(Array annotations,
                                        Optr selector);

/* ========================================================================= */

#endif // ANNOTATION_H

