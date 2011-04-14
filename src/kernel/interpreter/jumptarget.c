#include <pinocchio.h>

/* ======================================================================= */
Class JumpTarget_class;
/* ======================================================================= */

JumpTarget new_JumpTarget(Object args[])
{
    NEW_OBJECT(JumpTarget);
    result->args = args;
    result->header.format.raw = 1;
    return result;
}

