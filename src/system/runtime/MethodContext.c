#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/MethodContext.h>

/* ========================================================================= */

MethodContext new_MethodContext(uns_int size)
{
	MethodContext result = (MethodContext)optain_context(size);
	HEADER(result)       = MethodContext_Class;
    return result;
}
