#include <pinocchio.h>

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

Method lookup(Object receiver, Symbol selector)
{
    Behavior behavior        = get_class(receiver);
    MethodDictionary methods = behavior->methods;
    if (get_class((Object)methods) != (Behavior)MethodDictionary_class) {
        return NULL;
    }
    return MethodDictionary_lookup(methods, selector);
}

void send(Thread thread, Symbol message)
{
    
}

void invoke(Thread thread, Symbol message, uns_int offset)
{

}
