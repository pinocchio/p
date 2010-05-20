#include <stdlib.h>
#include <stdio.h>
#include <system/organization/ClassReference.h>
#include <lib/lib.h>

/* ========================================================================= */

Organization_ClassReference new_Organization_ClassReference(Type_Class class)
{
    
    NEW_OBJECT(Organization_ClassReference);
    result->class = (Object)class;
    result->package = Nil;
    return result;
}

Organization_ClassReference new_Organization_ClassReference_empty()
{
    
    NEW_OBJECT(Organization_ClassReference);
    result->class = Nil;
    result->package = Nil;
    return result;
}

/* ========================================================================= */

void pre_init_Organization_ClassReference()
{
}

/* ========================================================================= */

void Organization_ClassReference_eval(Organization_ClassReference self)
{
    if (self->class == (Object)Nil) {
        fail(Exception_UndefinedClassReference_Class, 1, self);
    }
    poke_EXP(0, self->class);
}

/* ========================================================================= */

void post_init_Organization_ClassReference()
{
}
