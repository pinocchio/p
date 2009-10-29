
#include <stdlib.h>
#include <stdio.h>
#include <system/organization/ClassReference.h>

/* ========================================================================= */

Type_Class Organization_ClassReference_Class;

/* ========================================================================= */

void pre_init_Organization_ClassReference()
{
    Organization_ClassReference_Class =
        new_Named_Class((Object)Type_Object_Class,
                        L"Organization_ClassReference",
                        create_object_tag(ORGANIZATION_CLASSREFERENCE));
}

/* ========================================================================= */



/* ========================================================================= */

void post_init_Organization_ClassReference()
{

}
