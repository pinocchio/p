
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <system/type/Class.h>

/* ======================================================================== */

Type_Class Type_Class_Class;
Type_Class MetaType_Class_Class;

/* ======================================================================== */

Type_Class new_Class(Object superclass)
{
    Type_Class result   = NEW_t(Type_Class);
    result->methods     = new_Type_Dictionary();
    HEADER(result)      = (Object) Type_Class_Class;
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

/* ======================================================================== */

void CNT_Class_super()
{
    zap_CNT();
    Object class = peek_EXP(1);
    if (HEADER(class) == (Object)Type_Class_Class) {
        poke_EXP(1, ((Type_Class)class)->super);
        return;
    }
    // TODO queue "super" send.
    assert(NULL);
}


void Type_Class_dispatch(InlineCache * cache, Object self, Object class,
                    Object msg, Type_Array args)
{
    //printf("%ls>>%ls\n", ((Type_Class)class)->name->value, ((Type_Symbol)msg)->value);
    //printf("%i\n", ((Type_SmallInt)self)->value);
    //printf("%i\n", ((Type_SmallInt)peek_EXP(1))->value);
    
    /* Monomorphic inline cache */
    if (class == cache->type) {
        LOG("Cached dispatch \"%ls\" on \"%ls\"\n",  
            ((Type_Symbol)msg)->value,
            ((Type_Class)HEADER(self))->name->value);
        return Method_invoke(cache->method, self, class, args);
    }
    if (HEADER(class) != (Object)Type_Class_Class) {
        LOG("Wrong meta class not of type Type_Class_Class\n");
        assert(HEADER(class) == (Object)Type_Class_Class);
    }
    //LOG("Dispatching on \"%ls\"\n",  ((Type_Class)class)->name->value);
    LOG("Dispatching \"%ls\" on \"%ls\"\n",  
            ((Type_Symbol)msg)->value,
            ((Type_Class)HEADER(self))->name->value);
    
    Object method = NULL;    
    while (class != Nil) {
        Type_Dictionary mdict = ((Type_Class) class)->methods;
        method = Type_Dictionary_lookup(mdict, msg);
        if (!method) {
            Type_Class super = ((Type_Class) class)->super;
			if (class == super) {
				printf("Infinite Lookup in \"%ls\" for \"%ls\"\n", 
							((Type_Class)class)->name->value,
							((Type_Symbol)msg)->value);
				assert(class != super);
			}
			class = super;
			LOG("Parent Lookup continueing in \"%ls\"\n", ((Type_Class)class)->name->value);
        } else {
            cache->type   = class;
            cache->method = method;
            return Method_invoke(method, self, class, args);
        }
    }
    
    // TODO send DNU;
    printf("\"%ls\" does not understand \"%ls\"\n", 
           ((Type_Class)HEADER(self))->name->value,
           ((Type_Symbol)msg)->value);
    assert(NULL);
}

/* ======================================================================== */

void post_init_Class()
{
    // put the names here, now after the Symbols_Class is initialized
}
