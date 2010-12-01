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
Class MethodDictionary_Class;

/* ========================================================================= */
static Symbol SMB_doesNotUnderstand_;
/* ========================================================================= */

Optr basic_instantiate_Object(Class class, uns_int size)
{
    assert0(class != (Class)nil);
    Object result = NEW_ARRAYED(struct Object_t, Optr[size]);
    uns_int i;
    for (i = 0; i < size; i++) {
        result->ivals[i] = nil;
    }
    HEADER(result) = class;
    return (Optr)result;
}

/* ========================================================================= */

IdentityDictionary new_MethodDictionary()
{
    IdentityDictionary result = NEW_t(IdentityDictionary);
    HEADER(result) = MethodDictionary_Class;
    result->size      = 0;
    result->ratio     = new_SmallInt(500);
    result->maxLinear = new_SmallInt(20);
    result->data      = new_Array_withAll(1, (Optr)new_DictBucket(20 << 1));
    result->linear    = true;
    return result;
}

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

    result->methods  = new_MethodDictionary();
    metacls->methods = new_MethodDictionary();
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

static void activate_method(MethodClosure closure)
{
    MethodContext context = (MethodContext)current_env();
    Method method         = closure->code;
    uns_int paramc        = method->params->size;
    uns_int localc        = method->locals->size;
    uns_int size          = paramc + localc;

    // Allocate extra space for locals
    CLAIM_EXP(localc);

    // Set locals to nil.
    for (; paramc < size; paramc++) {
        context->locals[paramc] = nil;
    }
    
    HEADER(context)       = MethodContext_Class;
	context->size         = size;
	context->stacked      = true;

    context->scope_id     = 0;
    context->home_context = context;
    context->closure      = closure;
}

void Method_invoke(MethodClosure closure,
                   Method method)
{
    assert1(method->code != (Array)nil, "Uncompiled method found!");
    assert(current_env()->size == method->params->size,
        printf("Argument count mismatch. Expected: %lu given: %lu\n",
               method->params->size, current_env()->size););
    
    if (method->size == 0) {
        set_return_value(self);
        return;
    }

    activate_method(closure);
    push_code(method->code);
}

#define INVOKE_IF(name) if(method_class == name##_Class) {\
    return name##_invoke(closure, (name)method);\
}

void MethodClosure_invoke(MethodClosure closure)
{
    Method method      = closure->code;
    Class method_class = HEADER(method);
    
    INVOKE_IF(Method)
    INVOKE_IF(NativeMethod)
    INVOKE_IF(ReflectionMethod)

    assert1(NULL, "Unknown type of method");
}

static int counter = 0;

static void invoke(Optr method) {
    if (HEADER(method) == MethodClosure_Class) {
        MethodClosure_invoke((MethodClosure)method);

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
    inspect(stderr, method);
    assert1(NULL, "Unknown type of method installation");
}

static void does_not_understand(Class class, Symbol message)
{
    assert0(NULL); // NYI!
    // if (msg == (Optr)SMB_doesNotUnderstand_) {
    //     Message message = (Message)pop_EXP();
    //     fail(RecursiveDoesNotUnderstand_Class, 3,
    //          self, class, message);
    // }

    // Message message = new_Message(msg, argc);

    // while (argc--) {
    //     message->arguments[argc] = pop_EXP();
    // }

    // ZAP_EXP();
    // Class_direct_dispatch(self, class, (Optr)SMB_doesNotUnderstand_, 1, message);
}

static Optr Class_lookup(Class class, Symbol message)
{
    // TODO return -1 and start invoking in case something is non-standard!
    Optr method = NULL;
    while (class != (Class)nil) {
        IdentityDictionary mdict = class->methods;
        // TODO check type of mdict;
        method = IdentityDictionary_lookup(mdict, (Optr)message);
        if (method != NULL) {
            return method;
        }
        class = class->super;
    }
    return NULL;
}

void lookup_invoke(Class class, Symbol message)
{
    Optr method = Class_lookup(class, message);
    if (method == NULL) {
        does_not_understand(class, message);
        return;
    }
    invoke(method);
}

/* ========================================================================= */

void direct_return(Optr value)
{
    assert1(NULL, "Not yet implemented");
}

void long_return(Optr value)
{
    assert1(NULL, "Not yet implemented");
}

void send_message_at(Optr receiver, Class class, Symbol message,
                     uns_int argc, ...)
{
    MethodContext context = allocate_context(argc);
    context->self         = receiver;

    va_list args;
    va_start(args, argc);
    uns_int idx;
    for (idx = 0; idx < argc; idx++) {
        context->locals[idx] = va_arg(args, Optr);
    }
    va_end(args);

    set_env(context);

    lookup_invoke(class, message);
}

void send_message(Optr receiver, Symbol message, uns_int argc, ...)
{
    MethodContext context   = allocate_context(argc);
    context->self           = receiver;
    context->return_context = current_env();

    va_list args;
    va_start(args, argc);
    uns_int idx;
    for (idx = 0; idx < argc; idx++) {
        context->locals[idx] = va_arg(args, Optr);
    }
    va_end(args);

    set_env(context);

    lookup_invoke(HEADER(receiver), message);
}

void send_message_with_arguments(Optr receiver, Symbol message, Array arguments)
{
    uns_int argc            = arguments->size;
    MethodContext context   = allocate_context(argc);
    context->self           = receiver;
    context->return_context = current_env();

    uns_int idx;
    for (idx = 0; idx < argc; idx++) {
        context->locals[idx] = arguments->values[idx];
    }

    set_env(context);

    lookup_invoke(HEADER(receiver), message);
}

/* ========================================================================= */

void post_init_Class()
{
    SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
}
