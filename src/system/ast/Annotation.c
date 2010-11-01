#include <stdarg.h>
#include <system/ast/Annotation.h>

/* ========================================================================= */

Annotation new_Annotation_raw(Optr selector, uns_int argc) {
    NEW_ARRAY_OBJECT(Annotation, Optr[argc]);
    result->selector = selector;
    SET_SIZE(result, argc);
    return result;
}

Annotation new_Annotation(Optr selector, uns_int argc, ...)
{
    Annotation result = new_Annotation_raw(selector, argc);
    va_list args;
    va_start(args, argc);
    long idx;
    for (idx = 0; idx < argc; idx++) {
        result->arguments[idx] = va_arg(args, Optr);
    }
    va_end(args);
    return result;
}

/* ========================================================================= */

Annotation lookup_annotation(Array annotations, Optr selector)
{
    assert1(HEADER(annotations) == Array_Class, "Annotations should be an array");
    long i;
    for (i = 0; i < GET_SIZE(annotations); i++) {
        Annotation annotation = (Annotation)annotations->values[i];
        if (HEADER(annotation) != Annotation_Class) { continue; }
        if (annotation->selector == selector) {
            return annotation;
        }
    }
    return NULL;
}

/* ========================================================================= */
