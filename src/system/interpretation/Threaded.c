
#include <system/interpretation/Threaded.h>

/**
 *
 * 0:       PC
 * 1:  code | return
 *
 **/
void CNT_eval_threaded()
{
    int pc                = (int)(uns_int)peekn_CNT(1);
    Collection_Array code = (Collection_Array)peekn_CNT(2);
    pc                    = ((threaded)code->values[pc])(pc);
    poke_CNT_raw(1, pc);
}

