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
    object->header = (Behavior)class;
}

Behavior get_class(Object object)
{
    return (Behavior)object->header;
}
