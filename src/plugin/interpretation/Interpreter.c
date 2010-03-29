#include <plugin/Plugin.h>

CNT(restore_iss)
    Object return_value = pop_EXP();
    tset(_ISS_, peek_EXP(0));
    poke_EXP(0, return_value);
}

void extend_ISS(Object self)
{
    Type_Object link = (Type_Object)instantiate((Type_Class)Collection_Link_Class);
    link->ivals[0] = self;
    link->ivals[1] = (Object)tget(_ISS_);
    tset(_ISS_, link);
}


NATIVE3(Interpreter_invokeNative)
    Runtime_MethodClosure closure = (Runtime_MethodClosure)NATIVE_ARG(0);
    Object receiver               = NATIVE_ARG(1);
    Runtime_Message message       = (Runtime_Message)NATIVE_ARG(2);
    if (peek_CNT() == &CNT_restore_iss) {
        claim_EXP(message->size - 3);
    } else {
        claim_EXP(message->size - 3 + 1);
        poke_EXP(message->size - 3, tget(_ISS_));    
        push_CNT(restore_iss);
    }
    extend_ISS(self);

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
