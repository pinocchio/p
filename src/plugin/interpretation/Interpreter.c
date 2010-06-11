#include <plugin/Plugin.h>

CNT(restore_iss)
    Optr return_value = pop_EXP();
    tset(_ISS_, PEEK_EXP(0));
    POKE_EXP(0, return_value);
}

NATIVE4(Interpreter_invokeNative)
    MethodClosure closure = (MethodClosure)NATIVE_ARG(0);
    NativeMethod receiver    = (NativeMethod)NATIVE_ARG(1);
    Message message       = (Message)NATIVE_ARG(2);
    if (PEEK_CNT() == &CNT_restore_iss) {
        CLAIM_EXP(message->size - 4);
    } else {
        CLAIM_EXP(message->size - 4 + 1);
        POKE_EXP(message->size+0, receiver);    
        //POKE_EXP(message->size+1, nil);    
        POKE_EXP(message->size+2, tget(_ISS_));    
        PUSH_CNT(restore_iss);
    }
    extend_ISS(self);

    int i;
    for (i = 0; i < message->size; i++) {
        POKE_EXP(message->size - i - 1, message->arguments[i]);
    }
    NativeMethod_invoke(
            closure,
            receiver,
            (Optr)closure->host,
            message->size);
}

static CNT(fix_lookup_result)
	Optr result = PEEK_EXP(0);
	ZAPN_EXP(3);
	if (result == NULL) {
		POKE_EXP(0, nil);
	} else {
		POKE_EXP(0, result);
	}
}

NATIVE2(Interpreter_lookupSelector_in_)
	Optr selector   = NATIVE_ARG(0);
	Class target = (Class)NATIVE_ARG(1);
	PUSH_CNT(fix_lookup_result);
    PUSH_CNT(Class_lookup_loop);
    Class_lookup(target, selector);
}

PLUGIN()
    EXPORT(new_Symbol_cached(L"invokeNativeMethod:on:message:alternative:"),
		   Interpreter_invokeNative);
	EXPORT(new_Symbol_cached(L"lookupSelector:in:"),
           Interpreter_lookupSelector_in_);
}

void unload_plugin()
{
}
