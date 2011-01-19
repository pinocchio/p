#ifndef KERNEL_OBJECT_STRUCTURE_LAYOUT_H
#define KERNEL_OBJECT_STRUCTURE_LAYOUT_H

#include <pinocchio.h>

/* ======================================================================= */

struct Layout {
    Header              header;
    uns_int             size;
    Slot                slot[];
};

extern Class ObjectLayout_class;
extern Class ArrayLayout_class;
extern Class CharacterLayout_class;
extern Class WordsLayout_class;
extern Class IntegerLayout_class;
extern Class FloatLayout_class;
extern Class LongLayout_class;
extern Class BytesLayout_class;
extern Class RawLayout_class;

extern Object empty_object_layout;
extern Object empty_array_layout;
extern Object words_layout;
extern Object bytes_layout;
extern Object integer_layout;
extern Object float_layout;
extern Object long_layout;
extern Object character_layout;
extern Object raw_layout;

extern void init_layout();
/* ======================================================================= */

extern Layout new_Layout(uns_int size, ...);

/* ======================================================================= */

#endif // KERNEL_OBJECT_STRUCTURE_LAYOUT_H
