#include <stdlib.h>
#include <stdio.h>
#include <system/organization/ClassReference.h>
#include <lib/lib.h>

/* ========================================================================= */

Organization_ClassReference new_Organization_ClassReference(Class class)
{
    
    NEW_OBJECT(Organization_ClassReference);
    result->class = (Optr)class;
    result->package = nil;
    return result;
}

Organization_ClassReference new_Organization_ClassReference_empty()
{
    
    NEW_OBJECT(Organization_ClassReference);
    result->class = nil;
    result->package = nil;
    return result;
}

/* ========================================================================= */

void Organization_ClassReference_eval(Organization_ClassReference self)
{
    if (self->class == (Optr)nil) {
        fail(Exception_UndefinedClassReference_Class, 1, self);
    }
    poke_EXP(0, self->class);
}
