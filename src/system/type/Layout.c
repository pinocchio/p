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

Optr empty_object_layout;
Optr empty_array_layout;
Optr words_layout;
Optr bytes_layout;
Optr int_layout;
Optr float_layout;
Optr long_layout;
Optr character_layout;
Optr file_layout;

/* ========================================================================= */

Array create_layout_with_vars(Class layout, uns_int size)
{
    Array result = NEW_ARRAYED(struct Array_t, Optr[size]);
    HEADER(result) = layout;
    result->size   = size;
    return result;
}

void change_slot_type(Class class, Class type, long counter, ...)
{
    Array layout = (Array)class->layout;
    va_list args;
    va_start(args, counter);
    while (counter--) {
        long idx = va_arg(args, long);
        HEADER(layout->values[idx]) = type;
    }
    va_end(args);
}

Optr create_object_layout(uns_int size, va_list args)
{
    if (size == 0) { va_end(args); return empty_object_layout; }
    Array result = create_layout_with_vars(ObjectLayout_Class, size);
    long i;
    for (i = 0; i < size; i++) {
        result->values[i] = (Optr)new_Slot(i, va_arg(args, wchar_t *));
    }
    va_end(args);
    return (Optr)result;
}

Optr create_array_layout(uns_int size, va_list args)
{
    if (size == 0) { va_end(args); return empty_array_layout; }
    Array result = create_layout_with_vars(ArrayLayout_Class, size);
    long i;
    for (i = 0; i < size; i++) {
        result->values[i] = (Optr)new_Slot(i, va_arg(args, wchar_t*));
    }
    va_end(args);
    return (Optr)result;
}

Optr create_layout(uns_int size, Type_Tag tag, ...)
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
