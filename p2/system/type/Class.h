
CREATE_INITIALIZERS(Class);

Type_Class * MetaClass_Class;

/* ======================================================================== */

Type_Class* new_Class(Object superclass);
Type_Class * new_named_MetaClass(Object superclass, const wchar_t* name);
Type_Class* new_Named_Class(Object superclass, const wchar_t* name);

/* ======================================================================== */

void Class_dispatch(InlineCache * sender, Object self, Object class,
                    Object msg, Type_Array * args);

void Class_super();