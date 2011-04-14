#include <pinocchio.h>

/* ======================================================================= */
Class BlockClosure_class;
/* ======================================================================= */

BlockClosure new_BlockClosure(Block code, JumpTarget return_target,
                              uns_int copies, Object * local)
{
    NEW_ARRAYED(BlockClosure, Object, copies);
    result->return_target = return_target;
    result->code          = code;
    Object * remotes      = result->remotes;
    while (copies--) {
        *remotes++ = *local++;
    }
    return result;
}
