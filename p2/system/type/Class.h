#ifndef CLASS_H
#define CLASS_H

#include <pinocchio.h>

/* ========================================================================= */

extern Type_Class Metaclass;
#define BEHAVIOUR_SIZE 3
#define BEHAVIOUR_VARS L"type", L"super", L"methods"
#define METACLASS_SIZE 3
#define METACLASS_VARS BEHAVIOUR_VARS
#define CLASS_SIZE 5
#define CLASS_VARS BEHAVIOUR_VARS, L"name", L"package"

/* ========================================================================= */

typedef enum Type_Tag {
    ARRAY,
    OBJECT,
    CHAR,
    WORDS,
    INT,
    BYTES,
    LONG,
    FILETAG,
} Type_Tag;

struct Type_Class_t {
    Object          type;
    Object          super;
    Type_Dictionary methods;
    Type_String     name;
    Object          package;
    Object          cvars[];
};

CREATE_INITIALIZERS(Type_Class)
extern void inter_init_Type_Class();

/* ========================================================================= */

extern Type_Class new_Class(Object superclass, Object type);
extern Type_Class new_Class_named(Object superclass, const wchar_t* name,
                                  Object type);
extern Type_Class new_Bootstrapping_Class(Object superclass);

/* ========================================================================= */

extern void Type_Class_dispatch(Object receiver, Object class, uns_int argc);
extern void Type_Class_direct_dispatch(Object receiver, Object class,
                                       Object msg, uns_int argc, ...);

extern void CNT_Class_super();

extern void print_Class(Object obj);

/* ========================================================================= */

extern Object instantiate(Type_Class class);
extern Object instantiate_sized(Type_Class class, uns_int size);
extern Object basic_instantiate_Object(Type_Class class, uns_int size);

/* ========================================================================= */

extern void assert_class(Object class);

/* ========================================================================= */

extern Type_Class Behaviour;
extern Type_Class Class;

/* ========================================================================= */

#endif // CLASS_H
