#ifndef KERNEL_OBJECT_STRUCTURE_LAYOUT_H
#define KERNEL_OBJECT_STRUCTURE_LAYOUT_H

#include <pinocchio.h>

/* ======================================================================= */

extern struct Class ObjectLayout;
extern struct Class ArrayLayout;
extern struct Class CharacterLayout;
extern struct Class WordsLayout;
extern struct Class IntegerLayout;
extern struct Class FloatLayout;
extern struct Class LongLayout;
extern struct Class BytesLayout;
extern struct Class RawLayout;

extern tObject empty_object_layout;
extern tObject empty_array_layout;
extern tObject words_layout;
extern tObject bytes_layout;
extern tObject integer_layout;
extern tObject float_layout;
extern tObject long_layout;
extern tObject character_layout;
extern tObject raw_layout;

extern void init_layout();
/* ======================================================================= */

extern tLayout new_Layout(uns_int size, ...);

/* ======================================================================= */

#endif // KERNEL_OBJECT_STRUCTURE_LAYOUT_H
