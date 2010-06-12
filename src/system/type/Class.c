#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <stdarg.h>
#include <pinocchio.h>
#include <lib/lib.h>
#include <system/runtime/InlineCache.h>
#include <debug.h>

/* ========================================================================= */

Class metaclass;
Class class;
Class behavior;

/* ========================================================================= */

#include <system/type/Instantiate.ci>

/* ========================================================================= */

Class new_Bootstrapping_Class()
{
    Class metacls =
        (Class)basic_instantiate_Object(metaclass, METACLASS_SIZE);
    Class cls  = (Class)basic_instantiate_Object(metacls, CLASS_SIZE);
    // Name of metaclass is its instance pointer.
    metacls->name = (Symbol)cls;
    return cls;
}

Class new_Class(Class superclass, Optr metatype)
{    
    ASSERT_TAG_LAYOUT(metatype, Object);
    uns_int meta_size = ((Array)metatype)->size;
    assert0(meta_size >= 4); // we need at least place for
                             // methods, super, layout and instance.

    Class metacls    = (Class)basic_instantiate_Object(metaclass, METACLASS_SIZE);
    metacls->layout       = metatype;
    Class result       = (Class)basic_instantiate_Object(metacls, meta_size);
    metacls->name         = (Symbol)result;

    result->methods         = new_Dictionary();
    metacls->methods      = new_Dictionary();
    Class_set_superclass(result, superclass);

    return result;
}

void Class_set_superclass(Class cls, Class superclass)
{
    Class metaclass = HEADER(cls);
    cls->super           = superclass;
    if (superclass != (Class)nil) {
        metaclass->super = HEADER(superclass);
    } else {
        metaclass->super = class;
    }
}

/* ========================================================================= */

void assert_class(Optr class)
{
    assert0(HEADER(class) == metaclass ||        /* if metaclass */
            HEADER(HEADER(class)) == metaclass); /* if class */
}

CNT(Class_super)
    Optr class = PEEK_EXP(0);
    assert_class(class);
    POKE_EXP(0, ((Class)class)->super);
}


static void Method_invoke_inline(Optr method, Optr self, uns_int argc) {
    if (HEADER(method) == MethodClosure_Class) {
        MethodClosure_invoke((MethodClosure)method, self, argc);
    } else {
        inspect(method);
        assert1(NULL, "Unknown type of method installation");
    }
}

void does_not_understand(Optr self, Class class, Optr msg, uns_int argc)
{
    if (msg == (Optr)SMB_doesNotUnderstand_) {
        Message message = (Message)pop_EXP();
        // For now keep on printing the message.
        fwprintf(stderr, L"\033[33mDNU: %ls >> %ls\033[0m\n",
                 class->name->value,
                 message->selector->value);
        fail(Exception_RecursiveDoesNotUnderstand_Class, 3,
             self, class, message);
    }

	Message message = new_Message(msg, argc);

	while (argc--) {
		message->arguments[argc] = pop_EXP();
	}

    ZAP_EXP();

    Class_direct_dispatch(self, class, (Optr)SMB_doesNotUnderstand_, 1, message);
}

static CNT(Class_lookup_cache_invoke)
    Optr method  = PEEK_EXP(0);
    uns_int argc = (uns_int)PEEK_EXP(3);
    Class class  = (Class)PEEK_EXP(4);
    Optr self    = PEEK_EXP(2);
    if (method == NULL) {
        Optr msg  = PEEK_EXP(1);
        ZAPN_EXP(6);
        return does_not_understand(self, class, msg, argc);
    }
    Send send   = (Send)PEEK_EXP(5);
    Array cache = send->cache;
    InlineCache_store(cache, (Optr)class, method);
    ZAPN_EXP(6);
    
    Method_invoke_inline(method, self, argc);
}

static CNT(Class_lookup_invoke)
    Optr method  = PEEK_EXP(0);
    uns_int argc = (uns_int)PEEK_EXP(3);
    Optr self    = PEEK_EXP(2);
    if (method == NULL) {
        Class class = (Class)PEEK_EXP(4);
        Optr msg    = PEEK_EXP(1);
        ZAPN_EXP(5);
        return does_not_understand(self, class, msg, argc);
    }
    ZAPN_EXP(5);
    Method_invoke_inline(method, self, argc);
}

void Class_lookup(Class class, Optr msg)
{
    // TODO pass along the hash value
    if (class == (Class)nil) {
        POKE_EXP(0, NULL);
        ZAP_CNT();
        return;
    }
    assert_class((Optr)class);
    inspect(class);
    Dictionary mdict = class->methods;
    Dictionary_lookup_push(mdict, msg);
}

void CNT_Class_lookup_loop()
{
    Optr method = PEEK_EXP(0);
    if (method != NULL) {
        ZAP_EXP();
        ZAP_CNT();
        POKE_EXP(0, method);
        return;
    }
    ZAP_EXP();
    Class class = (Class)PEEK_EXP(0);
    Optr msg    = PEEK_EXP(1);
    Class next  = class->super;
    POKE_EXP(0, next);
    return Class_lookup(next, msg);
}

static void Class_direct_dispatch_inline(Optr self, Class class,
                                         Optr msg, uns_int argc)
{
    PUSH_EXP(class);
    PUSH_EXP(argc);
    PUSH_EXP(self);

    PUSH_EXP(msg);
    PUSH_EXP(class);
    PUSH_CNT(Class_lookup_loop);
    Class_lookup(class, msg);
}

CNT(restore_iss)
    Optr return_value = pop_EXP();
    tset(_ISS_, PEEK_EXP(0));
    POKE_EXP(0, return_value);
}

void Class_tower_dispatch(Optr self, Optr class,
                               Object iss, Message message)
{
    tset(_ISS_, nil);
    PUSH_EXP(iss);
    PUSH_CNT(restore_iss);
    PUSH_CNT(Class_lookup_invoke);
    Object tower = (Object)nil;
    while (iss != (Object)nil) {
        Object newtower = (Object)instantiate((Class)Collection_Link_Class);
        newtower->ivals[0] = iss->ivals[0];
        newtower->ivals[1] = (Optr)tower;
        tower = newtower;
        iss = (Object)iss->ivals[1];
    }
    PUSH_EXP(tower->ivals[0]); // self, bottom interpreter
    PUSH_EXP(message);
    PUSH_EXP(self); // receiver
    PUSH_EXP(class);
    PUSH_EXP(tower->ivals[1]); // tower of interpreters
    self = tower->ivals[0];
    Class_direct_dispatch_inline(
        self,
        HEADER(self),
        (Optr)SMB_send_to_class_inInterpreterChain_,
        4);
}

void Class_direct_dispatch(Optr self, Class class, Optr msg,
                                uns_int argc, ...)
{
	va_list args;
    va_start(args, argc);
    long idx;
    /* Send obj. TODO update Send>>eval to be able to remove this */
    /* TODO optimize by claim + poke instead of push */
    Object iss = (Object)tget(_ISS_);
    if ((Optr)iss == nil) {
        PUSH_EXP(self);
        for (idx = 0; idx < argc; idx++) {
            PUSH_EXP(va_arg(args, Optr));
        }
        va_end(args);
        PUSH_CNT(Class_lookup_invoke);
        Class_direct_dispatch_inline(self, class, msg, argc);
    } else {
        Message message = new_Message(msg, argc);
        for (idx = 0; idx < argc; idx++) {
            message->arguments[idx] = va_arg(args, Optr);
        }
        va_end(args);
        Class_tower_dispatch(self, (Optr)class, iss, message);
    }
}

void Class_direct_dispatch_withArguments(Optr self, Class class,
                                         Optr msg, Array args)
{
    /* Send obj. TODO update Send>>eval to be able to remove this */
    long idx;
    Object iss = (Object)tget(_ISS_);
    if ((Optr)iss == nil) {
        PUSH_EXP(self);
        for (idx = 0; idx < args->size; idx++) {
            PUSH_EXP(args->values[idx]);
        }
        PUSH_CNT(Class_lookup_invoke);
        Class_direct_dispatch_inline(self, class, msg, args->size);
    } else {
        Message message = new_Message(msg, args->size);
        for (idx = 0; idx < args->size; idx++) {
            message->arguments[idx] = args->values[idx];
        }
        PUSH_EXP(nil);
        Class_tower_dispatch(self, (Optr)class, iss, message);
    }
}

void Class_dispatch(Optr self, Class class, uns_int argc)
{
    Send send   = (Send)PEEK_EXP(0);
    Array cache = send->cache;
    Optr msg    = (Optr)send->message;
    assert0(msg != nil);

    #ifdef PRINT_DISPATCH_TRACE
    Symbol clsname;
    if (HEADER(class) != metaclass) {
        clsname = String_concat_(((Class)class)->name,
                                      new_String(L">>"));
    } else {
        clsname = String_concat_(((Class)self)->name,
                                      new_String(L" class>>"));
    }
    Symbol msgname = (Symbol)msg;
    Symbol method  = String_concat_(clsname, msgname);
    LOG("%ls (%p)\n", method->value, self);
    #endif // PRINT_DISPATCH_TRACE
    
    // TODO properly initialize the inlinecache when creating new sends
    if ((Optr)cache != nil) {
        Optr method = InlineCache_lookup(cache, (Optr)class);
        if (method) {
            ZAP_EXP();
            return Method_invoke_inline(method, self, argc);
        }
    } else {
        send->cache = new_InlineCache();
    }
    assert_class((Optr)class);
    
    PUSH_CNT(Class_lookup_cache_invoke);
    return Class_direct_dispatch_inline(self, class, msg, argc);
}
