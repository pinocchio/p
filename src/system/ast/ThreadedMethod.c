#include <system/ast/ThreadedMethod.h>

void AST_ThreadedMethod_invoke(Runtime_MethodClosure closure, Object self,
                                      Type_Class class, uns_int argc)
{
    AST_ThreadedMethod method = (AST_ThreadedMethod)closure->code;
    if (method->cache == Nil) {
        return AST_Method_invoke(closure, (AST_Method)method, self, argc);
    }
	push_CNT_raw(method->code);
	push_CNT_raw(0);
	push_CNT(eval_threaded);
}
