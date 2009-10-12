
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Class.h>

/* ========================================================================= */

Type_Class Type_Class_Class;
Type_Class MetaType_Class_Class;

/* ========================================================================= */

Type_Class new_Class(Object superclass)
{
    NEW_OBJECT(Type_Class);
    result->methods     = new_Type_Dictionary();
    result->super       = superclass;
    return result;
}

Type_Class new_named_MetaType_Class(Object superclass, const wchar_t* name)
{
    Type_Class result = (Type_Class) new_Class(superclass);
    result->name      = new_Type_String(name);
    HEADER(result)    = (Object)MetaType_Class_Class;
    return result;
}

Type_Class new_Named_Class(Object superclass, const wchar_t* name)
{
    Type_Class result = (Type_Class) new_Class(superclass);
    result->name      = new_Type_String(name);
    //HEADER(result)  = (Object)new_named_MetaType_Class(superclass, name);
    return result;
}

void pre_init_Class()
{
    // explicitely use new_Class not new_Named_Class! to avoid early use
    // of symbols.
    MetaType_Class_Class = new_Class(Nil);
}

/* ========================================================================= */

CNT(Class_super)
    Object class = peek_EXP(1);
    if (HEADER(class) == (Object)Type_Class_Class) {
        poke_EXP(1, ((Type_Class)class)->super);
        return;
    }
    assert1(NULL, "TODO queue \"super\" send");
}


void Method_invoke(Object method, Object self, Object class, Type_Array args) {
    if (HEADER(method) == (Object)AST_Native_Method_Class) {
        AST_Native_Method_invoke((AST_Native_Method)method, self, class, args);
    } else if (HEADER(method) == (Object)Runtime_Closure_Class) {
        Runtime_Closure_invoke((Runtime_Closure)method, self, class, args);
    }
}

void Type_Class_dispatch(InlineCache * cache, Object self, Object class,
                    Object msg, Type_Array args)
{
    assert0(msg != Nil);
    #ifdef DEBUG
    LOG("%ls>>%ls\n", ((Type_Class)class)->name->value, ((Type_Symbol)msg)->value);
    #endif // DEBUG
    
    /* Monomorphic inline cache */
    // TODO put that directly on the sender side
    // TODO create Polymorphic inline cache
    if (class == cache->type) {
        #ifdef DEBUG
        LOG("Cached dispatch \"%ls\" on \"%ls\"\n",  
            ((Type_Symbol)msg)->value,
            ((Type_Class)HEADER(self))->name->value);
        #endif // DEBUG
        return Method_invoke(cache->method, self, class, args);
    }
	assert1(HEADER(class) == (Object)Type_Class_Class, 
        "Wrong meta class not of type Type_Class_Class");

    #ifdef DEBUG
    LOG("Dispatching on \"%ls\"\n",  ((Type_Class)class)->name->value);
    #endif // DEBUG
    
    Object method = NULL;    
    while (class != Nil) {
        #ifdef DEBUG
        LOG("Lookup continuing in \"%ls\"\n", ((Type_Class)class)->name->value);
        #endif // DEBUG
        Type_Dictionary mdict = ((Type_Class) class)->methods;
        method                = Type_Dictionary_lookup(mdict, msg);
        if (!method) {
            Object super = ((Type_Class) class)->super;
			assert((class != super), 
                printf("Infinite Lookup in \"%ls\" for \"%ls\"\n", 
							((Type_Class)class)->name->value,
							((Type_Symbol)msg)->value));
			class = super;
        } else {
            //TODO create second level cache to directly store the misses
            cache->type   = class;
            cache->method = method;
            return Method_invoke(method, self, class, args);
        }
    }
    
    // TODO send DNU;
    assert(NULL, printf("\"%ls\" does not understand \"%ls\"\n", 
           ((Type_Class)HEADER(self))->name->value,
           ((Type_Symbol)msg)->value));
}



void print_Class(Object obj)
{
    if (obj == NULL) {
        printf("NULL");
        return;
    }
    if (obj == Nil) {
        printf("Nil");
        return;
    }
    Type_Class class = (Type_Class)HEADER(obj);
    assert0(class != NULL || (Object)class != Nil);
    printf("Class: %ls\n", class->name->value);

}
/* ========================================================================= */

void post_init_Class()
{
    // put the names here, now after the Symbols_Class is initialized
}
