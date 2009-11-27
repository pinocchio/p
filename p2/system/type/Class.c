#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <pinocchio.h>

/* ========================================================================= */

Type_Class Metaclass;
DECLARE_REFERENCE(Metaclass);
Type_Class Class;
DECLARE_REFERENCE(Class);
Type_Class Behaviour;
DECLARE_REFERENCE(Behaviour);

/* ========================================================================= */

#include <system/type/Instantiate.ci>

/* ========================================================================= */

Type_Class new_Bootstrapping_Class(Object superclass)
{
    Type_Class mcls = (Type_Class)basic_instantiate_Object(Metaclass, METACLASS_SIZE);
    mcls->super = HEADER(superclass);
    Type_Class cls = (Type_Class)basic_instantiate_Object(mcls, CLASS_SIZE);
    cls->super = superclass;
    return cls;
}

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

Type_Class new_Class_named(Object superclass, const wchar_t* name, Object type)
{
    Type_Class result = (Type_Class) new_Class(superclass, type);
    result->name            = new_Type_Symbol_cached(name); 
    return result;
}

void pre_init_Type_Class()
{
    Metaclass                 = NEW_t(Type_Class);
    Object Metaclass_mclass   = basic_instantiate_Object(Metaclass, METACLASS_SIZE);
    HEADER(Metaclass)         = Metaclass_mclass;
}

void inter_init_Type_Class()
{
    Metaclass->type = create_type(METACLASS_SIZE, OBJECT, METACLASS_VARS);
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
    } else if (HEADER(method) == (Object)Runtime_MethodClosure_Class) {
        Runtime_MethodClosure_invoke((Runtime_MethodClosure)method, self, class, argc);
    } else {
        assert1(NULL, "Unknown type of method");
    }
}

void does_not_understand(Object self, Object class, Object msg, uns_int argc)
{
    if (msg == (Object)SMB_doesNotUnderstand_) {
        msg = pop_EXP();
        assert(NULL, printf("\"%ls\" recursive does not understand \"%ls\" (\"%"F_I"u\")\n", 
            ((Type_Class)HEADER(self))->name->value,
            ((Type_Symbol)msg)->value,
            argc));
    }
    printf("DNU!\n");
    zapn_EXP(argc + 2);
    Type_Class_direct_dispatch(self, class, (Object)SMB_doesNotUnderstand_, 1, msg);
}

static void Class_lookup(Type_Class class, Object msg);
static void Class_next_lookup(Type_Class class)
{
    zap_EXP();
    poke_EXP(0, class->super);
    return Class_lookup((Type_Class)class->super, peek_EXP(3));
}

static void Class_invoke_do(Type_Class class, Object method, uns_int argc)
{
    Object self = peek_EXP(2);
    zapn_EXP(6);
    zap_CNT();
    Method_invoke(method, self, (Object)class, argc);
}

static void CNT_Class_lookup_cache_invoke()
{
    Object method = peek_EXP(0);
    Type_Class class = (Type_Class)peek_EXP(1);
    if (method == NULL) {
        return Class_next_lookup(class);
    }
    uns_int argc = (uns_int)peek_EXP(3);
    AST_Send send = (AST_Send)peek_EXP(argc + 7);
    Object dispatch_type = peek_EXP(5);
    InlineCache * cache = &send->cache;
    cache->type     = dispatch_type;
    cache->method   = method;

    Class_invoke_do(class, method, argc);
}

static void CNT_Class_lookup_invoke()
{
    Object method = peek_EXP(0);
    Type_Class class = (Type_Class)peek_EXP(1);
    if (method == NULL) {
        return Class_next_lookup(class);
    }
    uns_int argc = (uns_int)peek_EXP(3);
    Class_invoke_do(class, method, argc);
}

static void Class_lookup(Type_Class class, Object msg)
{
    // TODO pass along the hash value
    if (class == (Type_Class)Nil) {
        Object self = peek_EXP(1);
        class = (Type_Class)peek_EXP(4);
        uns_int argc = (uns_int)peek_EXP(2);
        zapn_EXP(5);
        return does_not_understand(self, (Object)class, msg, argc);
    }
    assert_class((Object)class);
    Type_Dictionary mdict = class->methods;
    Type_Dictionary_lookup_push(mdict, msg);
}

static void Class_direct_dispatch(Object self, Object class,
                                  Object msg, uns_int argc)
{
    push_EXP(class);
    push_EXP(msg);
    push_EXP(argc);
    push_EXP(self);
    push_EXP(class);
    return Class_lookup((Type_Class)class, msg);
}

void Type_Class_direct_dispatch(Object self, Object class, Object msg,
                                uns_int argc, ...)
{
    va_list args;
    va_start(args, argc);
    int idx;
    /* Send obj. TODO update Send>>eval to be able to remove this */
    push_EXP(Nil);
    push_EXP(self);
    for (idx = 0; idx < argc; idx++) {
        push_EXP(va_arg(args, Object));
    }
    va_end(args);
    push_CNT(Class_lookup_invoke);
    Class_direct_dispatch(self, class, msg, argc);
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
        return Method_invoke(cache->method, self, class, argc);
    }
    assert_class(class);
    
    push_CNT(Class_lookup_cache_invoke);
    return Class_direct_dispatch(self, class, msg, argc);
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
    Behaviour = new_Class_named((Object)Type_Object_Class,
                                L"Behaviour",
                                create_type(BEHAVIOUR_SIZE, OBJECT, BEHAVIOUR_VARS));
    Class = new_Class_named((Object)Behaviour,
                            L"Class",
                            create_type(CLASS_SIZE, OBJECT, CLASS_VARS));
    Metaclass->super = (Object)Behaviour;
    ((Type_Class)HEADER(Type_Object_Class))->super = (Object)Class;
    ((Type_Class)HEADER(Metaclass))->super = HEADER(Behaviour);

    Metaclass_Reference = new_Organization_ClassReference(Metaclass);
    Class_Reference     = new_Organization_ClassReference(Class);
    Behaviour_Reference = new_Organization_ClassReference(Behaviour);
}
