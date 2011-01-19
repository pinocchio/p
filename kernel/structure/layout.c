#include <pinocchio.h>

/* ======================================================================= */
Class ObjectLayout_class;
Class ArrayLayout_class;
Class CharacterLayout_class;
Class WordsLayout_class;
Class IntegerLayout_class;
Class FloatLayout_class;
Class LongLayout_class;
Class BytesLayout_class;
Class RawLayout_class;

Object empty_object_layout;
Object empty_array_layout;
Object words_layout;
Object bytes_layout;
Object integer_layout;
Object float_layout;
Object long_layout;
Object character_layout;
Object raw_layout;
/* ======================================================================= */

void init_layout() 
{
    INSTANTIATE(empty_object_layout, Object, ObjectLayout_class);
    INSTANTIATE(empty_array_layout,  Object, ArrayLayout_class);
    INSTANTIATE(words_layout,        Object, WordsLayout_class);
    INSTANTIATE(bytes_layout,        Object, BytesLayout_class);
    INSTANTIATE(integer_layout,      Object, IntegerLayout_class);
    INSTANTIATE(float_layout,        Object, FloatLayout_class);
    INSTANTIATE(long_layout,         Object, LongLayout_class);
    INSTANTIATE(character_layout,    Object, CharacterLayout_class);
    INSTANTIATE(raw_layout,          Object, RawLayout_class);
}
