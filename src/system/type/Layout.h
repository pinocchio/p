#ifndef TYPE_LAYOUT_H
#define TYPE_LAYOUT_H

#include <pinocchio.h>

EXPORT_CLASS(Type_ObjectLayout);
EXPORT_CLASS(Type_ArrayLayout);
EXPORT_CLASS(Type_CharacterLayout);
EXPORT_CLASS(Type_WordsLayout);
EXPORT_CLASS(Type_IntLayout);
EXPORT_CLASS(Type_FloatLayout);
EXPORT_CLASS(Type_LongLayout);
EXPORT_CLASS(Type_BytesLayout);
EXPORT_CLASS(Type_FileLayout);

extern Object empty_object_layout;
extern Object empty_array_layout;
extern Object words_layout;
extern Object bytes_layout;
extern Object int_layout;
extern Object float_layout;
extern Object long_layout;
extern Object character_layout;
extern Object file_layout;



/* ========================================================================= */

#define OBJECT_OF_LAYOUT(o, layout)\
    TAG_IS_LAYOUT(GETTAG(o), layout)

#define TAG_IS_LAYOUT(tag, layout)\
    (HEADER(tag) == Type_##layout##Layout##_Class)

#define ASSERT_TAG_LAYOUT(tag, layout)\
    assert0(TAG_IS_LAYOUT(tag, layout));

#define TAG_SIZE(tag)\
    (((Collection_Array)tag)->size)

#define TAG_VAR(tag, index)\
    (((Collection_Array)tag)->values[index])

#define ASSERT_TAG_SIZE(tag, size)\
    assert(0 <= size, printf("Invalid tag size: %i\n", (int)size));\
    assert(TAG_SIZE(tag) > size, printf("Invalid tag size was %i but expected > %i\n", (int)TAG_SIZE(tag), (int)size));

#define GETTAG(o)\
    HEADER(o)->layout

#define OBJECT_OF_LAYOUT(o, layout)\
    TAG_IS_LAYOUT(GETTAG(o), layout)

/* ========================================================================= */

void pre_init_Type_Layout();
void post_init_Type_Layout();

/* ========================================================================= */

extern Object create_layout(uns_int size, Type_Tag tag, ...);
extern Collection_Array create_layout_with_vars(Type_Class layout, uns_int size);

extern void change_slot_type(Type_Class class, Type_Class type, int counter, ...);

/* ========================================================================= */

#endif // TYPE_LAYOUT_H
