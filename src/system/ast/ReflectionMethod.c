#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>
#include <lib/lib.h>
#include <system/ast/ReflectionMethod.h>

/* ========================================================================= */

DECLARE_CLASS(AST_ReflectionMethod);

/* ========================================================================= */

AST_ReflectionMethod new_AST_ReflectionMethod_with(Collection_Array params,
                               Collection_Array locals,
                               Collection_Array annotations,
                               uns_int statementCount, ...)
{
    NEW_ARRAY_OBJECT(AST_ReflectionMethod, Object[statementCount]);
    result->params = params;
    result->locals = locals;
    result->annotations = annotations;
    int i;
    for (i = 0; i < annotations->size; i++) {
        assert1(annotations->values[i], "Empty annotation found..?");
    }
    init_variable_array(result->params, 0);
    init_variable_array(result->locals, result->params->size);
    result->info   = empty_AST_Info;
    result->size   = statementCount;
    result->cache  = NULL; // Should become InlineCache
    COPY_ARGS(statementCount, result->body);
    return result;
}

void pre_init_AST_ReflectionMethod()
{
    AST_ReflectionMethod_Class = new_Class(Type_Object_Class);
    REFER_TO(AST_ReflectionMethod);
}

/* ========================================================================= */

void AST_ReflectionMethod_invoke(Runtime_MethodClosure closure, Object self, Type_Class class, uns_int argc)
{
    AST_ReflectionMethod method = (AST_ReflectionMethod)closure->code;
    if (method->cache == NULL) {
        AST_Annotation annotation =
            lookup_annotation(method->annotations, 
                              (Object)SMB_pinocchioReflective_);
        assert1(annotation, "No reflection annotation found");
        assert1(annotation->size == 1, "Invalid annotation format");
        method->cache =
            (Object)lookup_native(annotation->arguments[0],
                                  (Object)SMB_Reflection_Reflection);
    }
    if (method->cache == (Object)-1) {
        return AST_Method_invoke(closure, (AST_Method)method, self, argc);
    }
    ((native)method->cache)(self, class, argc);
}

/* ========================================================================= */

void post_init_AST_ReflectionMethod()
{
}

