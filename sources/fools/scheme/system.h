#ifndef SCHEME_SYSTEM_H
#define SCHEME_SYSTEM_H

#include <model.h>

extern object inline make_func(array_object arguments, object body);
extern object inline make_dyn_func(array_object arguments, object body);
extern object inline make_dispatch(array_object arguments, object body);

#endif
