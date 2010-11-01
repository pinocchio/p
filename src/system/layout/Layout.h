#ifndef TYPE_LAYOUT_H
#define TYPE_LAYOUT_H

#include <pinocchio.h>

EXPORT_CLASS(ObjectLayout);
EXPORT_CLASS(ArrayLayout);
EXPORT_CLASS(CharacterLayout);
EXPORT_CLASS(WordsLayout);
EXPORT_CLASS(IntLayout);
EXPORT_CLASS(FloatLayout);
EXPORT_CLASS(LongLayout);
EXPORT_CLASS(BytesLayout);
EXPORT_CLASS(FileLayout);

extern Optr empty_object_layout;
extern Optr empty_array_layout;
extern Optr words_layout;
extern Optr bytes_layout;
extern Optr int_layout;
extern Optr float_layout;
extern Optr long_layout;
extern Optr character_layout;
extern Optr file_layout;



/* ========================================================================= */

#define OBJECT_OF_LAYOUT(o, layout)\
    TAG_IS_LAYOUT(GETTAG(o), layout)

#define TAG_IS_LAYOUT(tag, layout)\
    (HEADER(tag) == layout##Layout##_Class)

#define ASSERT_TAG_LAYOUT(tag, layout)\
    assert0(TAG_IS_LAYOUT(tag, layout));

#define TAG_SIZE(tag)\
    GET_SIZE(tag)

#define TAG_VAR(tag, index)\
    (((Array)tag)->values[index])

#define ASSERT_TAG_SIZE(tag, size)\
    assert(0 <= size, printf("Invalid tag size: %li\n", (long)size));\
    assert(TAG_SIZE(tag) > size, printf("Invalid tag size was %li but expected > %li\n", (long)TAG_SIZE(tag), (long)size));

#define GETTAG(o)\
    HEADER(o)->layout

#define OBJECT_OF_LAYOUT(o, layout)\
    TAG_IS_LAYOUT(GETTAG(o), layout)

/* ========================================================================= */

void pre_init_Type_Layout();
void post_init_Type_Layout();

/* ========================================================================= */

extern Array create_layout_with_vars(Class layout, uns_int size);

extern void change_slot_type(Class class, Class type, long counter, ...);
extern Object instantiate(Class cls);
extern Array instantiate_sized(Class cls, uns_int size);
extern Array instantiate_Array_with(Class class, uns_int base, uns_int extra, ...);

/* ========================================================================= */

#endif // TYPE_LAYOUT_H
