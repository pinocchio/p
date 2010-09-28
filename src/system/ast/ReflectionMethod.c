#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>
#include <lib/lib.h>
#include <system/ast/ReflectionMethod.h>

/* ========================================================================= */

static Symbol SMB_Reflection_Reflection;
static Symbol SMB_pinocchioReflective_;

/* ========================================================================= */

ReflectionMethod new_ReflectionMethod_with(Array params,
                                           Array locals,
                                           Array annotations,
					                       Array threaded,
                                           uns_int statementCount, ...)
{
    NEW_ARRAY_OBJECT(ReflectionMethod, Optr[statementCount]);
    result->params = params;
    result->locals = locals;
    result->package = nil;
    result->annotations = annotations;
    long i;
    for (i = 0; i < annotations->size; i++) {
        assert1(annotations->values[i], "Empty annotation found..?");
    }
    init_variable_array(result->params, 0);
    init_variable_array(result->locals, result->params->size);
    result->info   = empty_Info;
    result->size   = statementCount;
    result->code   = threaded;
	result->native = (native)nil;
    COPY_ARGS(statementCount, result->body);
    return result;
}

/* ========================================================================= */

void ReflectionMethod_invoke(MethodClosure closure,
                             ReflectionMethod method, 
                             Optr self, uns_int argc)
{
    if (method->native == (native)nil) {
        Annotation annotation =
            lookup_annotation(method->annotations, 
                              (Optr)SMB_pinocchioReflective_);
        assert1(annotation, "No reflection annotation found");
        assert1(annotation->size == 1, "Invalid annotation format");
        method->native =
            (native)lookup_native(annotation->arguments[0],
                                  (Optr)SMB_Reflection_Reflection);
    }
    if (method->native == (native)-1) {
        return Method_invoke(closure, (Method)method, self, argc);
    }
    method->native(self, closure->host, argc);
}

/* ========================================================================= */

void post_init_ReflectionMethod()
{
    SMB_Reflection_Reflection = new_Symbol(L"Reflection.Reflection");
    SMB_pinocchioReflective_  = new_Symbol(L"pinocchioReflective:");
}
