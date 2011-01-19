#include <pinocchio.h>

/* ======================================================================= */
Class Raw_class;
/* ======================================================================= */

Raw new_Raw(void** data)
{
    NEW_OBJECT(Raw);
    result->data = data;
    return result;
}
