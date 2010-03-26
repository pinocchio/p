#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>
#include <lib/lib.h>
#include <system/ast/NativeMethod.h>

/* ========================================================================= */

DECLARE_CLASS(AST_NativeMethod);

/* ========================================================================= */

AST_NativeMethod new_AST_NativeMethod_with(Type_Array params,
                               Type_Array locals,
                               Type_Array annotations,
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
    AST_NativeMethod_Class = new_Class_named(Type_Object_Class,
                                              L"NativeMethod",
                                              CREATE_ARRAY_TAG(AST_NATIVEMETHOD));
    REFER_TO(AST_NativeMethod);
}

/* ========================================================================= */

native lookup_native(Type_Array annotations, Object selector)
{
    assert1(HEADER(annotations) == Type_Array_Class, "Annotations should be an array");
    int i;
    for (i = 0; i < annotations->size; i++) {
        AST_Annotation annotation = (AST_Annotation)annotations->values[i];
        if (HEADER(annotation) != AST_Annotation_Class) { continue; }
        if (annotation->selector != selector) {
            continue;
        }
        Object primitive_name = annotation->arguments[0];
        Object module_name    = annotation->arguments[1];
        Object module = Collection_Dictionary_quick_lookup(_NATIVES_, module_name);
        if (module == NULL) { return (native)-1; }
        if (HEADER(module) == (Type_Class)Plugin_Plugin_Class) {
            module = ((Type_Object)module)->ivals[2]; 
        }
        Object primitive = Collection_Dictionary_quick_lookup((Collection_Dictionary)module, primitive_name);
        if (primitive == NULL) { return (native)-1; }
        return (native)primitive;
    }
    return NULL;
}

void AST_NativeMethod_invoke(Runtime_MethodClosure closure, Object self, Type_Class class, uns_int argc)
{
    AST_NativeMethod method = (AST_NativeMethod)closure->code;
    if (method->code == NULL) {
        native code = lookup_native(method->annotations,
                                    (Object)SMB_pinocchioPrimitive_module_);
        assert(code, fprintf(stderr, "No primitive annotation found\n"));
        method->code = code;
    }
    if (method->code == (native)-1) {
        return AST_Method_invoke(closure, (AST_Method)method, self, class, argc);
    }
    method->code(self, class, argc);
}

/* ========================================================================= */

void post_init_AST_NativeMethod()
{
    // Collection_Dictionary natives = add_plugin(L"AST.NativeMethod");
};

