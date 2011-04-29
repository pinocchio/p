#include <pinocchio.h>

/* ======================================================================= */
Class BlockClosure_class;
/* ======================================================================= */

BlockClosure new_BlockClosure(Block code, JumpTarget return_target,
                              Object self, uns_int copies, Object * local)
{
    NEW_ARRAYED(BlockClosure, Object, copies);
    result->return_target = return_target;
    result->code          = code;
    result->self          = self;
    Object * remotes      = result->remotes;
    while (copies--) {
        *remotes++ = *local++;
    }
    return result;
}

/* ======================================================================= */

NATIVE(BlockClosure, apply)
    BlockClosure closure = (BlockClosure)ARGUMENT(0);
    ARGUMENT(0)          = closure->self;
    stack_pointer        = base_pointer;
    Object result        = method_context( closure->code->code->data, ARGUMENT(0) );
    NATIVE_RETURN(result);
END_NATIVE

/* ======================================================================= */

void install_natives_BlockClosure()
{
    INSTALL_NATIVE(BlockClosure, apply);
}
