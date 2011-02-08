#include <plugin/Plugin.h>
#include <pinocchio.h>
#include <wchar.h>
#include <stdio.h>

NATIVE(Interpreter_invokeNative)
    ASSERT_ARG_SIZE(4);

    //Optr interpreter     = self;
    MethodClosure method = (MethodClosure)NATIVE_ARG(0);
    Optr receiver        = NATIVE_ARG(1);
    Message message      = (Message)NATIVE_ARG(2);
    //Optr alternative     = NATIVE_ARG(3);

    ZAP_NATIVE_INPUT();

    PUSH_EXP(receiver);

    uns_int i;
    uns_int message_size = GET_SIZE(message);
    for (i = 0; i < message_size; i++) {
        PUSH_EXP(message->arguments[i]);
    }
   
    NativeMethod_invoke(
        method,
        (NativeMethod)method->code,
        receiver,
        message_size);
}

// ============================================================================

PLUGIN()
    EXPORT(L"invokeNativeMethod:on:message:alternative:",
           Interpreter_invokeNative);
}

void unload_plugin() {
}
