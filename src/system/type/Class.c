#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <stdarg.h>
#include <pinocchio.h>
#include <lib/lib.h>
#include <debug.h>

/* ========================================================================= */

Class metaclass;
Class class;
Class behavior;

static Symbol SMB_doesNotUnderstand_;

/* ========================================================================= */

Optr basic_instantiate_Object(Class class, uns_int size)
{
    Object result = NEW_ARRAYED(struct Object_t, Optr[size]);
    uns_int i;
    for (i = 0; i < size; i++) {
        result->ivals[i] = nil;
    }
    HEADER(result) = class;
    assert0(HEADER(result) != (Class)nil);
    return (Optr)result;
}

/* ========================================================================= */

Class new_Bootstrapping_Class()
{
    Class metacls = (Class)basic_instantiate_Object(metaclass, METACLASS_SIZE);
    Class cls     = (Class)basic_instantiate_Object(metacls, CLASS_SIZE);
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
    metacls->layout  = metatype;
    Class result     = (Class)basic_instantiate_Object(metacls, meta_size);
    metacls->name    = (Symbol)result;

    result->methods  = new_Dictionary();
    metacls->methods = new_Dictionary();
    Class_set_superclass(result, superclass);

    return result;
}

void Class_set_superclass(Class cls, Class superclass)
{
    Class metaclass = HEADER(cls);
    cls->super      = superclass;
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

int counter = 0;

static void invoke(Optr method, Optr self, uns_int argc) {
    if (HEADER(method) == MethodClosure_Class) {
        MethodClosure_invoke((MethodClosure)method, self, argc);

        if (_thread_ == _scheduler_thread_) {
            return;
        }

        if (counter >= 500) {
            counter = 0;
            yield();
        } else {
            counter++;
        }

        return;
    }
    inspect(method);
    assert1(NULL, "Unknown type of method installation");
}

void does_not_understand(Optr self, Class class, Optr msg, uns_int argc)
{
    if (msg == (Optr)SMB_doesNotUnderstand_) {
        Message message = (Message)pop_EXP();
        fail(RecursiveDoesNotUnderstand_Class, 3,
             self, class, message);
    }

	Message message = new_Message(msg, argc);

	while (argc--) {
		message->arguments[argc] = pop_EXP();
	}

    ZAP_EXP();
    Class_direct_dispatch(self,class,(Optr)SMB_doesNotUnderstand_,1,message);
}

THREADED(class_cache_invoke)
    t_return();
    Optr method  = PEEK_EXP(0);
    uns_int argc = (uns_int)PEEK_EXP(4);
    Class class  = (Class)PEEK_EXP(5);
    Optr self    = PEEK_EXP(3);
    if (method == NULL) {
        Optr msg  = PEEK_EXP(2);
        ZAPN_EXP(7);
        return does_not_understand(self, class, msg, argc);
    }
    Send send   = (Send)PEEK_EXP(6);
    Array cache = send->cache;
    InlineCache_store(cache, (Optr)class, method);
    ZAPN_EXP(7);
    return invoke(method, self, argc);
}

THREADED(class_invoke)
    t_return();
    Optr method  = PEEK_EXP(0);
    uns_int argc = (uns_int)PEEK_EXP(4);
    Optr self    = PEEK_EXP(3);
    if (method == NULL) {
        Class class = (Class)PEEK_EXP(5);
        Optr msg    = PEEK_EXP(2);
        ZAPN_EXP(6);
        return does_not_understand(self, class, msg, argc);
    }
    ZAPN_EXP(6);
    return invoke(method, self, argc);
}

void Class_lookup(Class class, Optr msg)
{
    // TODO pass along the hash value
    if (class == (Class)nil) {
        PUSH_EXP(NULL); 
        pc += 1;
        return;
    }
    assert_class((Optr)class);
    Dictionary mdict = class->methods;
    Dictionary_lookup_push(mdict, msg);
}

THREADED(class_lookup)
    Optr method = PEEK_EXP(0);
    if (method != NULL) {
        pc += 1;
        return;
    }
    
    ZAP_EXP();
    Class class = (Class)PEEK_EXP(0);
    Optr msg    = PEEK_EXP(1);
    Class next  = class->super;
    POKE_EXP(0, next);
    Class_lookup(next, msg);
}


/* ========================================================================= */

NNATIVE(Class_direct_dispatch, 2,
    t_class_lookup,
    t_class_invoke)

NNATIVE(Class_dispatch, 2,
    t_class_lookup,
    t_class_cache_invoke)

/* ========================================================================= */
static void Class_do_dispatch(Optr self, Class class, Optr msg,
                              uns_int argc, Array code)
{
    CLAIM_EXP(5);
    POKE_EXP(4, class);
    POKE_EXP(3, argc);
    POKE_EXP(2, self);
    POKE_EXP(1, msg);
    POKE_EXP(0, class);
    push_code(code);
    Class_lookup(class, msg);
}

void Class_direct_dispatch(Optr self, Class class, Optr msg,
                           uns_int argc, ...)
{
	va_list args;
    va_start(args, argc);
    long idx;
    /* Send obj. TODO update Send>>eval to be able to remove this */
    /* TODO optimize by claim + poke instead of push */
    PUSH_EXP(self);
    for (idx = 0; idx < argc; idx++) {
        PUSH_EXP(va_arg(args, Optr));
    }
    va_end(args);
    Class_do_dispatch(self, class, msg, argc, T_Class_direct_dispatch);
}

void Class_direct_dispatch_withArguments(Optr self, Class class,
                                         Optr msg, Array args)
{
    /* Send obj. TODO update Send>>eval to be able to remove this */
    long idx;
    PUSH_EXP(self);
    for (idx = 0; idx < args->size; idx++) {
        PUSH_EXP(args->values[idx]);
    }
    Class_do_dispatch(self, class, msg, args->size, T_Class_direct_dispatch);
}

void Class_dispatch(Optr self, Class class, uns_int argc)
{
    Send send   = (Send)PEEK_EXP(0);
    Array cache = send->cache;
    
    #if defined PRINT_DISPATCH_TRACE || DTRACE
    Symbol clsname;
    if (HEADER(class) != metaclass) {
        clsname = class->name;
    } else {
        clsname = ((Class)self)->name;
    }
    #endif // PRINT_DISPATCH_TRACE || DTRACE
    
    // TODO properly initialize the inlinecache when creating new sends
    if ((Optr)cache != nil) {
        Optr method = InlineCache_lookup(cache, (Optr)class);
        if (method) {
            DT(MESSAGE_CACHEHIT, unicode_to_ascii(clsname->value), 
                                 unicode_to_ascii(send->message->value));
            ZAP_EXP();
            return invoke(method, self, argc);
        }
        DT(MESSAGE_CACHEMISS, unicode_to_ascii(clsname->value), 
                              unicode_to_ascii(send->message->value));
    } else {
        send->cache = new_InlineCache();
    }
    assert_class((Optr)class);
    
    Optr msg = (Optr)send->message;
    assert0(msg != nil);

    #ifdef PRINT_DISPATCH_TRACE
    Symbol method  = String_concat_(clsname, new_String(L">>"));
    method         = String_concat_(method, (String)msg);
    LOG("%ls (%p)\n", method->value, self);
    #endif // PRINT_DISPATCH_TRACE
    
    DT(MESSAGE, unicode_to_ascii(clsname->value), 
                unicode_to_ascii(send->message->value));
    Class_do_dispatch(self, class, msg, argc, T_Class_dispatch);
}

void Class_normal_dispatch(Optr self, Send send, uns_int argc)
{
    Class class = HEADER(self);
    Array cache = send->cache;
    
    #if defined PRINT_DISPATCH_TRACE || DTRACE
    Symbol clsname;
    if (HEADER(class) != metaclass) {
        clsname = class->name;
    } else {
        clsname = ((Class)self)->name;
    }
    #endif // PRINT_DISPATCH_TRACE || DTRACE
    
    // TODO properly initialize the inlinecache when creating new sends
    if ((Optr)cache != nil) {
        Optr method = InlineCache_lookup(cache, (Optr)class);
        if (method) {
            DT(MESSAGE_CACHEHIT, unicode_to_ascii(clsname->value), 
                                 unicode_to_ascii(send->message->value));
            return invoke(method, self, argc);
        }
        DT(MESSAGE_CACHEMISS, unicode_to_ascii(clsname->value), 
                              unicode_to_ascii(send->message->value));
    } else {
        send->cache = new_InlineCache();
    }
    assert_class((Optr)class);
    
    Optr msg = (Optr)send->message;
    assert0(msg != nil);

    #ifdef PRINT_DISPATCH_TRACE
    Symbol method  = String_concat_(clsname, new_String(L">>"));
    method         = String_concat_(method, (String)msg);
    LOG("%ls (%p)\n", method->value, self);
    #endif // PRINT_DISPATCH_TRACE

    PUSH_EXP(send);
    DT(MESSAGE, unicode_to_ascii(clsname->value), 
                unicode_to_ascii(send->message->value));
    Class_do_dispatch(self, class, msg, argc, T_Class_dispatch);
}

/* ========================================================================= */

void post_init_Class()
{
    SMB_doesNotUnderstand_ = new_Symbol_cached(L"doesNotUnderstand:");
    INIT_NATIVE(Class_direct_dispatch);
    INIT_NATIVE(Class_dispatch);
}
