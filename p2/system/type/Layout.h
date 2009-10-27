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

#define assertTagType(tag, type)\
    assert0(HEADER(tag) == (Object)Type_##type##Layout);

#define tagsize(tag)\
    (((Type_Array)tag)->size)

#define assertTagSize(tag, size)\
    assert0(0 <= size);\
    assert0(tagsize(tag) > size);

extern Object gettag(Type_Class class);

/* ========================================================================= */

void pre_init_Type_Layout();
void post_init_Type_Layout();

/* ========================================================================= */

#endif // TYPE_LAYOUT_H
