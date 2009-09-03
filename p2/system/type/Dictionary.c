
Type_Dictionary *
new_Dictionary()
{
    Type_Dictionary * result = NEW(Type_Dictionary);
    HEADER(result)           = (Object)Dictionary_Class;
    result->layout           = new_Array_With(2, Null);
    return result;
}


Object Dictionary_lookup(Type_Dictionary * self, Object key)
{
    int i;
    for (i = 0; i < self->layout->size; i=i+2) {
        if (self->layout->values[i] == key) {
            return self->layout->values[i+1];
        }
    }
    return NULL;
}

void Dictionary_grow(Type_Dictionary *self)
{
    Type_Array * old_layout = self->layout;
    self->layout = new_Array_With(old_layout->size*2, Null);
    int i;
    for(i=0; i<old_layout->size; i++) {
        self->layout->values[i] = old_layout->values[i];
    }
}

Object Dictionary_store_(Type_Dictionary * self, Object key, Object value)
{
    /* just store at the first empty location */
    int i;
    for (i = 0; i < self->layout->size; i=i+2) {
        if (self->layout->values[i] == Null || self->layout->values[i] == key) {
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

void pre_initialize_Dictionary()
{
    Dictionary_Class    = new_Named_Class((Object)Object_Class, L"Dictionary");
}

void post_initialize_Dictionary(){}

