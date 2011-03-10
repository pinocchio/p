#include <pinocchio.h>

void op_print1(Thread thread)
{
    fwprintf(stderr, L"Print 1\n");
    thread->context->pc->data++;
}

void op_print2(Thread thread)
{
    fwprintf(stderr, L"Print 2\n");
    thread->context->pc->data++;
}

void test()
{
    // TODO allocate thread objects on C-stack
    // alloca
    Array annotations;
    RawArray code = new_RawArray(7, &op_self, 0, &op_send, 0, 0, new_Symbol(L"test2"), &op_exit);
    Array body;

    Method method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"test"), method);

    code = new_RawArray(2, &op_print1, &op_return_self);

    method = new_Method(annotations, code, body);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"test2"), method);

    Thread thread = new_Thread(THREAD_SIZE, (Object)new_SmallInteger(0), new_Symbol(L"test"));
    opcode_evaluate(thread);
}
