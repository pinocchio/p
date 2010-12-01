#include <stdlib.h>
#include <stdio.h>
#include <system/organization/ClassReference.h>
#include <lib/lib.h>

/* ========================================================================= */

ClassReference new_ClassReference(Class class)
{
    
    NEW_OBJECT(ClassReference);
    result->class = (Optr)class;
    result->package = nil;
    return result;
}

ClassReference new_ClassReference_empty()
{
    
    NEW_OBJECT(ClassReference);
    result->class   = nil;
    result->package = nil;
    return result;
}

/* ========================================================================= */

Optr ClassReference_eval(ClassReference self)
{
    if (self->class == (Optr)nil) {
        fail(UndefinedClassReference_Class, 1, self);
    }
    return self->class;
}
