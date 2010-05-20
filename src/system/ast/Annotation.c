#include <stdarg.h>
#include <system/ast/Annotation.h>

/* ========================================================================= */

AST_Annotation new_AST_Annotation_raw(Object selector, uns_int argc) {
    NEW_ARRAY_OBJECT(AST_Annotation, Object[argc]);
    result->selector = selector;
    result->size     = argc;
    return result;
}

AST_Annotation new_AST_Annotation(Object selector, uns_int argc, ...)
{
    AST_Annotation result = new_AST_Annotation_raw(selector, argc);
    va_list args;
    va_start(args, argc);
    int idx;
    for (idx = 0; idx < argc; idx++) {
        result->arguments[idx] = va_arg(args, Object);
    }
    va_end(args);
    return result;
}

/* ========================================================================= */

AST_Annotation lookup_annotation(Collection_Array annotations, Object selector)
{
    assert1(HEADER(annotations) == Collection_Array_Class, "Annotations should be an array");
    int i;
    for (i = 0; i < annotations->size; i++) {
        AST_Annotation annotation = (AST_Annotation)annotations->values[i];
        if (HEADER(annotation) != AST_Annotation_Class) { continue; }
        if (annotation->selector == selector) {
            return annotation;
        }
    }
    return NULL;
}

/* ========================================================================= */
