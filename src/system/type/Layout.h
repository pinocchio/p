#ifndef TYPE_LAYOUT_H
#define TYPE_LAYOUT_H

#include <pinocchio.h>

//TODO make use of EXPORT_CLASS
extern Type_Class Type_ObjectLayout;
extern Type_Class Type_ArrayLayout;
extern Type_Class Type_CharacterLayout;
extern Type_Class Type_WordsLayout;
extern Type_Class Type_IntLayout;
extern Type_Class Type_LongLayout;
extern Type_Class Type_BytesLayout;
extern Type_Class Type_FileLayout;

extern Object empty_object_layout;
extern Object empty_array_layout;
extern Object words_layout;
extern Object bytes_layout;
extern Object int_layout;
extern Object long_layout;
extern Object character_layout;
extern Object file_layout;



/* ========================================================================= */

#define OBJECT_OF_LAYOUT(o, layout)\
    TAG_IS_LAYOUT(GETTAG(o), layout)

#define TAG_IS_LAYOUT(tag, layout)\
    (HEADER(tag) == Type_##layout##Layout)

#define ASSERT_TAG_LAYOUT(tag, layout)\
    assert0(TAG_IS_LAYOUT(tag, layout));

#define TAG_SIZE(tag)\
    (((Type_Array)tag)->size)

#define TAG_VAR(tag, index)\
    (((Type_Array)tag)->values[index])

#define ASSERT_TAG_SIZE(tag, size)\
    assert(0 <= size, printf("Invalid tag size: %i\n", (int)size));\
    assert(TAG_SIZE(tag) > size, printf("Invalid tag size was %i but expected < %i\n", (int)size, (int)TAG_SIZE(tag)));

#define GETTAG(o)\
    HEADER(o)->layout

#define OBJECT_OF_LAYOUT(o, layout)\
    TAG_IS_LAYOUT(GETTAG(o), layout)

#define CREATE_OBJECT_TAG(name) create_layout(name##_SIZE, OBJECT, name##_VARS)
#define CREATE_ARRAY_TAG(name) create_layout(name##_SIZE, ARRAY, name##_VARS)

/* ========================================================================= */

void pre_init_Type_Layout();
void post_init_Type_Layout();

/* ========================================================================= */

extern Object create_layout(uns_int size, Type_Tag tag, ...);
extern Type_Array create_layout_with_vars(Type_Class layout, uns_int size);

/* ========================================================================= */

#endif // TYPE_LAYOUT_H
