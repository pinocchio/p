#include <plugin/Plugin.h>

CNT(restore_iss)
    Object return_value = pop_EXP();
    tset(_ISS_, peek_EXP(0));
    poke_EXP(0, return_value);
}

NATIVE4(Interpreter_invokeNative)
    Runtime_MethodClosure closure = (Runtime_MethodClosure)NATIVE_ARG(0);
    AST_NativeMethod receiver    = (AST_NativeMethod)NATIVE_ARG(1);
    Runtime_Message message       = (Runtime_Message)NATIVE_ARG(2);
    if (peek_CNT() == &CNT_restore_iss) {
        claim_EXP(message->size - 4);
    } else {
        claim_EXP(message->size - 4 + 1);
        poke_EXP(message->size+0, receiver);    
        //poke_EXP(message->size+1, nil);    
        poke_EXP(message->size+2, tget(_ISS_));    
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
            (Object)closure->host,
            message->size);
}

static CNT(fix_lookup_result)
	Object result = peek_EXP(0);
	zapn_EXP(3);
	if (result == NULL) {
		poke_EXP(0, nil);
	} else {
		poke_EXP(0, result);
	}
}

NATIVE2(Interpreter_lookupSelector_in_)
	Object selector   = NATIVE_ARG(0);
	Class target = (Class)NATIVE_ARG(1);
	push_CNT(fix_lookup_result);
    push_CNT(Class_lookup_loop);
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
