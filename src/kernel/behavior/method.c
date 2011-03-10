#include <pinocchio.h>

/* ======================================================================= */
Class Method_class;
/* ======================================================================= */

Method new_Method(Array annotations, RawArray code, Array body)
{
    NEW_OBJECT(Method);
    result->package     = nil;
    result->annotations = annotations;
    result->code        = code;
    result->body        = body;
    return result;
}
