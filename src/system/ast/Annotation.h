#ifndef ANNOTATION_H
#define ANNOTATION_H

#include <pinocchio.h>

/* ========================================================================= */

struct Annotation_t {
    uns_int size;
    Object  selector;
    Object  arguments[];
};

extern Annotation new_Annotation_raw(Object selector, uns_int argc);
extern Annotation new_Annotation(Object selector, uns_int argc, ...);

/* ========================================================================= */

extern Annotation lookup_annotation(Array annotations,
                                        Object selector);

/* ========================================================================= */

#endif // ANNOTATION_H

