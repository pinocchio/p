#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

Type_Class Metaclass;
Type_Class Class;
Type_Class Behaviour;

/* ========================================================================= */

Object create_type(uns_int size, Type_Tag tag)
{
    int type = (int)size;
    assert1((uns_int)type == size, "Larger objects not supported yet!\n");
    type = type << 3;
    type = type | (tag & 7);
    return (Object) new_Type_SmallInt(type);
}

Type_Tag gettag(Type_Class class)
{
    return (Type_Tag)((Type_SmallInt)class->type)->value & 7;
}

uns_int getsize(Type_Class class)
{
    return (uns_int)(((Type_SmallInt)class->type)->value >> 3);
}

/* ========================================================================= */

#include <system/type/Instantiate.ci>

/* ========================================================================= */

Type_Class new_Class(Object superclass, Object type)
{
    Type_Class metaclass    = (Type_Class)instantiate(Metaclass);
    metaclass->type         = ((Type_Class)HEADER(superclass))->type;
    metaclass->super        = HEADER(superclass);
    metaclass->methods      = new_Type_Dictionary();
    Type_Class result       = (Type_Class)instantiate(metaclass);
    result->methods         = new_Type_Dictionary();
    result->super           = superclass;
    result->type            = type;
    return result;
}

Type_Class new_Named_Class(Object superclass, const wchar_t* name, Object type)
{
    Type_Class result = (Type_Class) new_Class(superclass, type);
    result->name      = new_Type_String(name);
    return result;
}

void pre_init_Type_Class()
{
    Metaclass                 = NEW_t(Type_Class);
    Object Metaclass_mclass   = instantiate_OBJECT(Metaclass, METACLASS_SIZE);
    HEADER(Metaclass)         = Metaclass_mclass;
}

void inter_init_Type_Class()
{
    Metaclass->type           = create_type(METACLASS_SIZE, OBJECT);
}
/* ========================================================================= */

void assert_class(Object class)
{
    assert0(HEADER(class) == (Object)Metaclass ||        /* if metaclass */
            HEADER(HEADER(class)) == (Object)Metaclass); /* if class */
}

CNT(Class_super)
    Object class = peek_EXP(0);
    assert_class(class);
    poke_EXP(0, ((Type_Class)class)->super);
}

wchar_t * classname(Object class)
{
    if (HEADER(class) == (Object)Metaclass) {
        return L"Metaclass";
    } else {
        return ((Type_Class)class)->name->value;
    }
}

void Method_invoke(Object method, Object self, Object class, uns_int argc) {
    if (HEADER(method) == (Object)AST_Native_Method_Class) {
        AST_Native_Method_invoke((AST_Native_Method)method, self, class, argc);
    } else if (HEADER(method) == (Object)Runtime_Block_Closure_Class) {
        Runtime_Block_Closure_invoke((Runtime_Block_Closure)method, self, class, argc);
    }
}

void Type_Class_dispatch(Object self, Object class, uns_int argc)
{
    AST_Send send = (AST_Send)peek_EXP(argc + 1); // + self
    InlineCache * cache = &send->cache;
    Object msg = send->message;

    assert0(msg != Nil);

    #ifdef DEBUG
    wchar_t * clsname = classname(class);
    if (HEADER(class) != (Object)Metaclass) {
        LOG("%ls>>%ls\n", clsname, ((Type_Symbol)msg)->value);
    } else {
        LOG("%ls class>>%ls\n", classname(self), ((Type_Symbol)msg)->value);
    }
    #endif // DEBUG
    
    /* Monomorphic inline cache */
    // TODO put that directly on the sender side
    // TODO create Polymorphic inline cache
    if (class == cache->type) {
        #ifdef DEBUG
        LOG("Cached dispatch \"%ls\" on \"%ls\"\n",  
            ((Type_Symbol)msg)->value,
            clsname);
        #endif // DEBUG
        return Method_invoke(cache->method, self, class, argc);
    }
    assert_class(class);

    #ifdef DEBUG
    LOG("Dispatching on \"%ls\"\n",  clsname);
    #endif // DEBUG
    
    Object method = NULL;    
    while (class != Nil) {
        #ifdef DEBUG
        LOG("Lookup continuing in \"%ls\"\n", clsname);
        #endif // DEBUG
        Type_Dictionary mdict = ((Type_Class) class)->methods;
        method                = Type_Dictionary_lookup(mdict, msg);
        if (!method) {
            Object super = ((Type_Class) class)->super;
            #ifndef DEBUG
            wchar_t * clsname = classname(class);
            #endif
            LOG("lookup failed: %p\n", super);
			assert((class != super), 
                printf("Infinite Lookup in \"%ls\" for \"%ls\"\n", 
							clsname,
							((Type_Symbol)msg)->value));
			class = super;
            clsname = classname(class);
        } else {
            //TODO create second level cache to directly store the misses
            cache->type   = class;
            cache->method = method;
            return Method_invoke(method, self, class, argc);
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
        printf("NULL\n");
        return;
    }
    if (obj == Nil) {
        printf("Nil\n");
        return;
    }
    Type_Class class = (Type_Class)HEADER(obj);
    assert0(class != NULL);
    assert0((Object)class != Nil);
    if (HEADER(class) == (Object)Metaclass) {
        printf("Class class: %ls\n", ((Type_Class)obj)->name->value);
        return;
    }
    printf("Class: %ls\n", class->name->value);

}

/* ========================================================================= */

void post_init_Type_Class()
{
    ((Type_Class)HEADER(Metaclass))->methods = new_Type_Dictionary();
    Metaclass->methods  = new_Type_Dictionary();
    Metaclass->name     = new_Type_String(L"Metaclass");
    Behaviour = new_Named_Class((Object)Type_Object_Class,
                                L"Behaviour",
                                create_type(BEHAVIOUR_SIZE, OBJECT));
    Class = new_Named_Class((Object)Behaviour,
                            L"Class",
                            create_type(CLASS_SIZE, OBJECT));
    Metaclass->super = (Object)Behaviour;
    ((Type_Class)HEADER(Type_Object_Class))->super = (Object)Class;
    ((Type_Class)HEADER(Metaclass))->super = HEADER(Behaviour);
}
