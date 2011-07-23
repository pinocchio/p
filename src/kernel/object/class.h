#ifndef KERNEL_OBJECT_CLASS_H
#define KERNEL_OBJECT_CLASS_H

#include <pinocchio.h>

/*  =======================================================================  */

struct Behavior {
    tMethodDictionary    methods;
    tBehavior            super;
    tSmallInteger        instanceHeader;
    tLayout              layout;
    tObject              classfield[];
};

struct Class {
    tMethodDictionary    methods;
    tClass               super;
    tSmallInteger        instanceHeader;
    tLayout              layout;
    tSymbol              name;
    tObject              package;
    tObject              classfield[];
};

struct Metaclass {
    tMethodDictionary    methods;
    tMetaclass           super;
    tSmallInteger        instanceHeader;
    tLayout              layout;
    tClass               instance;
    tObject              classfield[];
};

extern struct Class Behavior;
extern struct Class Class;
extern struct Class Metaclass;

/*  =======================================================================  */

extern tMethodClosure lookup(tObject receiver, tSymbol message);

/*  =======================================================================  */

#endif // KERNEL_OBJECT_CLASS_H
