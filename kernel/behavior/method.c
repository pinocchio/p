#include <pinocchio.h>

/* ======================================================================= */
Class Method_class;
/* ======================================================================= */

Method new_Method(Array params, Array locals, Array annotations,
                  RawArray code, Array body)
{
    NEW_OBJECT(Method);
    result->params      = params;
    result->locals      = locals;
    result->package     = nil;
    result->annotations = annotations;
    result->code        = code;
    result->body        = body;
    return result;
}
