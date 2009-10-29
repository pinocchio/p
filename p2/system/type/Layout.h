#ifndef TYPE_LAYOUT_H
#define TYPE_LAYOUT_H

#include <pinocchio.h>

extern Type_Class Type_ObjectLayout;
extern Type_Class Type_ArrayLayout;
extern Type_Class Type_CharacterLayout;
extern Type_Class Type_WordsLayout;
extern Type_Class Type_IntLayout;
extern Type_Class Type_Type_LongLayout;
extern Type_Class Type_BytesLayout;
extern Type_Class Type_FileLayout;

/* ========================================================================= */

#define tagIsType(tag, type)\
    (HEADER(tag) == (Object)Type_##type##Layout)

#define assertTagType(tag, type)\
    assert0(tagIsType(tag, type));

#define tagsize(tag)\
    (((Type_Array)tag)->size)

#define assertTagSize(tag, size)\
    assert0(0 <= size);\
    assert0(tagsize(tag) > size);

#define gettag(o)\
    ((Type_Class)HEADER(o))->type

#define create_object_tag(name) create_type(name##_SIZE, OBJECT, name##_VARS)

/* ========================================================================= */

void pre_init_Type_Layout();
void post_init_Type_Layout();

/* ========================================================================= */

extern Object create_type(uns_int size, Type_Tag tag, ...);

/* ========================================================================= */

#endif // TYPE_LAYOUT_H
