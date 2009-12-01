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

#define OBJECT_OF_TYPE(o, type)\
    TAG_IS_TYPE(GETTAG(o), type)

#define TAG_IS_TYPE(tag, type)\
    (HEADER(tag) == (Object)Type_##type##Layout)

#define ASSERT_TAG_TYPE(tag, type)\
    assert0(TAG_IS_TYPE(tag, type));

#define TAG_SIZE(tag)\
    (((Type_Array)tag)->size)

#define TAG_VAR(tag, index)\
    (((Type_Array)tag)->values[index])

#define ASSERT_TAG_SIZE(tag, size)\
    assert0(0 <= size);\
    assert0(TAG_SIZE(tag) > size);

#define GETTAG(o)\
    ((Type_Class)HEADER(o))->type

#define OBJECT_OF_TYPE(o, type)\
    TAG_IS_TYPE(GETTAG(o), type)

#define CREATE_OBJECT_TAG(name) create_type(name##_SIZE, OBJECT, name##_VARS)
#define CREATE_ARRAY_TAG(name) create_type(name##_SIZE, ARRAY, name##_VARS)

/* ========================================================================= */

void pre_init_Type_Layout();
void post_init_Type_Layout();

/* ========================================================================= */

extern Object create_type(uns_int size, Type_Tag tag, ...);

/* ========================================================================= */

#endif // TYPE_LAYOUT_H
