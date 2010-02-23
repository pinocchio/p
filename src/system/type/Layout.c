#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Layout.h>

/* ========================================================================= */

Type_Class Type_Layout;
Type_Class Type_ObjectLayout;
Type_Class Type_ArrayLayout;
Type_Class Type_CharacterLayout;
Type_Class Type_WordsLayout;
Type_Class Type_IntLayout;
Type_Class Type_LongLayout;
Type_Class Type_BytesLayout;
Type_Class Type_FileLayout;

Object empty_object_layout;
Object empty_array_layout;
Object words_layout;
Object bytes_layout;
Object int_layout;
Object long_layout;
Object character_layout;
Object file_layout;

/* ========================================================================= */

Type_Array create_layout_with_vars(Type_Class layout, uns_int size)
{
    Type_Array result = NEW_ARRAYED(struct Type_Array_t, Object[size]);
    HEADER(result) = (Object)layout;
    result->size   = size;
    return result;
}

void pre_init_Type_Layout()
{
    Type_Layout             = new_Bootstrapping_Class((Object)Type_Object_Class); 
    Type_ObjectLayout       = new_Bootstrapping_Class((Object)Type_Layout); 
    Type_ArrayLayout        = new_Bootstrapping_Class((Object)Type_Layout); 
    Type_CharacterLayout    = new_Bootstrapping_Class((Object)Type_Layout); 
    Type_WordsLayout        = new_Bootstrapping_Class((Object)Type_Layout); 
    Type_IntLayout          = new_Bootstrapping_Class((Object)Type_Layout); 
    Type_LongLayout         = new_Bootstrapping_Class((Object)Type_Layout); 
    Type_BytesLayout        = new_Bootstrapping_Class((Object)Type_Layout); 
    Type_FileLayout         = new_Bootstrapping_Class((Object)Type_Layout); 

    empty_array_layout      = (Object)create_layout_with_vars(Type_ArrayLayout, 0);
    empty_object_layout     = (Object)create_layout_with_vars(Type_ObjectLayout, 0);
    words_layout            = basic_instantiate_Object(Type_WordsLayout, 0);
    bytes_layout            = basic_instantiate_Object(Type_BytesLayout, 0);
    int_layout              = basic_instantiate_Object(Type_IntLayout, 0);
    long_layout             = basic_instantiate_Object(Type_LongLayout, 0);
    character_layout        = basic_instantiate_Object(Type_CharacterLayout, 0);
    file_layout             = basic_instantiate_Object(Type_FileLayout, 0);

    Type_Layout->layout           = empty_object_layout;
    Type_ObjectLayout->layout     = empty_array_layout;
    Type_ArrayLayout->layout      = empty_array_layout;
    Type_CharacterLayout->layout  = empty_object_layout;
    Type_WordsLayout->layout      = empty_object_layout;
    Type_IntLayout->layout        = empty_object_layout;
    Type_LongLayout->layout       = empty_object_layout;
    Type_BytesLayout->layout      = empty_object_layout;
    Type_FileLayout->layout       = empty_object_layout;
}

Object create_object_layout(uns_int size, va_list args)
{
    if (size == 0) { va_end(args); return empty_object_layout; }
    Type_Array result = create_layout_with_vars(Type_ObjectLayout, size);
    int i;
    for (i = 0; i < size; i++) {
        result->values[i] =
            (Object)new_AST_InstVariable(i,
                                         va_arg(args, wchar_t *));
    }
    va_end(args);
    return (Object)result;
}

Object create_array_layout(uns_int size, va_list args)
{
    if (size == 0) { va_end(args); return empty_array_layout; }
    Type_Array result = create_layout_with_vars(Type_ArrayLayout, size);
    int i;
    for (i = 0; i < size; i++) {
        result->values[i] = (Object)new_AST_InstVariable(i, va_arg(args, wchar_t *));
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
    if (tag == LONG)    { return long_layout; }
    if (tag == CHAR)    { return character_layout; }
    if (tag == FILETAG) { return file_layout; }
    assert1(NULL, "Unknown layout, should never happen!");
    return NULL;
}

/* ========================================================================= */

void post_init_Type_Layout()
{
    Type_ObjectLayout->name = new_Type_Symbol(L"ObjectLayout");
    Type_ArrayLayout->name  = new_Type_Symbol(L"ArrayLayout");
    Type_IntLayout->name    = new_Type_Symbol(L"IntLayout");
    Type_WordsLayout->name  = new_Type_Symbol(L"WordsLayout");
    // TODO fill in the bootstrapping classes
}
