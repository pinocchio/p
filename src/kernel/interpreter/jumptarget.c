#include <pinocchio.h>

/* ======================================================================= */
Class JumpTarget_class;
/* ======================================================================= */

JumpTarget new_JumpTarget(Object * return_pointer)
{
    NEW_OBJECT(JumpTarget);
    result->return_pointer = return_pointer;
    result->header.format.raw = 1;
    return result;
}
