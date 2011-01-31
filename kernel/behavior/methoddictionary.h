#ifndef KERNEL_OBJECT_BEHAVIOR_METHODDICTIONARY_H
#define KERNEL_OBJECT_BEHAVIOR_METHODDICTIONARY_H

#include <pinocchio.h>

/* ======================================================================= */

extern Class MethodDictionary_class;

/* ======================================================================= */

extern MethodDictionary new_MethodDictionary();
extern Method MethodDictionary_lookup(MethodDictionary dictionary, Symbol selector);
extern void MethodDictionary_store(MethodDictionary dictionary, Symbol selector, Method method);

/* ======================================================================= */

#endif // KERNEL_OBJECT_BEHAVIOR_METHODDICTIONARY_H
