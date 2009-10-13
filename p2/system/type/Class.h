#ifndef CLASS_H
#define CLASS_H

#include <pinocchio.h>

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
    Type_String     name;
    Object          super;
    Type_Dictionary methods;
    Object          cvars[];
};

CREATE_INITIALIZERS(Type_Class)

Type_Class MetaType_Class_Class;

/* ========================================================================= */

extern Type_Class new_Class(Object superclass);
extern Type_Class new_named_MetaType_Class(Object superclass, const wchar_t* name);
extern Type_Class new_Named_Class(Object superclass, const wchar_t* name);

/* ========================================================================= */

extern void Type_Class_dispatch(InlineCache * sender, Object self, Object class,
                    Object msg, Type_Array args);

extern void CNT_Class_super();

extern void print_Class(Object obj);

/* ========================================================================= */

#endif // CLASS_H
