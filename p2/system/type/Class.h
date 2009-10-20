#ifndef CLASS_H
#define CLASS_H

#include <pinocchio.h>

/* ========================================================================= */

extern Type_Class Metaclass;
#define BEHAVIOUR_SIZE 3
#define METACLASS_SIZE 3
#define CLASS_SIZE 4

/* ========================================================================= */

typedef enum Type_Tag {
    ARRAY   = 0,
    BYTES   = 1,
    CHAR    = 2,
    INT     = 3,
    LONG    = 4,
    OBJECT  = 5,
    WORDS   = 6,
} Type_Tag;

struct Type_Class_t {
    Object          type;
    Object          super;
    Type_Dictionary methods;
    Type_String     name;
    Object          cvars[];
};

CREATE_INITIALIZERS(Type_Class)
extern void inter_init_Type_Class();

/* ========================================================================= */

extern Type_Class new_Class(Object superclass, Object type);
extern Type_Class new_Named_Class(Object superclass, const wchar_t* name,
                                  Object type);

/* ========================================================================= */

extern void Type_Class_dispatch(Object receiver, Object class, uns_int argc);

extern void CNT_Class_super();

extern void print_Class(Object obj);

extern Object create_type(unsigned int size, Type_Tag tag);
extern Type_Tag gettag(Type_Class class);
extern unsigned int getsize(Type_Class class);

/* ========================================================================= */

extern Object instantiate(Type_Class class);
extern Object instantiate_sized(Type_Class class, unsigned int size);
extern Object instantiate_OBJECT(Type_Class class, unsigned int size);

/* ========================================================================= */

extern void assert_class(Object class);

/* ========================================================================= */

extern Type_Class Behaviour;
extern Type_Class Class;

/* ========================================================================= */

#endif // CLASS_H
