#ifndef ANNOTATION_H
#define ANNOTATION_H

#include <pinocchio.h>

/* ========================================================================= */

struct AST_Annotation_t {
    uns_int size;
    Object  selector;
    Object  arguments[];
};

extern AST_Annotation new_AST_Annotation_raw(Object selector, uns_int argc);
extern AST_Annotation new_AST_Annotation(Object selector, uns_int argc, ...);

/* ========================================================================= */

extern AST_Annotation lookup_annotation(Collection_Array annotations,
                                        Object selector);

/* ========================================================================= */

#endif // ANNOTATION_H

