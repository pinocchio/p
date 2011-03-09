#include <pinocchio.h>

/* ======================================================================= */
Class Block_class;
/* ======================================================================= */

Block new_Block(Array params, Array locals, RawArray code, Array body)
{
    NEW_OBJECT(Block);
    result->params      = params;
    result->locals      = locals;
    result->code        = code;
    result->body        = body;
    return result;
}
