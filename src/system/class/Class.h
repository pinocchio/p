#ifndef CLASS_H
#define CLASS_H

#include <pinocchio.h>

extern Class metaclass;
extern Class behavior;
extern Class class;

/* ========================================================================= */

#define BEHAVIOR_SIZE 3
#define METACLASS_SIZE (BEHAVIOR_SIZE + 1)
#define CLASS_SIZE (BEHAVIOR_SIZE + 2)

/* ========================================================================= */

struct Class_t {
    Optr                layout;
    Class               super;
    IdentityDictionary  methods;
    Symbol              name;
    Optr                package;
    Optr                cvars[];
};

CREATE_INITIALIZERS(Class)

/* ========================================================================= */

extern Class new_Class(Class superclass, Optr metaType);
extern Class new_Bootstrapping_Class();

#define DIRECT_INIT_CLASS(cls)\
    cls->methods            = new_IdentityDictionary();\
    HEADER(cls)->methods    = new_IdentityDictionary();

#define INIT_CLASS(cls) DIRECT_INIT_CLASS(cls##_Class);

/* ========================================================================= */

extern void Class_dispatch(Optr receiver, Class class, uns_int argc);
extern void Class_normal_dispatch(Optr receiver, Send send, uns_int argc);
extern void Class_direct_dispatch(Optr receiver, Class class,
                                       Optr msg, uns_int argc, ...);
extern void Class_direct_dispatch_withArguments(Optr receiver,
                                                     Class class,
                                                     Optr msg,
                                                     Array args);

extern void Class_set_superclass(Class cls, Class super);

/* ========================================================================= */

extern Optr basic_instantiate_Object(Class class, uns_int size);

/* ========================================================================= */

extern void assert_class(Optr class);
extern void does_not_understand(Optr self, Class class, Optr msg, uns_int argc);
extern void invoke(Optr method, Optr self, uns_int argc);
extern void Class_lookup(Class class, Optr msg);
/* ========================================================================= */


/* ========================================================================= */

#endif // CLASS_H
