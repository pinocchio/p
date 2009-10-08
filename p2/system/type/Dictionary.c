
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Dictionary.h>

/* ========================================================================= */

Type_Class Type_Dictionary_Class;

/* ========================================================================= */

Type_Dictionary new_Type_Dictionary()
{
    NEW_OBJECT(Type_Dictionary);
    result->layout           = new_Type_Array_With(2, Nil);
    return result;
}

void pre_init_Type_Dictionary()
{
    Type_Dictionary_Class    = new_Named_Class((Object)Type_Object_Class, L"Type_Dictionary");
}

/* ========================================================================= */

Object Type_Dictionary_lookup(Type_Dictionary self, Object key)
{
    int i;
    for (i = 0; i < self->layout->size->value; i=i+2) {
        if (self->layout->values[i] == key) {
            return self->layout->values[i+1];
        }
    }
    return NULL;
}

void Type_Dictionary_grow(Type_Dictionary self)
{
    Type_Array old_layout = self->layout;
    self->layout            = new_Type_Array_With(old_layout->size->value*2, Nil);
    int i;
    for(i=0; i<old_layout->size->value; i++) {
        self->layout->values[i] = old_layout->values[i];
    }
}

Object Type_Dictionary_store_(Type_Dictionary self, Object key, Object value)
{
    /* just store at the first empty location */
    int i;
    for (i = 0; i < self->layout->size->value; i=i+2) {
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

NATIVE1(Type_Dictionary_Type_ObjectAt_)
    Object result = Type_Dictionary_lookup((Type_Dictionary)self, args->values[0]);
    if(!result) {
        result = Nil;
    }
    push_EXP(result);
}

NATIVE2(Type_Dictionary_Type_ObjectAt_put_)
    Type_Dictionary_store_((Type_Dictionary)self, args->values[0], args->values[1]);
    push_EXP(args->values[1]);
}

/* ========================================================================= */

void post_init_Type_Dictionary()
{
    store_native_method(Type_Dictionary_Class, SMB_objectAt_, NM_Type_Dictionary_Type_ObjectAt_);
    store_native_method(Type_Dictionary_Class, SMB_objectAt_put_, NM_Type_Dictionary_Type_ObjectAt_put_);
}

