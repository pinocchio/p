
#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>
#include <system/ast/NativeMethod.h>

/* ======================================================================== */

Type_Class Native_Method_Class;

/* ======================================================================== */

AST_Native_Method
new_Native_Method(native code)
{
    AST_Native_Method result = NEW_t(AST_Native_Method);
    HEADER(result)             = (Object)Native_Method_Class;
    result->code               = code;
    return result;
}

void pre_initialize_Native_Method()
{
    Native_Method_Class = new_Named_Class((Object)Object_Class, L"NativeMethod");
}

/* ======================================================================== */

void AST_Native_Method_invoke(AST_Native_Method method, Object self,
                              Object class, Type_Array args)
{
    method->code(self, class, args);
}

NATIVE(NM_AST_Native_Method_eval)
    AST_Native_Method_invoke((AST_Native_Method)self, self, class, args);
}

NATIVE(NM_AST_Native_Method_eval_)
    // FIXME for now accecpt any number of arguments
    AST_Native_Method_invoke((AST_Native_Method)self, self, class, args);
}


/* ======================================================================== */

void post_initialize_Native_Method()
{
    store_native_method((Type_Class)Native_Method_Class,SMB_eval, NM_AST_Native_Method_eval);
    // TODO for now accecpt any number of arguments
    store_native_method((Type_Class)Native_Method_Class,SMB_eval_, NM_AST_Native_Method_eval_);
};

