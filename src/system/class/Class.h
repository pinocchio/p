#ifndef CLASS_H
#define CLASS_H

#include <pinocchio.h>

extern Class metaclass;
extern Class behavior;
extern Class class;
extern Class MethodDictionary_Class;

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

extern void Class_set_superclass(Class cls, Class super);
extern IdentityDictionary new_MethodDictionary();
extern Optr basic_instantiate_Object(Class class, uns_int size);
extern Class new_Class(Class superclass, Optr metaType);
extern Class new_Bootstrapping_Class();

#define DIRECT_INIT_CLASS(cls)\
    cls->methods            = new_MethodDictionary();\
    HEADER(cls)->methods    = new_MethodDictionary();

#define INIT_CLASS(cls) DIRECT_INIT_CLASS(cls##_Class);


/* ========================================================================= */

extern void send_message(Optr receiver, Symbol message, uns_int argc, ...);
extern void send_message_with(Optr receiver, Symbol message, Array arguments);
extern void send_message_at(Optr receiver, Class class,
						    Symbol message, uns_int argc, ...);
extern void direct_return(Optr value);
extern void long_return(Optr value);
extern void lookup_invoke(Class class, Symbol message);

/* ========================================================================= */

extern void assert_class(Optr class);

/* ========================================================================= */

#endif // CLASS_H
