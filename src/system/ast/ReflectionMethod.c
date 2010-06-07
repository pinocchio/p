#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>
#include <lib/lib.h>
#include <system/ast/ReflectionMethod.h>

/* ========================================================================= */

AST_ReflectionMethod new_AST_ReflectionMethod_with(Array params,
                               Array locals,
                               Array annotations,
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

/* ========================================================================= */

void AST_ReflectionMethod_invoke(Runtime_MethodClosure closure,
                                 AST_ReflectionMethod method, 
                                 Object self, uns_int argc)
{
    if (method->cache == NULL) {
        AST_Annotation annotation =
            lookup_annotation(method->annotations, 
                              (Object)SMB_pinocchioReflective_);
        assert1(annotation, "No reflection annotation found");
        assert1(annotation->size == 1, "Invalid annotation format");
        method->cache =
            (native)lookup_native(annotation->arguments[0],
                                  (Object)SMB_Reflection_Reflection);
    }
    if (method->cache == (native)-1) {
        return AST_Method_invoke(closure, (AST_Method)method, self, argc);
    }
    method->cache(self, closure->host, argc);
}
