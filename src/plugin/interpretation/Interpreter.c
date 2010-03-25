#include <plugin/Plugin.h>

NATIVE4(Interpreter_invokeNative)
    Runtime_MethodClosure closure = (Runtime_MethodClosure)NATIVE_ARG(0);
    Object receiver               = NATIVE_ARG(1);
    Runtime_Message message       = (Runtime_Message)NATIVE_ARG(2);
    claim_EXP(message->size - 3);
    int i;
    for (i = 0; i < message->size; i++) {
        poke_EXP(message->size - i - 1, message->arguments[i]);
    }
    AST_NativeMethod_invoke(
            interpreter, /* meta-interpreter */
            self,        /* interpreter */
            (AST_NativeMethod)closure->code,
            receiver,
            closure->host,
            message->size);
}

NATIVE3(Interpreter_instVarAt_put_on_)
    Object w_index  = NATIVE_ARG(0);
    Object value    = NATIVE_ARG(1);
    Object instance = NATIVE_ARG(2);
    Object_instVarAt_put_(instance, unwrap_int(w_index), value);
    RETURN_FROM_NATIVE(value);
}

NATIVE2(Interpreter_instVarAt_from_)
    Object w_index  = NATIVE_ARG(0);
    Object instance = NATIVE_ARG(1);
    RETURN_FROM_NATIVE(Object_instVarAt_(instance, unwrap_int(w_index)));
}

PLUGIN()
    EXPORT(SMB_invokeNativeMethod_on_message_, Interpreter_invokeNative);
    EXPORT(SMB_instVarAt_put_on_, Interpreter_instVarAt_put_on_);
    EXPORT(SMB_instVarAt_from_, Interpreter_instVarAt_from_);
}

void unload_plugin()
{
}
