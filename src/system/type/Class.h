#ifndef CLASS_H
#define CLASS_H

#include <pinocchio.h>

extern Type_Class Metaclass;
EXPORT_REFERENCE(Metaclass);
EXPORT_REFERENCE(Class);
EXPORT_REFERENCE(Behavior);

/* ========================================================================= */

#define BEHAVIOR_SIZE 3
#define BEHAVIOR_VARS L"layout", L"super", L"methods"
#define METACLASS_SIZE (BEHAVIOR_SIZE + 1)
#define METACLASS_VARS BEHAVIOR_VARS, L"instance"
#define CLASS_SIZE (BEHAVIOR_SIZE + 2)
#define CLASS_VARS BEHAVIOR_VARS, L"name", L"package"

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

struct Type_Class_t {
    Object                layout;
    Type_Class            super;
    Collection_Dictionary methods;
    Type_Symbol           name;
    Object                package;
    Object                cvars[];
};

CREATE_INITIALIZERS(Type_Class)
extern void inter_init_Type_Class();

/* ========================================================================= */

extern Type_Class new_Class(Type_Class superclass, Object layout);
extern Type_Class new_Class_withMeta(Type_Class superclass, Object layout, Object metaType);
extern Type_Class new_Class_named(Type_Class superclass, const wchar_t* name,
                                  Object layout);
extern Type_Class new_Bootstrapping_Class();

/* ========================================================================= */

extern void Type_Class_dispatch(Object receiver, Type_Class class, uns_int argc);
extern void Type_Class_direct_dispatch(Object receiver, Type_Class class,
                                       Object msg, uns_int argc, ...);
extern void Type_Class_direct_dispatch_withArguments(Object receiver,
                                                     Type_Class class,
                                                     Object msg,
                                                     Collection_Array args);

extern void Type_Class_set_superclass(Type_Class cls, Type_Class super);

extern void CNT_Class_super();
extern void CNT_Class_lookup_loop();
extern void Class_lookup(Type_Class class, Object msg);

/* ========================================================================= */

extern Object instantiate(Type_Class class);
extern Object instantiate_sized(Type_Class class, uns_int size);
extern Object basic_instantiate_Object(Type_Class class, uns_int size);

/* ========================================================================= */

extern void assert_class(Object class);

/* ========================================================================= */

extern Type_Class Behavior;
extern Type_Class Class;

/* ========================================================================= */

#endif // CLASS_H
