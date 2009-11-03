
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Dictionary.h>

/* ========================================================================= */

Type_Class Type_Dictionary_Class;

/* ========================================================================= */

Type_Dictionary new_Type_Dictionary()
{
    NEW_OBJECT(Type_Dictionary);
    result->layout           = new_Type_Array_With_All(2, Nil);
    return result;
}

void pre_init_Type_Dictionary()
{
    Type_Dictionary_Class    = new_Named_Class((Object)Type_Object_Class,
                                               L"Type_Dictionary",
                                               create_object_tag(TYPE_DICTIONARY));
}

/* ========================================================================= */

Object Type_Dictionary_lookup(Type_Dictionary self, Object key)
{
    int i;
    for (i = 0; i < self->layout->size; i=i+2) {
        if (self->layout->values[i] == key) {
            return self->layout->values[i+1];
        }
    }
    return NULL;
}

void Type_Dictionary_grow(Type_Dictionary self)
{
    Type_Array old_layout = self->layout;
    self->layout            = new_Type_Array_With_All(old_layout->size*2, Nil);
    int i;
    for(i=0; i<old_layout->size; i++) {
        self->layout->values[i] = old_layout->values[i];
    }
}

Object Type_Dictionary_store_(Type_Dictionary self, Object key, Object value)
{
    /* just store at the first empty location */
    int i;
    for (i = 0; i < self->layout->size; i=i+2) {
        if (self->layout->values[i] == Nil || self->layout->values[i] == key) {
            self->layout->values[i]   = key;
            self->layout->values[i+1] = value;
            return value;
        }
    }
    Type_Dictionary_grow(self);
    self->layout->values[i]   = key;
    self->layout->values[i+1] = value;
    
    return NULL;
}

/* ========================================================================= */

NATIVE1(Type_Dictionary_at_)
    Object w_index = NATIVE_ARG(0);
    Object result = Type_Dictionary_lookup((Type_Dictionary)self, w_index);
    if(!result) {
        result = Nil;
    }
    RETURN_FROM_NATIVE(result);
}

NATIVE2(Type_Dictionary_at_put_)
    Object w_index = NATIVE_ARG(0);
    Object new = NATIVE_ARG(1);
    Type_Dictionary_store_((Type_Dictionary)self, w_index, new);
    RETURN_FROM_NATIVE(new);
}

/* ========================================================================= */

void post_init_Type_Dictionary()
{
    store_native_method(Type_Dictionary_Class, SMB_at_, NM_Type_Dictionary_at_);
    store_native_method(Type_Dictionary_Class, SMB_at_put_, NM_Type_Dictionary_at_put_);
}

