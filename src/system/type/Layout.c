#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Layout.h>

/* ========================================================================= */

DECLARE_CLASS(ObjectLayout);
DECLARE_CLASS(ArrayLayout);
DECLARE_CLASS(CharacterLayout);
DECLARE_CLASS(WordsLayout);
DECLARE_CLASS(IntLayout);
DECLARE_CLASS(FloatLayout);
DECLARE_CLASS(LongLayout);
DECLARE_CLASS(BytesLayout);
DECLARE_CLASS(FileLayout);

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

Array create_layout_with_vars(Class layout, uns_int size)
{
    Array result = NEW_ARRAYED(struct Array_t, Object[size]);
    HEADER(result) = layout;
    result->size   = size;
    return result;
}

void change_slot_type(Class class, Class type, int counter, ...)
{
    Array layout = (Array)class->layout;
    va_list args;
    va_start(args, counter);
    while (counter--) {
        int idx = va_arg(args, int);
        HEADER(layout->values[idx]) = type;
    }
    va_end(args);
}

Object create_object_layout(uns_int size, va_list args)
{
    if (size == 0) { va_end(args); return empty_object_layout; }
    Array result = create_layout_with_vars(ObjectLayout_Class, size);
    int i;
    for (i = 0; i < size; i++) {
        result->values[i] = (Object)new_Slot(i, va_arg(args, wchar_t *));
    }
    va_end(args);
    return (Object)result;
}

Object create_array_layout(uns_int size, va_list args)
{
    if (size == 0) { va_end(args); return empty_array_layout; }
    Array result = create_layout_with_vars(ArrayLayout_Class, size);
    int i;
    for (i = 0; i < size; i++) {
        result->values[i] = (Object)new_Slot(i, va_arg(args, wchar_t*));
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

void post_init_Type_Layout()
{   
}
