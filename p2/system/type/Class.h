#ifndef CLASS_H
#define CLASS_H

#include <pinocchio.h>

/* ========================================================================== */

struct Type_Class_t {
    Type_String     name;
    Object          super;
    Type_Dictionary methods;
    Object          cvars[];
};

CREATE_INITIALIZERS(Class)

Type_Class MetaClass_Class;

/* ======================================================================== */

extern Type_Class new_Class(Object superclass);
extern Type_Class new_named_MetaClass(Object superclass, const wchar_t* name);
extern Type_Class new_Named_Class(Object superclass, const wchar_t* name);

/* ======================================================================== */

extern void Class_dispatch(InlineCache * sender, Object self, Object class,
                    Object msg, Type_Array args);

extern void CNT_Class_super();

#endif // CLASS_H
