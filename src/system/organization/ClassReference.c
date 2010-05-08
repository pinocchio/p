#include <stdlib.h>
#include <stdio.h>
#include <system/organization/ClassReference.h>
#include <lib/lib.h>

/* ========================================================================= */

DECLARE_CLASS(Organization_ClassReference);

/* ========================================================================= */

Organization_ClassReference
    new_Organization_ClassReference(Type_Class class)
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
    Organization_ClassReference_Class =
        new_Class_named(Type_Object_Class,
                        L"ClassReference",
                        CREATE_OBJECT_TAG(ORGANIZATION_CLASSREFERENCE));
    REFER_TO(Organization_ClassReference);
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
