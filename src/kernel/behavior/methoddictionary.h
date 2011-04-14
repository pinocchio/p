#ifndef KERNEL_OBJECT_BEHAVIOR_METHODDICTIONARY_H
#define KERNEL_OBJECT_BEHAVIOR_METHODDICTIONARY_H

#include <pinocchio.h>

/* ======================================================================= */

extern Class MethodDictionary_class;

/* ======================================================================= */

extern MethodDictionary new_MethodDictionary();

extern MethodClosure MethodDictionary_lookup(MethodDictionary,Symbol);
extern void MethodDictionary_store(MethodDictionary,Symbol,MethodClosure);

/* ======================================================================= */

#endif // KERNEL_OBJECT_BEHAVIOR_METHODDICTIONARY_H
