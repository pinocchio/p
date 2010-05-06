#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <stdarg.h>
#include <pinocchio.h>
#include <lib/lib.h>

/* ========================================================================= */

Type_Class Metaclass;
DECLARE_REFERENCE(Metaclass);
Type_Class Class;
DECLARE_REFERENCE(Class);
Type_Class Behavior;
DECLARE_REFERENCE(Behavior);

/* ========================================================================= */

#include <system/type/Instantiate.ci>

/* ========================================================================= */

Type_Class new_Bootstrapping_Class()
{
    Type_Class mcls = (Type_Class)basic_instantiate_Object(Metaclass, METACLASS_SIZE);
    Type_Class cls  = (Type_Class)basic_instantiate_Object(mcls, CLASS_SIZE);
    return cls;
}

Type_Class new_Class_withMeta(Type_Class superclass, Object layout, Object metaType)
{    
    Type_Class metaclass = (Type_Class)instantiate(Metaclass);
    ASSERT_TAG_LAYOUT(metaType, Object);
    assert0(((Type_Array)metaType)->size >= 3); // we need at least place for
                                               // methods, super and layout.  

    metaclass->layout    = metaType;
    metaclass->methods   = new_Collection_Dictionary();
    
    Type_Class result    = (Type_Class)instantiate(metaclass);
    result->methods      = new_Collection_Dictionary();
    Type_Class_set_superclass(result, superclass);
    result->layout       = layout;
    metaclass->name      = (Type_Symbol)result;
    return result;
}

Type_Class new_Class(Type_Class superclass, Object layout)
{
    return new_Class_withMeta(superclass, layout, HEADER(superclass)->layout);
}


Type_Class new_Class_named(Type_Class superclass, const wchar_t* name, Object layout)
{
    Type_Class result = new_Class(superclass, layout);
    result->name      = new_Type_Symbol_cached(name); 
    return result;
}

void pre_init_Type_Class()
{
    Metaclass               = NEW_t(Type_Class);
    Object Metaclass_mclass = basic_instantiate_Object(Metaclass, METACLASS_SIZE);
    HEADER(Metaclass)       = (Type_Class)Metaclass_mclass;
}

void inter_init_Type_Class()
{
    Metaclass->layout = create_layout(METACLASS_SIZE, OBJECT, METACLASS_VARS);
}

void Type_Class_set_superclass(Type_Class cls, Type_Class superclass)
{
    Type_Class metaclass = HEADER(cls);
    cls->super           = superclass;
    metaclass->super     = HEADER(superclass);
}

/* ========================================================================= */

void assert_class(Object class)
{
    assert0(HEADER(class) == Metaclass ||        /* if metaclass */
            HEADER(HEADER(class)) == Metaclass); /* if class */
}

CNT(Class_super)
    Object class = peek_EXP(0);
    assert_class(class);
    poke_EXP(0, ((Type_Class)class)->super);
}


void Method_invoke(Object method, Object self, uns_int argc) {
    if (HEADER(method) == Runtime_MethodClosure_Class) {
        Runtime_MethodClosure_invoke((Runtime_MethodClosure)method, self, argc);
    } else {
        assert1(NULL, "Unknown type of method installation");
    }
}

void does_not_understand(Object self, Type_Class class, Object msg, uns_int argc)
{
    if (msg == (Object)SMB_doesNotUnderstand_) {
        Runtime_Message message = (Runtime_Message)pop_EXP();
        assert(NULL,
            fwprintf(StandardError->file, L"\033[31mRecursive does not understand \"%ls\" (\"%"F_I"u\") in \033[0m\n", 
            ((Type_Symbol)message->selector)->value,
            message->size);
            print_Class(self););
    }
    // printf("DNU: \"%ls\" \n", ((Type_Symbol)msg)->value);

	Runtime_Message message = new_Runtime_Message(msg, argc);

	while (argc--) {
		message->arguments[argc] = pop_EXP();
	}

    zapn_EXP(2);

    Type_Class_direct_dispatch(self, class, (Object)SMB_doesNotUnderstand_, 1, message);
}

static CNT(Class_lookup_cache_invoke)
    Object method    = peek_EXP(0);
    uns_int argc     = (uns_int)peek_EXP(3);
    Type_Class class = (Type_Class)peek_EXP(4);
    Object self      = peek_EXP(2);
    if (method == NULL) {
        Object msg  = peek_EXP(1);
        zapn_EXP(5);
        return does_not_understand(self, class, msg, argc);
    }
    zapn_EXP(5);
    AST_Send send             = (AST_Send)peek_EXP(argc + 1);
    Runtime_InlineCache cache = send->cache;
    cache->class              = (Object)class;
    cache->method             = method;
    
    Method_invoke(method, self, argc);
}

static CNT(Class_lookup_invoke)
    Object method = peek_EXP(0);
    uns_int argc  = (uns_int)peek_EXP(3);
    Object self   = peek_EXP(2);
    if (method == NULL) {
        Type_Class class = (Type_Class)peek_EXP(4);
        Object msg       = peek_EXP(1);
        zapn_EXP(5);
        return does_not_understand(self, class, msg, argc);
    }
    zapn_EXP(5);
    Method_invoke(method, self, argc);
}

void Class_lookup(Type_Class class, Object msg)
{
    // TODO pass along the hash value
    if (class == (Type_Class)Nil) {
        poke_EXP(0, NULL);
        zap_CNT();
        return;
    }
    assert_class((Object)class);
    Collection_Dictionary mdict = class->methods;
    Collection_Dictionary_lookup_push(mdict, msg);
}

void CNT_Class_lookup_loop()
{
    Object method = peek_EXP(0);
    if (method != NULL) {
        zap_EXP();
        zap_CNT();
        poke_EXP(0, method);
        return;
    }
    zap_EXP();
    Type_Class class = (Type_Class)peek_EXP(0);
    Object msg       = peek_EXP(1);
    Type_Class next  = class->super;
    poke_EXP(0, next);
    return Class_lookup(next, msg);
}

static void Class_direct_dispatch(Object self, Type_Class class,
                                  Object msg, uns_int argc)
{
    push_EXP(class);
    push_EXP(argc);
    push_EXP(self);

    push_EXP(msg);
    push_EXP(class);
    push_CNT(Class_lookup_loop);
    Class_lookup(class, msg);
}

CNT(restore_iss)
    Object return_value = pop_EXP();
    tset(_ISS_, peek_EXP(0));
    poke_EXP(0, return_value);
}

void Type_Class_tower_dispatch(Object self, Object class,
                               Type_Object iss, Runtime_Message message)
{
    tset(_ISS_, Nil);
    push_EXP(iss);
    push_CNT(restore_iss);
    push_CNT(Class_lookup_invoke);
    Type_Object tower = (Type_Object)Nil;
    while (iss != (Type_Object)Nil) {
        Type_Object newtower = (Type_Object)instantiate((Type_Class)Collection_Link_Class);
        newtower->ivals[0] = iss->ivals[0];
        newtower->ivals[1] = (Object)tower;
        tower = newtower;
        iss = (Type_Object)iss->ivals[1];
    }
    push_EXP(Nil);
    push_EXP(tower->ivals[0]); // self, bottom interpreter
    push_EXP(message);
    push_EXP(self); // receiver
    push_EXP(class);
    push_EXP(tower->ivals[1]); // tower of interpreters
    self = tower->ivals[0];
    Class_direct_dispatch(
        self,
        HEADER(self),
        (Object)SMB_send_to_class_inInterpreterChain_,
        4);
}

void Type_Class_direct_dispatch(Object self, Type_Class class, Object msg,
                                uns_int argc, ...)
{
    va_list args;
    va_start(args, argc);
    int idx;
    /* Send obj. TODO update Send>>eval to be able to remove this */
    /* TODO optimize by claim + poke instead of push */
    Type_Object iss = (Type_Object)tget(_ISS_);
    if ((Object)iss == Nil) {
        push_EXP(Nil);
        push_EXP(self);
        for (idx = 0; idx < argc; idx++) {
            push_EXP(va_arg(args, Object));
        }
        va_end(args);
        push_CNT(Class_lookup_invoke);
        Class_direct_dispatch(self, class, msg, argc);
    } else {
        Runtime_Message message = new_Runtime_Message(msg, argc);
        for (idx = 0; idx < argc; idx++) {
            message->arguments[idx] = va_arg(args, Object);
        }
        va_end(args);
        Type_Class_tower_dispatch(self, (Object)class, iss, message);
    }
}

void Type_Class_direct_dispatch_withArguments(Object self, Type_Class class,
                                              Object msg, Type_Array args)
{
    /* Send obj. TODO update Send>>eval to be able to remove this */
    int idx;
    Type_Object iss = (Type_Object)tget(_ISS_);
    if ((Object)iss == Nil) {
        push_EXP(Nil);
        push_EXP(self);
        for (idx = 0; idx < args->size; idx++) {
            push_EXP(args->values[idx]);
        }
        push_CNT(Class_lookup_invoke);
        Class_direct_dispatch(self, class, msg, args->size);
    } else {
        Runtime_Message message = new_Runtime_Message(msg, args->size);
        for (idx = 0; idx < args->size; idx++) {
            message->arguments[idx] = args->values[idx];
        }
        Type_Class_tower_dispatch(self, (Object)class, iss, message);
    }
}

void Type_Class_dispatch(Object self, Type_Class class, uns_int argc)
{
    AST_Send send             = (AST_Send)peek_EXP(argc + 1); // + self
    Runtime_InlineCache cache = send->cache;
    Object msg                = send->message;
    assert0(msg != Nil);

    #ifdef PRINT_DISPATCH_TRACE
    Type_Symbol clsname;
    if (HEADER(class) != Metaclass) {
        clsname = Type_String_concat_(((Type_Class)class)->name,
                                      new_Type_String(L">>"));
    } else {
        clsname = Type_String_concat_(((Type_Class)self)->name,
                                      new_Type_String(L" class>>"));
    }
    Type_Symbol msgname = (Type_Symbol)msg;
    Type_Symbol method  = Type_String_concat_(clsname, msgname);
    LOG("%ls (%"F_I"u)\n", method->value, self);
    #endif // PRINT_DISPATCH_TRACE
    
    /* Monomorphic inline cache */
    // TODO put that directly on the sender side
    // TODO create Polymorphic inline cache
    // TODO properly initialize the inlinecache when creating new sends
    if ((Object)cache != Nil) {
        if (class == (Type_Class)cache->class) {
            return Method_invoke(cache->method, self, argc);
        }
    } else {
        send->cache = new_Runtime_InlineCache();
    }
    assert_class((Object)class);
    
    push_CNT(Class_lookup_cache_invoke);
    return Class_direct_dispatch(self, class, msg, argc);
}

void print_Class(Object obj)
{
    if (obj == NULL) {
        fwprintf(stderr, L"NULL\n");
        return;
    }
    if (obj == Nil) {
        fwprintf(stderr, L"Nil\n");
        return;
    }
    Type_Class class = HEADER(obj);
    assert0(class != NULL);
    assert0((Object)class != Nil);
    if (HEADER(class) == Metaclass) {
        fwprintf(stderr, L"Class class: %ls\n", ((Type_Class)obj)->name->value);
        return;
    }
    fwprintf(stderr, L"%p Class: %p %ls\n", obj, class, class->name->value);
}

/* ========================================================================= */

void post_init_Type_Class()
{
    HEADER(Metaclass)->methods = new_Collection_Dictionary();
    HEADER(Metaclass)->layout =
        create_layout(CLASS_SIZE, OBJECT, CLASS_VARS);
        
    Metaclass->methods  = new_Collection_Dictionary();
    Metaclass->name     = new_Type_String(L"Metaclass");
    Behavior            = new_Class_named(Type_Object_Class,
                                L"Behavior",
                                create_layout(BEHAVIOR_SIZE, OBJECT, BEHAVIOR_VARS));
    Class               = new_Class_named(Behavior,
                            L"Class",
                            create_layout(CLASS_SIZE, OBJECT, CLASS_VARS));
    Metaclass->super    = Behavior;
    
    HEADER(Type_Object_Class)->super = Class;
    HEADER(Metaclass)->super         = HEADER(Behavior);

    Metaclass_Reference = new_Organization_ClassReference(Metaclass);
    Class_Reference     = new_Organization_ClassReference(Class);
    Behavior_Reference  = new_Organization_ClassReference(Behavior);
}
