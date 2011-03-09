#include <pinocchio.h>

/* ======================================================================= */
Class Block_class;
/* ======================================================================= */

Block new_Block(RawArray code, Array body)
{
    NEW_OBJECT(Block);
    result->code    = code;
    result->body    = body;
    return result;
}
