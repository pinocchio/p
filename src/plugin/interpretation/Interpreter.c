#include <plugin/Plugin.h>

NATIVE3(Interpreter_invokeNative)
    Runtime_MethodClosure closure = (Runtime_MethodClosure)NATIVE_ARG(0);
    Object receiver               = NATIVE_ARG(1);
    Runtime_Message message       = (Runtime_Message)NATIVE_ARG(2);
    claim_EXP(message->size - 3);
    int i;
    for (i = 0; i < message->size; i++) {
        poke_EXP(message->size - i - 1, message->arguments[i]);
    }
    AST_NativeMethod_invoke(
            closure,
            receiver,
            closure->host,
            message->size);
}

PLUGIN()
    EXPORT(SMB_invokeNativeMethod_on_message_, Interpreter_invokeNative);
}

void unload_plugin()
{
}
