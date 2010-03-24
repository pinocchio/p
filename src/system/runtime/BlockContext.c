#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

#define CONTEXT_CACHE_SIZE 128

Type_Class Runtime_BlockContext_Class;
static Object _Env_;
static Type_Array unused_contexts;

/* ========================================================================= */

static Runtime_BlockContext make_context(uns_int size)
{
    NEW_ARRAY_OBJECT(Runtime_BlockContext, Object[size]);
    result->captured = 0;
    return result;
}

Runtime_BlockContext optain_context(uns_int size)
{
    if (size >= unused_contexts->size) { return make_context(size); }
    Runtime_BlockContext context =
        (Runtime_BlockContext)unused_contexts->values[size];
    if ((Object)context == Nil) {
        /*gc();
        context = (Runtime_BlockContext)unused_contexts->values[size];
        if ((Object)context == Nil) {
        */
        return make_context(size);
        /*}*/
    }
    unused_contexts->values[size] = (Object)context->parent_frame;
    return context;
}

void free_context(Runtime_BlockContext context)
{
    if (context->captured) { return; }
    uns_int size = context->size;
    Object next = unused_contexts->values[size];
    context->closure = (Runtime_BlockClosure)Nil;
    context->home_context = (Runtime_MethodContext)Nil;
    context->parent_frame = (Runtime_BlockContext)next;
    context->parent_scope = (Runtime_BlockContext)Nil;
    context->unused  = Nil;
    int i;
    for (i = 0; i < size; i++) {
        context->locals[i] = Nil;
    }
    unused_contexts->values[size] = (Object)context;
}

/*
void free_context(Runtime_BlockContext context)
{
    uns_int size          = context_locals(context)->size;
    if (size >= unused_contexts->size) { return; }
    Object next           = unused_contexts->values[size];
    context->parent_frame = (Runtime_BlockContext)next;
    unused_contexts->values[size] = (Object)context;
}
*/

Runtime_BlockContext new_Runtime_BlockContext(Runtime_BlockClosure closure)
{
    uns_int size                = closure->code->params->size + closure->code->locals->size;
    Runtime_BlockContext result = optain_context(size);
	HEADER(result)              = Runtime_BlockContext_Class;
    result->home_context        = closure->context->home_context;
    result->closure             = closure;
    result->pc                  = 1;
    result->parent_frame        = current_env();
    Runtime_BlockContext parent = closure->context;
    result->scope_id            = parent->scope_id + 1;
    if (!parent->size) {
        parent = parent->parent_scope;
    }
    result->parent_scope = parent;
    result->size = size;
    
    return result;
}

Runtime_BlockContext current_env()
{
    return (Runtime_BlockContext)_Env_;
}

void set_env(Object env)
{
    _Env_ = env;
}

void pre_init_Runtime_BlockContext()
{
    Runtime_BlockContext_Class =
        new_Class_named(Type_Object_Class,
                        L"Runtime_BlockContext",
                        CREATE_ARRAY_TAG(RUNTIME_BLOCKCONTEXT));

    Type_Array layout = (Type_Array)Runtime_BlockContext_Class->layout;
    HEADER(layout->values[0]) = AST_UnsintInstVariable_Class;
    HEADER(layout->values[1]) = AST_UnsintInstVariable_Class;
    HEADER(layout->values[2]) = AST_UnsintInstVariable_Class;
}

/* ========================================================================= */

Object Runtime_BlockContext_lookup(Runtime_BlockContext self, 
                                   uns_int local_id, uns_int scope_id)
{
    while (scope_id != self->scope_id && (Object)self->parent_scope != Nil) {
        if (IS_CONTEXT(self->parent_scope)) {
            self = (Runtime_BlockContext)self->parent_scope;
        } else {
            /* TODO Schedule at:in: message send. */
            assert1(NULL, "TODO Schedule at:in: message send.");
            //Object args[2] = { (Object)new_Type_SmallInt(index), key };
            return NULL;
        }
    }
    /* TODO jump to error handler. */
    assert1(scope_id == self->scope_id, "TODO jump to error handler");
    assert(local_id < self->size,
		   printf("Lookup failed, index \"%"F_I"u\" out of range [0:%"F_I"u]", 
                 local_id, self->size));
    
    return self->locals[local_id];
}

void Runtime_BlockContext_assign(Runtime_BlockContext self, uns_int local_id,
                                 uns_int scope_id, Object value)
{
    while (scope_id != self->scope_id && (Object)self->closure->context != Nil) {
        if (IS_CONTEXT(self->closure->context)) {
            self = (Runtime_BlockContext)self->closure->context;
        } else {
            /* TODO Schedule at:in: message send. */
            assert1(NULL, "TODO Schedule at:in: message send");
            //Object args[2] = { (Object)new_Type_SmallInt(index), key };
            return;
        }
    }
    /* TODO jump to error handler. */
    assert1(scope_id == scope_id, "TODO jump to error handler");
    assert(local_id < self->size,
		   printf("Lookup failed, index \"%"F_I"u\" out of range [0:%"F_I"u]", 
                  local_id, self->size));

    self->locals[local_id] = value;
}

/* ========================================================================= */

void post_init_Runtime_BlockContext()
{
    unused_contexts = new_Type_Array_withAll(CONTEXT_CACHE_SIZE, Nil);
}
