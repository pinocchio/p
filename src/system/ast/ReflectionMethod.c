#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>
#include <lib/lib.h>
#include <system/ast/ReflectionMethod.h>

/* ========================================================================= */

ReflectionMethod new_ReflectionMethod_with(Array params,
                               Array locals,
                               Array annotations,
                               uns_int statementCount, ...)
{
    NEW_ARRAY_OBJECT(ReflectionMethod, Optr[statementCount]);
    result->params = params;
    result->locals = locals;
    result->annotations = annotations;
    int i;
    for (i = 0; i < annotations->size; i++) {
        assert1(annotations->values[i], "Empty annotation found..?");
    }
    init_variable_array(result->params, 0);
    init_variable_array(result->locals, result->params->size);
    result->info   = empty_Info;
    result->size   = statementCount;
    result->cache  = NULL; // Should become InlineCache
    COPY_ARGS(statementCount, result->body);
    return result;
}

/* ========================================================================= */

void ReflectionMethod_invoke(Runtime_MethodClosure closure,
                                 ReflectionMethod method, 
                                 Optr self, uns_int argc)
{
    if (method->cache == NULL) {
        Annotation annotation =
            lookup_annotation(method->annotations, 
                              (Optr)SMB_pinocchioReflective_);
        assert1(annotation, "No reflection annotation found");
        assert1(annotation->size == 1, "Invalid annotation format");
        method->cache =
            (native)lookup_native(annotation->arguments[0],
                                  (Optr)SMB_Reflection_Reflection);
    }
    if (method->cache == (native)-1) {
        return Method_invoke(closure, (Method)method, self, argc);
    }
    method->cache(self, closure->host, argc);
}
