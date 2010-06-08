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
    result->class = nil;
    result->package = nil;
    return result;
}

/* ========================================================================= */

void ClassReference_eval(ClassReference self)
{
    if (self->class == (Optr)nil) {
        fail(Exception_UndefinedClassReference_Class, 1, self);
    }
    poke_EXP(0, self->class);
}
