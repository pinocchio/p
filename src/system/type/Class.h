#ifndef CLASS_H
#define CLASS_H

#include <pinocchio.h>

extern Class metaclass;

/* ========================================================================= */

#define BEHAVIOR_SIZE 3
#define METACLASS_SIZE (BEHAVIOR_SIZE + 1)
#define CLASS_SIZE (BEHAVIOR_SIZE + 2)

/* ========================================================================= */

typedef enum Type_Tag {
    ARRAY,
    OBJECT,
    CHAR,
    WORDS,
    INT,
    FLOAT,
    BYTES,
    LONG,
    FILETAG,
} Type_Tag;

struct Class_t {
    Optr     layout;
    Class      super;
    Dictionary methods;
    Symbol     name;
    Optr     package;
    Optr     cvars[];
};

CREATE_INITIALIZERS(Class)

/* ========================================================================= */

extern Class new_Class(Class superclass, Optr metaType);
extern Class new_Bootstrapping_Class();

#define DIRECT_INIT_CLASS(cls)\
    cls->methods            = new_Dictionary();\
    HEADER(cls)->methods    = new_Dictionary();

#define INIT_CLASS(cls) DIRECT_INIT_CLASS(cls##_Class);

/* ========================================================================= */

extern threaded* Class_dispatch(Optr receiver, Class class, uns_int argc);
extern threaded* Class_normal_dispatch(Optr receiver, Send send, uns_int argc);
extern threaded* Class_direct_dispatch(Optr receiver, Class class,
                                       Optr msg, uns_int argc, ...);
extern threaded* Class_direct_dispatch_withArguments(Optr receiver,
                                                     Class class,
                                                     Optr msg,
                                                     Array args);

extern void Class_set_superclass(Class cls, Class super);

/* ========================================================================= */

extern Optr instantiate(Class class);
extern Optr instantiate_sized(Class class, uns_int size);
extern Optr basic_instantiate_Object(Class class, uns_int size);

/* ========================================================================= */

extern void assert_class(Optr class);

/* ========================================================================= */

extern Class behavior;
extern Class class;

/* ========================================================================= */

#endif // CLASS_H
