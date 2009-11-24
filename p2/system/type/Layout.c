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

Type_Array create_type_with_vars(Type_Class type, uns_int size)
{
    Type_Array result = NEW_ARRAYED(struct Type_Array_t, Object[size]);
    HEADER(result) = (Object)type;
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

    empty_array_layout      = (Object)create_type_with_vars(Type_ArrayLayout, 0);
    empty_object_layout     = (Object)create_type_with_vars(Type_ObjectLayout, 0);
    words_layout            = basic_instantiate_Object(Type_WordsLayout, 0);
    bytes_layout            = basic_instantiate_Object(Type_BytesLayout, 0);
    int_layout              = basic_instantiate_Object(Type_IntLayout, 0);
    long_layout             = basic_instantiate_Object(Type_LongLayout, 0);
    character_layout        = basic_instantiate_Object(Type_CharacterLayout, 0);
    file_layout             = basic_instantiate_Object(Type_FileLayout, 0);

    Type_Layout->type           = empty_object_layout;
    Type_ObjectLayout->type     = empty_array_layout;
    Type_ArrayLayout->type      = empty_array_layout;
    Type_CharacterLayout->type  = empty_object_layout;
    Type_WordsLayout->type      = empty_object_layout;
    Type_IntLayout->type        = empty_object_layout;
    Type_LongLayout->type       = empty_object_layout;
    Type_BytesLayout->type      = empty_object_layout;
    Type_FileLayout->type       = empty_object_layout;
}

Object create_object_type(uns_int size, va_list args)
{
    if (size == 0) { va_end(args); return empty_object_layout; }
    Type_Array result = create_type_with_vars(Type_ObjectLayout, size);
    while (0 < size) {
        size--;
        result->values[size] = (Object)new_AST_InstVariable(size,
                                                            va_arg(args, wchar_t *));
    }
    va_end(args);
    return (Object)result;
}

Object create_array_type(uns_int size, va_list args)
{
    if (size == 0) { va_end(args); return empty_array_layout; }
    Type_Array result = create_type_with_vars(Type_ArrayLayout, size);
    while (0 < size) {
        size--;
        result->values[size] = (Object)new_AST_InstVariable(size,
                                                            va_arg(args, wchar_t *));
    }
    va_end(args);
    return (Object)result;
}

Object create_type(uns_int size, Type_Tag tag, ...)
{
    va_list args;
    va_start(args, tag);
    if (tag == OBJECT)  { return create_object_type(size, args); }
    if (tag == ARRAY)   { return create_array_type(size, args); }
    if (tag == WORDS)   { return words_layout; }
    if (tag == BYTES)   { return bytes_layout; }
    if (tag == INT)     { return int_layout; }
    if (tag == LONG)    { return long_layout; }
    if (tag == CHAR)    { return character_layout; }
    if (tag == FILETAG) { return file_layout; }
    assert1(NULL, "Unknown type, should never happen!");
    return NULL;
}

/* ========================================================================= */

void post_init_Type_Layout()
{

}
