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


AST_NativeMethod new_AST_NativeMethod(uns_int paramCount,
                          uns_int localCount,
                          uns_int statementCount)
{
    AST_NativeMethod result =  (AST_NativeMethod) new_AST_Method(paramCount, localCount, statementCount);
    HEADER(result) = AST_NativeMethod_Class;
    return result;
}

AST_NativeMethod new_AST_NativeMethod_withAll(uns_int paramCount,
                                  uns_int localCount,
                                  uns_int statementCount, ...)
{
    AST_NativeMethod result = new_AST_NativeMethod(paramCount, localCount, statementCount);
    COPY_ARGS(statementCount, result->body);
    return result;
}

AST_NativeMethod new_AST_NativeMethod_with(Type_Array params,
                               Type_Array locals,
                               uns_int statementCount, ...)
{
    NEW_ARRAY_OBJECT(AST_NativeMethod, Object[statementCount]);
    result->params = params;
    result->locals = locals;
    init_variable_array(result->params, 0);
    init_variable_array(result->locals, result->params->size);
    result->info   = empty_AST_Info;
    result->size   = statementCount;
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

