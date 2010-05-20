#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>
#include <lib/lib.h>
#include <system/ast/NativeMethod.h>

/* ========================================================================= */

DECLARE_CLASS(AST_NativeMethod);

/* ========================================================================= */

AST_NativeMethod new_AST_NativeMethod_with(Collection_Array params,
                               Collection_Array locals,
                               Collection_Array annotations,
                               uns_int statementCount, ...)
{
    NEW_ARRAY_OBJECT(AST_NativeMethod, Object[statementCount]);
    result->params = params;
    result->locals = locals;
    result->annotations = annotations;
    init_variable_array(result->params, 0);
    init_variable_array(result->locals, result->params->size);
    result->info   = empty_AST_Info;
    result->size   = statementCount;
    result->code = NULL;
    COPY_ARGS(statementCount, result->body);
    return result;
}

void pre_init_AST_NativeMethod()
{
    AST_NativeMethod_Class = new_Class(Type_Object_Class);
}

/* ========================================================================= */

native lookup_native(Object primitive_name, Object module_name)
{
    Object module = Collection_Dictionary_quick_lookup(_NATIVES_, module_name);
    if (module == NULL) { return (native)-1; }
    if (HEADER(module) == (Type_Class)Plugin_Plugin_Class) {
        module = ((Type_Object)module)->ivals[2]; 
    }
    Object primitive = Collection_Dictionary_quick_lookup((Collection_Dictionary)module, primitive_name);
    if (primitive == NULL) { return (native)-1; }
    return (native)primitive;
}

void AST_NativeMethod_invoke(Runtime_MethodClosure closure, Object self, Type_Class class, uns_int argc)
{
    AST_NativeMethod method = (AST_NativeMethod)closure->code;
    if (method->code == NULL) {
        AST_Annotation annotation =
            lookup_annotation(method->annotations, 
                              (Object)SMB_pPrimitive_plugin_);
        assert1(annotation, "No primitive annotation found");
        assert1(annotation->size == 2, "Invalid annotation format");
        method->code = lookup_native(annotation->arguments[0],
                                     annotation->arguments[1]);
    }
    if (method->code == (native)-1) {
        return AST_Method_invoke(closure, (AST_Method)method, self, argc);
    }
    method->code(self, class, argc);
}

/* ========================================================================= */

void post_init_AST_NativeMethod()
{
}
