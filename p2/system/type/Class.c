
Type_Class* new_Class(Object superclass)
{
    Type_Class * result = NEW(Type_Class);
    result->methods     = new_Dictionary();
    HEADER(result)      = (Object) Class_Class;
    result->super       = superclass;
    return result;
}

Type_Class* new_Named_Class(Object superclass, const wchar_t* name)
{
    Type_Class * result = (Type_Class *) new_Class(superclass);
    result->name = new_String(name);
    return result;
}

void type_class_super()
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

void store_method(Type_Class * class, Object symbol, Object method)
{
    Type_Dictionary * dict = class->methods;
    Dictionary_store_(dict, symbol, method);
}

void store_native_method(Type_Class * class, Object symbol, native code)
{
    AST_Native_Method * native_method = new_Native_Method(code);
    store_method(class, symbol, (Object)native_method);
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
    assert(HEADER(class) == (Object)Class_Class);
    LOG("Dispatching on \"%ls\"\n",  ((Type_Class*)class)->name->value);
    //LOG("Dispatching \"%ls\" on \"%ls\"\n",  
    //        ((Type_Symbol*)msg)->value,
    //        ((Type_Class*)HEADER(self))->name->value);
    
    Object method = NULL;    
    while (class != Null) {
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

NATIVE(Object_equals)
{
    push_EXP(get_bool_const(self == args->values[0]));
}

wchar_t * Object_classname(Object self) 
{
    return ((Type_String *)((Type_Class *)HEADER(self))->name)->value;
}

/* ======================================================================== */

void pre_initialize_Object() 
{
    // explicitely use new_Class not new_Named_Class! to avoid early use
    // of symbols.
    Class_Class         = new_Class(Null);
    HEADER(Class_Class) = (Object)Class_Class;
    
    Object_Class        = new_Class(Null);
}

void post_initialize_Object()
{
    // put the names here, now after the Symbols_Class is initialized
    Class_Class->name  = new_String(L"Class");
    Object_Class->name = new_String(L"Object");
    
    store_native_method((Type_Class *)Object_Class, Symbol_equals_, Object_equals);
    
    assert(Dictionary_lookup(Object_Class->methods, Symbol_equals_));
    assert(HEADER((AST_Native_Method*)Dictionary_lookup(Object_Class->methods, Symbol_equals_)) == (Object)Native_Method_Class);
}