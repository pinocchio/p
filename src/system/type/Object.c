
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <system/type/Object.h>

/* ========================================================================= */

DECLARE_CLASS(Type_Object);

/* ========================================================================= */

void pre_init_Type_Object() 
{
    // explicitely use new_Class not new_Class_named! to avoid early use
    // of symbols.
    // do manually instanciate since we cannot use dict yet
    Type_Class Object_mclass  = (Type_Class)basic_instantiate_Object(Metaclass, METACLASS_SIZE);
    Type_Object_Class         = (Type_Class)basic_instantiate_Object(Object_mclass, CLASS_SIZE);
    Type_Object_Class->super  = (Type_Class)Nil;

    /*
    Type_Class_Class          = NEW_t(Type_Class);
    Type_Class_Class->layout    = create_layout(4, OBJECT);
    
    HEADER(Type_Class_Class)  = (Object)Type_Class_Class;
    Type_Class_Class->super   = (Object)Type_Object_Class;
    Type_Object_Class->layout = create_layout(0, OBJECT);
    
    HEADER(Type_Object_Class) = (Object) Type_Class_Class;
    Type_Object_Class->super  = Nil;
    */
}

void inter_init_Type_Object() 
{
    HEADER(Type_Object_Class)->layout = create_layout(CLASS_SIZE, OBJECT, CLASS_VARS);
    Type_Object_Class->layout         = create_layout(OBJECT_SIZE, OBJECT); 
    REFER_TO(Type_Object);
}

/* ========================================================================= */

Type_SmallInt Type_Object_hash(Type_Object object)
{
    int hash = (int)(uns_int)object;
    return new_Type_SmallInt(hash);
}

NATIVE0(Type_Object_hash)
    RETURN_FROM_NATIVE(Type_Object_hash((Type_Object)self));
}

NATIVE0(Type_Object_basicNew)
    assert_class(self);
    Object result = instantiate((Type_Class)self);
    RETURN_FROM_NATIVE(result);
}

NATIVE0(Type_Object_class)
    RETURN_FROM_NATIVE(HEADER(self))
}

NATIVE1(Type_Object_equals)
    Object arg = NATIVE_ARG(0);
    RETURN_FROM_NATIVE(get_bool(self == arg));
}

Object raw_Type_Object_at(Type_Object o, Object tag, int index)
{
    ASSERT_TAG_SIZE(tag, index);
    return o->ivals[index];
}

void raw_Type_Object_at_put(Type_Object o, Object tag,
                            int index, Object value)
{
    ASSERT_TAG_SIZE(tag, index); o->ivals[index] = value;
}

Object Object_instVarAt_(Object self, int index)
{
    Object tag = GETTAG(self);
    if (TAG_IS_LAYOUT(tag, Object)) {
        return raw_Type_Object_at((Type_Object)self, tag, index);
    } else if (TAG_IS_LAYOUT(tag, Array)) {
        return raw_Type_Array_instAt((Type_Array)self, tag, index);
    } else {
        assert1(NULL, "Trying to access object without instvars");
		return NULL;
    }
}

void Object_instVarAt_put_(Object self, int index, Object value)
{
    Object tag = GETTAG(self);
    if (TAG_IS_LAYOUT(tag, Object)) {
        raw_Type_Object_at_put((Type_Object)self, tag, index, value);
    } else if (TAG_IS_LAYOUT(tag, Array)) {
        raw_Type_Array_instAt_put((Type_Array)self, tag, index, value);
    } else {
        assert1(NULL, "Trying to access object without instvars");
    }
}

NATIVE1(Type_Array_basicNew_)
    assert_class(self);
    Object w_size = NATIVE_ARG(0);
    int size      = unwrap_int(w_size);
    assert0(size >= 0);
    Object result = instantiate_sized((Type_Class)self, (uns_int)size);
    RETURN_FROM_NATIVE(result);
}

NATIVE0(Type_Object_size)
    Object tag = GETTAG(self);
    uns_int size;
    if (TAG_IS_LAYOUT(tag, Array)) {
        size = ((Type_Array)self)->size;
    } else if (TAG_IS_LAYOUT(tag, Words)) {
        size = ((Type_Symbol)self)->size;
    } else {
        assert(NULL, printf("Not indexable\n"););       
        // make the compiler happy :)
        return;
    }
    Type_SmallInt result = new_Type_SmallInt(size);
    RETURN_FROM_NATIVE(result);
}

Object raw_Type_Array_at(Type_Array array, Object tag, int index)
{
    assert(array->size > index,
        printf("Array at: %i out of bounds %"F_I"u\n" , index, array->size));
    assert(0 <= index, 
        printf("Array at: %i should be positive\n", index));
    return array->values[TAG_SIZE(tag) + index];
}

NATIVE1(Type_Array_at_)
    Object w_index = NATIVE_ARG(0);
    int index      = unwrap_int(w_index);
    Type_Array as  = (Type_Array)self;

    Object tag = GETTAG(as);    
    ASSERT_TAG_LAYOUT(tag, Array);

    RETURN_FROM_NATIVE(raw_Type_Array_at(as, tag, index - 1));
}

void raw_Type_Array_at_put(Type_Array array, Object tag,
                           int index, Object value)
{
    assert0(array->size > index);
    assert0(0 <= index);
    array->values[TAG_SIZE(tag) + index] = value;
}

NATIVE2(Type_Array_at_put_)
    Object w_index = NATIVE_ARG(0);
    Object w_arg   = NATIVE_ARG(1);
    int index      = unwrap_int(w_index);
    Type_Array as  = (Type_Array)self;
   
    Object tag = GETTAG(as);
    ASSERT_TAG_LAYOUT(tag, Array); 
    raw_Type_Array_at_put(as, tag, index - 1, w_arg);
    RETURN_FROM_NATIVE(w_arg);
}

NATIVE2(Type_Object_perform_withArguments_)
    Object w_selector   = NATIVE_ARG(0);
    Object w_args       = NATIVE_ARG(1);

    Object tag = GETTAG(w_args);
    ASSERT_TAG_LAYOUT(tag, Array);

    zapn_EXP(4);    

    Type_Class_direct_dispatch_withArguments(self, HEADER(self),
                                             w_selector, (Type_Array)w_args);
}

NATIVE1(Type_Object_perform_)
    Object w_selector = NATIVE_ARG(0);
    zapn_EXP(3);
    Type_Class_direct_dispatch(self, HEADER(self), w_selector, 0);
}


/* ========================================================================= */

void post_init_Type_Object()
{
    // put the names here, now after the Symbols_Class is initialized
    /* 
    Type_Class_Class->name   = new_Type_String(L"Type_Class");
    Type_Class_Class->methods = new_Collection_Dictionary();
    */
    HEADER(Type_Object_Class)->methods = new_Collection_Dictionary();
    Type_Object_Class->name = new_Type_String(L"Object");
    Type_Object_Class->methods = new_Collection_Dictionary();

    Collection_Dictionary natives = add_plugin(L"Type.Object");
    
    store_native(natives, SMB_size,                   NM_Type_Object_size);
    store_native(natives, SMB_at_,                    NM_Type_Array_at_);
    store_native(natives, SMB_at_put_,                NM_Type_Array_at_put_);
    store_native(natives, SMB_basicNew,               NM_Type_Object_basicNew);
    store_native(natives, SMB_basicNew_,              NM_Type_Array_basicNew_);
    store_native(natives, SMB__pequal,                NM_Type_Object_equals);
    store_native(natives, SMB__equal,                 NM_Type_Object_equals);
    store_native(natives, SMB_class,                  NM_Type_Object_class);
    store_native(natives, SMB_hash,                   NM_Type_Object_hash);
    store_native(natives, SMB_perform_withArguments_, NM_Type_Object_perform_withArguments_);
    store_native(natives, SMB_perform_,               NM_Type_Object_perform_);
}
