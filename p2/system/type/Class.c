
//Type_Class * Class_Class
//Type_Class * MetaClass_Class;

/* ======================================================================== */

Type_Class* new_Class(Object superclass)
{
    Type_Class * result = NEW(Type_Class);
    result->methods     = new_Dictionary();
    HEADER(result)      = (Object) Class_Class;
    result->super       = superclass;
    return result;
}

Type_Class * new_named_MetaClass(Object superclass, const wchar_t* name)
{
    Type_Class * result = (Type_Class *) new_Class(superclass);
    result->name        = new_String(name);
    HEADER(result)      = (Object)MetaClass_Class;
    return result;
}

Type_Class* new_Named_Class(Object superclass, const wchar_t* name)
{
    Type_Class * result = (Type_Class *) new_Class(superclass);
    result->name        = new_String(name);
    //HEADER(result)      = (Object)new_named_MetaClass(superclass, name);
    return result;
}

void pre_initialize_Class()
{
    // explicitely use new_Class not new_Named_Class! to avoid early use
    // of symbols.
    MetaClass_Class = new_Class(Nil);
}

/* ======================================================================== */

void Class_super()
{
    zap_CNT();
    Object class = peek_EXP(1);
    if (HEADER(class) == (Object)Class_Class) {
        poke_EXP(1, ((Type_Class *)class)->super);
        return;
    }
    // TODO queue "super" send.
    assert(NULL);
}


void Class_dispatch(InlineCache * cache, Object self, Object class,
                    Object msg, Type_Array * args)
{
    //printf("%ls>>%ls\n", ((Type_Class*)class)->name->value, ((Type_Symbol*)msg)->value);
    //printf("%i\n", ((Type_SmallInt*)self)->value);
    //printf("%i\n", ((Type_SmallInt*)peek_EXP(1))->value);
    
    /* Monomorphic inline cache */
    if (class == cache->type) {
        LOG("Cached dispatch \"%ls\" on \"%ls\"\n",  
            ((Type_Symbol*)msg)->value,
            ((Type_Class*)HEADER(self))->name->value);
        return Method_invoke(cache->method, self, class, args);
    }
    if (HEADER(class) != (Object)Class_Class) {
        LOG("Wrong meta class not of type Class_Class\n");
        assert(HEADER(class) == (Object)Class_Class);
    }
    //LOG("Dispatching on \"%ls\"\n",  ((Type_Class*)class)->name->value);
    LOG("Dispatching \"%ls\" on \"%ls\"\n",  
            ((Type_Symbol*)msg)->value,
            ((Type_Class*)HEADER(self))->name->value);
    
    Object method = NULL;    
    while (class != Nil) {
        Type_Dictionary * mdict = ((Type_Class *) class)->methods;
        method = Dictionary_lookup(mdict, msg);
        if (!method) {
            class = ((Type_Class *) class)->super;
        } else {
            cache->type   = class;
            cache->method = method;
            return Method_invoke(method, self, class, args);
        }
    }
    
    // TODO send DNU;
    printf("\"%ls\" does not understand \"%ls\"\n", 
           ((Type_Class*)HEADER(self))->name->value,
           ((Type_Symbol*)msg)->value);
    assert(NULL);
}


/* ======================================================================== */

void post_initialize_Class()
{
    // put the names here, now after the Symbols_Class is initialized
}
