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
    Object     layout;
    Class      super;
    Dictionary methods;
    Symbol     name;
    Object     package;
    Object     cvars[];
};

CREATE_INITIALIZERS(Class)

/* ========================================================================= */

extern Class new_Class(Class superclass, Object metaType);
extern Class new_Bootstrapping_Class();

#define DIRECT_INIT_CLASS(cls)\
    cls->methods            = new_Dictionary();\
    HEADER(cls)->methods    = new_Dictionary();

#define INIT_CLASS(cls) DIRECT_INIT_CLASS(cls##_Class);

/* ========================================================================= */

extern void Class_dispatch(Object receiver, Class class, uns_int argc);
extern void Class_direct_dispatch(Object receiver, Class class,
                                       Object msg, uns_int argc, ...);
extern void Class_direct_dispatch_withArguments(Object receiver,
                                                     Class class,
                                                     Object msg,
                                                     Array args);

extern void Class_set_superclass(Class cls, Class super);

extern void CNT_Class_super();
extern void CNT_Class_lookup_loop();
extern void Class_lookup(Class class, Object msg);

/* ========================================================================= */

extern Object instantiate(Class class);
extern Object instantiate_sized(Class class, uns_int size);
extern Object basic_instantiate_Object(Class class, uns_int size);

/* ========================================================================= */

extern void assert_class(Object class);

/* ========================================================================= */

extern Class behavior;
extern Class class;

/* ========================================================================= */

#endif // CLASS_H
