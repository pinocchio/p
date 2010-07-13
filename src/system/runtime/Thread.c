#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Thread.h>

/* ========================================================================= */

Thread new_Thread(uns_int size)
{
    NEW_ARRAY_OBJECT(Thread, Optr[size]);
    result->size  = size;
    result->_ENV_ = nil;
    result->_EXP_ = &result->Double_Stack[-1];
    result->_CNT_ = (threaded**)&result->Double_Stack[size];
    return result;
}
