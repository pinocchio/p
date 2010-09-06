#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

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

/* ========================================================================= */

static Optr instantiate_Array(Class class, Array ivars, uns_int extra)
{
    uns_int base = ivars->size;
    Array result = NEW_ARRAYED(struct Array_t, Optr[base+extra]);
    result->size = extra;
    uns_int i;

    for (i = base; i < base+extra; i++) {
        result->values[i] = nil;
    }

    for (i = 0; i < base; i++) {
        result->values[i] = nil;
    }

    HEADER(result) = class;
    assert0(HEADER(result) != (Class)nil);
    return (Optr)result;
}

NATIVE2(Array_basicInstantiate_sized_)
    Optr cls           = NATIVE_ARG(0);
    assert_class(cls);
    Optr w_size        = NATIVE_ARG(1);
    long size          = unwrap_int(w_size);
    assert0(size >= 0);
    Optr result        = instantiate_Array((Class)cls, (Array)self, size);
    RETURN_FROM_NATIVE(result);
}

static Optr instantiate_Object(Class class, Array ivars)
{
    uns_int size = ivars->size;
    Object result = NEW_ARRAYED(struct Object_t, Optr[size]);
    uns_int i;
    for (i = 0; i < size; i++) {
        result->ivals[i] = nil;
    }
    HEADER(result) = class;
    assert0(HEADER(result) != (Class)nil);
    return (Optr)result;
}

NATIVE1(Object_basicInstantiate_)
    Optr cls    = NATIVE_ARG(0);
    assert_class(cls);
    Optr result = instantiate_Object((Class)cls, (Array)self);
    RETURN_FROM_NATIVE(result);
}

NATIVE2(Words_basicInstantiate_sized_)
    Optr cls           = NATIVE_ARG(0);
    assert_class(cls);
    Optr w_size        = NATIVE_ARG(1);
    long size          = unwrap_int(w_size);
    assert0(size >= 0);
    String result      = new_String_sized(size);
    HEADER(result)     = (Class)cls;
    RETURN_FROM_NATIVE(result);
}

/* ========================================================================= */

Object instantiate(Class cls)
{
    Array layout = (Array)cls->layout;
    assert1(HEADER(layout) == ObjectLayout_Class, "Can only instantiate objects");
    return (Object)instantiate_Object(cls, (Array)cls->layout);
}

Array instantiate_sized(Class cls, uns_int size)
{
    Array layout = (Array)cls->layout;
    assert1(HEADER(layout) == ArrayLayout_Class, "Can only instantiate objects");
    assert1(size >= 0, "Size has to be bigger than 0");
    return (Array)instantiate_Array(cls, (Array)cls->layout, size);
}
/* ========================================================================= */

void post_init_Type_Layout()
{   
    PLUGIN natives = add_plugin(L"Class.Layout.Object");
    store_native(natives, L"basicInstantiate:",       NM_Object_basicInstantiate_);
    natives = add_plugin(L"Class.Layout.Array");
    store_native(natives, L"basicInstantiate:sized:", NM_Array_basicInstantiate_sized_);
    natives = add_plugin(L"Class.Layout.Words");
    store_native(natives, L"basicInstantiate:sized:", NM_Words_basicInstantiate_sized_);
}
