#ifndef ANNOTATION_H
#define ANNOTATION_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_ANNOTATION_SIZE 2
#define AST_ANNOTATION_VARS L"selector"

struct AST_Annotation_t {
    uns_int size;
    Object  selector;
    Object  arguments[];
};

CREATE_INITIALIZERS(AST_Annotation);

extern AST_Annotation new_AST_Annotation_raw(Object selector, uns_int argc);
extern AST_Annotation new_AST_Annotation(Object selector, uns_int argc, ...);

/* ========================================================================= */

#endif // ANNOTATION_H

