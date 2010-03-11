#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>
#include <system/ast/NativeMethod.h>

/* ========================================================================= */

Type_Class AST_NativeMethod_Class;

/* ========================================================================= */

AST_NativeMethod new_AST_NativeMethod_from(native code)
{
    NEW_OBJECT(AST_NativeMethod);
    result->code = code;
    result->info = empty_AST_Info;
    return result;
}

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
                                              CREATE_OBJECT_TAG(AST_NATIVEMETHOD));
}

/* ========================================================================= */

void AST_NativeMethod_invoke(AST_NativeMethod method, Object self,
                              Type_Class class, uns_int argc)
{
    #ifdef DEBUG
    //LOG("Native Method invoke on %ls\n", ((Type_Class)class)->name->value);
    #endif // DEBUG
    if (method->code == NULL) {
        Type_Array annotations = method->annotations;
        assert1(HEADER(annotations) == Type_Array_Class, "Annotations should be an array");
        int i;
        for (i = 0; i < annotations->size; i++) {
            AST_Annotation annotation = (AST_Annotation)annotations->values[i];
            if (HEADER(annotation) != AST_Annotation_Class) { continue; }
            if (annotation->selector != SMB_pinocchioPrimitive_module_) { continue; }
            Object primitive_name = annotation->arguments[0];
            Object module_name    = annotation->arguments[1];
            Object module = Collection_Dictionary_quick_lookup(_NATIVES_, module_name);
            if (module != NULL) {
                Object primitive = Collection_Dictionary_quick_lookup((Collection_Dictionary)module, primitive_name);
                if (primitive != NULL) {
                    method->code = (native)primitive;
                }
            }
            break;
        }
        assert(method->code, fprintf(stderr, "Invalid Native Method\n"));
    }
    method->code(self, class, argc);
}

NATIVE(AST_NativeMethod_eval)
    assert1(NULL, "NYI\n");
    // AST_Native_Method_invoke((AST_Native_Method)self, self, class, args);
}

NATIVE(AST_NativeMethod_eval_)

    assert1(NULL, "NYI\n");
    // FIXME for now accept any number of arguments
    // AST_Native_Method_invoke((AST_Native_Method)self, self, class, args);
}


/* ========================================================================= */

void post_init_AST_NativeMethod()
{
    store_native_method(AST_NativeMethod_Class, SMB_eval, NM_AST_NativeMethod_eval);
    // TODO for now accept any number of arguments
    store_native_method(AST_NativeMethod_Class, SMB_eval_, NM_AST_NativeMethod_eval_);
};

