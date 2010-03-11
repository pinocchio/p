#include <stdarg.h>
#include <system/ast/Annotation.h>

/* ========================================================================= */

Type_Class AST_Annotation_Class;

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

void pre_init_AST_Annotation()
{
    AST_Annotation_Class = new_Class_named(Type_Object_Class,
                                     L"Annotation",
                                     CREATE_ARRAY_TAG(AST_ANNOTATION));
}

/* ========================================================================= */

/* ========================================================================= */

void post_init_AST_Annotation(){}

