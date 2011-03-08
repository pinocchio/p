#include <pinocchio.h>
#include <string.h>

/* ======================================================================= */
Class Behavior_class;
Class Class_class;
Class Metaclass_class;
/* ======================================================================= */

Class raw_Bootstrapping_Class()
{
    NEW_OBJECT_NAMED(metaclass, Metaclass);
    NEW_OBJECT_NAMED_WITH_CLASS(class, Class, metaclass);
    metaclass->instance = class;
    return class;
}

Class new_Bootstrapping_Class()
{
    NEW_OBJECT_NAMED(metaclass, Metaclass);
    NEW_OBJECT_NAMED_WITH_CLASS(class, Class, metaclass);
    metaclass->instance = class;
    metaclass->methods  = new_MethodDictionary();
    class->methods      = new_MethodDictionary();
    return class;
}

/* ======================================================================= */

void init_class(Class class)
{
    class->methods                    = new_MethodDictionary();
    get_class((Object)class)->methods = new_MethodDictionary();
}

void set_super(Class child, Class super)
{
    child->super = super;
    get_class((Object)child)->super = get_class((Object)super);
}

void set_class(Object object, Class class)
{
    object->header.class = (Behavior)class;
}

Behavior get_class(Object object)
{
    return object->header.class;
}

/* ======================================================================= */

MethodClosure lookup(Object receiver, Symbol message)
{
    Behavior behavior        = get_class(receiver);
    MethodDictionary methods = behavior->methods;
    if (get_class((Object)methods) != (Behavior)MethodDictionary_class) {
        return NULL;
    }
    return MethodDictionary_lookup(methods, message);
}

void send(Thread thread, Symbol message, uns_int size, uns_int offset)
{
    Context caller        = thread->context;
    Object receiver       = caller->local[offset];
    MethodClosure closure = lookup(receiver, message);

    if (closure == NULL) {
        // TODO does_not_understand(thread, message, size, offset);
    }

    Method method        = closure->method;

    MethodContext callee = new_MethodContext(thread, size);

    callee->pc           = new_Raw((void**)&method->code->data[0]);
    callee->self         = receiver;
    // TODO test what is faster
    memcpy(&callee->local[size], &caller->local[size + offset + 1], size * 8);
    thread->context      = (Context)callee;
}
