#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Layout.h>

/* ========================================================================= */

DECLARE_CLASS(Type_ObjectLayout);
DECLARE_CLASS(Type_ArrayLayout);
DECLARE_CLASS(Type_CharacterLayout);
DECLARE_CLASS(Type_WordsLayout);
DECLARE_CLASS(Type_IntLayout);
DECLARE_CLASS(Type_FloatLayout);
DECLARE_CLASS(Type_LongLayout);
DECLARE_CLASS(Type_BytesLayout);
DECLARE_CLASS(Type_FileLayout);

Object empty_object_layout;
Object empty_array_layout;
Object words_layout;
Object bytes_layout;
Object int_layout;
Object float_layout;
Object long_layout;
Object character_layout;
Object file_layout;

/* ========================================================================= */

Collection_Array create_layout_with_vars(Type_Class layout, uns_int size)
{
    Collection_Array result = NEW_ARRAYED(struct Collection_Array_t, Object[size]);
    HEADER(result) = layout;
    result->size   = size;
    return result;
}

void change_slot_type(Type_Class class, Type_Class type, int counter, ...)
{
    Collection_Array layout = (Collection_Array)class->layout;
    va_list args;
    va_start(args, counter);
    while (counter--) {
        int idx = va_arg(args, int);
        HEADER(layout->values[idx]) = type;
    }
    va_end(args);
}

void pre_init_Type_Layout()
{
    Type_ObjectLayout_Class            = new_Bootstrapping_Class();
    Type_ArrayLayout_Class             = new_Bootstrapping_Class();
    Type_CharacterLayout_Class         = new_Bootstrapping_Class();
    Type_WordsLayout_Class             = new_Bootstrapping_Class();
    Type_IntLayout_Class               = new_Bootstrapping_Class();
    Type_FloatLayout_Class             = new_Bootstrapping_Class();
    Type_LongLayout_Class              = new_Bootstrapping_Class();
    Type_BytesLayout_Class             = new_Bootstrapping_Class();
    Type_FileLayout_Class              = new_Bootstrapping_Class();

    empty_array_layout                 = (Object)create_layout_with_vars(Type_ArrayLayout_Class, 0);
    empty_object_layout                = (Object)create_layout_with_vars(Type_ObjectLayout_Class, 0);
    words_layout                       = basic_instantiate_Object(Type_WordsLayout_Class, 0);
    bytes_layout                       = basic_instantiate_Object(Type_BytesLayout_Class, 0);
    int_layout                         = basic_instantiate_Object(Type_IntLayout_Class, 0);
    float_layout                       = basic_instantiate_Object(Type_FloatLayout_Class, 0);
    long_layout                        = basic_instantiate_Object(Type_LongLayout_Class, 0);
    character_layout                   = basic_instantiate_Object(Type_CharacterLayout_Class, 0);
    file_layout                        = basic_instantiate_Object(Type_FileLayout_Class, 0);

    Type_ObjectLayout_Class->layout    = empty_array_layout;
    Type_ArrayLayout_Class->layout     = empty_array_layout;
    Type_CharacterLayout_Class->layout = empty_object_layout;
    Type_WordsLayout_Class->layout     = empty_object_layout;
    Type_IntLayout_Class->layout       = empty_object_layout;
    Type_FloatLayout_Class->layout     = empty_object_layout;
    Type_LongLayout_Class->layout      = empty_object_layout;
    Type_BytesLayout_Class->layout     = empty_object_layout;
    Type_FileLayout_Class->layout      = empty_object_layout;

    Number_SmallInt_Class->layout        = int_layout;
    Number_Float_Class->layout           = float_layout;
}

Object create_object_layout(uns_int size, va_list args)
{
    if (size == 0) { va_end(args); return empty_object_layout; }
    Collection_Array result = create_layout_with_vars(Type_ObjectLayout_Class, size);
    int i;
    for (i = 0; i < size; i++) {
        result->values[i] = (Object)new_Slot_Slot(i, va_arg(args, wchar_t *));
    }
    va_end(args);
    return (Object)result;
}

Object create_array_layout(uns_int size, va_list args)
{
    if (size == 0) { va_end(args); return empty_array_layout; }
    Collection_Array result = create_layout_with_vars(Type_ArrayLayout_Class, size);
    int i;
    for (i = 0; i < size; i++) {
        result->values[i] = (Object)new_Slot_Slot(i, va_arg(args, wchar_t*));
    }
    va_end(args);
    return (Object)result;
}

Object create_layout(uns_int size, Type_Tag tag, ...)
{
    va_list args;
    va_start(args, tag);
    if (tag == OBJECT)  { return create_object_layout(size, args); }
    if (tag == ARRAY)   { return create_array_layout(size, args); }
    if (tag == WORDS)   { return words_layout; }
    if (tag == BYTES)   { return bytes_layout; }
    if (tag == INT)     { return int_layout; }
    if (tag == FLOAT)   { return float_layout; }
    if (tag == LONG)    { return long_layout; }
    if (tag == CHAR)    { return character_layout; }
    if (tag == FILETAG) { return file_layout; }
    assert1(NULL, "Unknown layout, should never happen!");
    return NULL;
}

/* ========================================================================= */

#define INIT_TYPE_LAYOUT(layout_name)\
    Type_##layout_name##Layout_Class->name            = new_Type_Symbol(L""#layout_name"Layout");\
    Type_##layout_name##Layout_Class->methods         = new_Collection_Dictionary();\
    HEADER(Type_##layout_name##Layout_Class)->methods = new_Collection_Dictionary();\
    HEADER(Type_##layout_name##Layout_Class)->layout  = HEADER(Type_Object_Class)->layout;


void post_init_Type_Layout()
{   
    INIT_TYPE_LAYOUT(Object);
    INIT_TYPE_LAYOUT(Int);
    INIT_TYPE_LAYOUT(Float);
    INIT_TYPE_LAYOUT(Words);
    INIT_TYPE_LAYOUT(Character);
    INIT_TYPE_LAYOUT(Array);
    // TODO fill in the bootstrapping classes
}
