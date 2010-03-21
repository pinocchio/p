#include <system/interpretation/Interpreter.h>

NATIVE4(Interpreter_invokeNative)
    Runtime_MethodClosure closure = (Runtime_MethodClosure)NATIVE_ARG(0);
    Object receiver               = NATIVE_ARG(1);
    Type_Class mclass             = (Type_Class)NATIVE_ARG(2);
    Runtime_Message message       = (Runtime_Message)NATIVE_ARG(3);
    claim_EXP(message->size - 4);
    int i;
    for (i = 0; i < message->size; i++) {
        poke_EXP(message->size - i - 1, message->arguments[i]);
    }
    AST_NativeMethod_invoke(
            self,
            (AST_NativeMethod)closure->code,
            receiver,
            mclass,
            message->size);
}

void init_interpreter() 
{
    Collection_Dictionary natives = add_plugin(L"Interpretation.Interpreter");
    store_native(natives, SMB_invokeNativeMethod_on_class_message_, NM_Interpreter_invokeNative);
}
