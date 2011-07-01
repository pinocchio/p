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
    metaclass->methods  = new_IdentityDictionary();
    class->methods      = new_IdentityDictionary();
    return class;
}

/* ======================================================================= */

void init_class(Class class)
{
    class->methods                    = new_IdentityDictionary();
    get_class((Object)class)->methods = new_IdentityDictionary();
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
    IdentityDictionary methods = behavior->methods;
    if (get_class((Object)methods) != (Behavior)IdentityDictionary_class) {
        return NULL;
    }
    return (MethodClosure)IdentityDictionary_lookup(methods, (Object)message);
}
