
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <system/type/Dictionary.h>

/* ======================================================================== */

Type_Class Dictionary_Class;

/* ======================================================================== */

Type_Dictionary new_Dictionary()
{
    Type_Dictionary result = NEW_t(Type_Dictionary);
    HEADER(result)           = (Object)Dictionary_Class;
    result->layout           = new_Array_With(2, Nil);
    return result;
}

extern void pre_initialize_Dictionary()
{
    Dictionary_Class    = new_Named_Class((Object)Object_Class, L"Dictionary");
}

/* ======================================================================== */

Object Dictionary_lookup(Type_Dictionary self, Object key)
{
    int i;
    for (i = 0; i < self->layout->size->value; i=i+2) {
        if (self->layout->values[i] == key) {
            return self->layout->values[i+1];
        }
    }
    return NULL;
}

void Dictionary_grow(Type_Dictionary self)
{
    Type_Array old_layout = self->layout;
    self->layout            = new_Array_With(old_layout->size->value*2, Nil);
    int i;
    for(i=0; i<old_layout->size->value; i++) {
        self->layout->values[i] = old_layout->values[i];
    }
}

Object Dictionary_store_(Type_Dictionary self, Object key, Object value)
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
    Dictionary_grow(self);
    self->layout->values[i]   = key;
    self->layout->values[i+1] = value;
    
    return NULL;
}

/* ======================================================================== */

NATIVE1(NM_Dictionary_objectAt_)
    Object result = Dictionary_lookup((Type_Dictionary)self, args->values[0]);
    if(!result) {
        result = Nil;
    }
    push_EXP(result);
}

NATIVE2(NM_Dictionary_objectAt_put_)
    Dictionary_store_((Type_Dictionary)self, args->values[0], args->values[1]);
    push_EXP(args->values[1]);
}

/* ======================================================================== */

extern void post_initialize_Dictionary()
{
    store_native_method(Dictionary_Class, SMB_objectAt_, NM_Dictionary_objectAt_);
    store_native_method(Dictionary_Class, SMB_objectAt_put_, NM_Dictionary_objectAt_put_);
}

