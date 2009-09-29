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

CREATE_INITIALIZERS(Type_Class)

Type_Class MetaType_Class_Type_Class;

/* ======================================================================== */

extern Type_Class new_Type_Class(Object superclass);
extern Type_Class new_named_MetaType_Class(Object superclass, const wchar_t* name);
extern Type_Class new_Named_Type_Class(Object superclass, const wchar_t* name);

/* ======================================================================== */

extern void Type_Class_dispatch(InlineCache * sender, Object self, Object class,
                    Object msg, Type_Array args);

extern void CNT_Type_Class_super();

#endif // CLASS_H
