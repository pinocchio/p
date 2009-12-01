
#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>
#include <system/ast/NativeMethod.h>

/* ========================================================================= */

Type_Class AST_Native_Method_Class;

/* ========================================================================= */

AST_Native_Method new_AST_Native_Method(native code)
{
    NEW_OBJECT(AST_Native_Method);
    result->code = code;
    result->info = empty_AST_Info;
    return result;
}

void pre_init_AST_Native_Method()
{
    AST_Native_Method_Class = new_Class_named((Object)Type_Object_Class,
                                              L"NativeMethod",
                                              CREATE_OBJECT_TAG(AST_NATIVE_METHOD));
}

/* ========================================================================= */

void AST_Native_Method_invoke(AST_Native_Method method, Object self,
                              Object class, uns_int argc)
{
    #ifdef DEBUG
    LOG("Native Method invoke\n");
    #endif // DEBUG
    method->code(self, class, argc);
}

NATIVE(AST_Native_Method_eval)
    assert1(NULL, "NYI\n");
    // AST_Native_Method_invoke((AST_Native_Method)self, self, class, args);
}

NATIVE(AST_Native_Method_eval_)

    assert1(NULL, "NYI\n");
    // FIXME for now accept any number of arguments
    // AST_Native_Method_invoke((AST_Native_Method)self, self, class, args);
}


/* ========================================================================= */

void post_init_AST_Native_Method()
{
    store_native_method((Type_Class)AST_Native_Method_Class, SMB_eval, NM_AST_Native_Method_eval);
    // TODO for now accecpt any number of arguments
    store_native_method((Type_Class)AST_Native_Method_Class, SMB_eval_, NM_AST_Native_Method_eval_);
};

