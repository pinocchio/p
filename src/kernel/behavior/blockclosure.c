#include <pinocchio.h>

/* ======================================================================= */
Class BlockClosure_class;
/* ======================================================================= */

BlockClosure new_BlockClosure(Context outer, Block code)
{
    NEW_OBJECT(BlockClosure);
    result->outer    = outer;
    result->code     = code;
    return result;
}
