#ifndef PLUGIN_H
#define PLUGIN_H 

#include <pinocchio.h>

/* ========================================================================= */

extern Dictionary create_plugin();
extern Dictionary add_plugin(const wchar_t * name);
extern void store_native(Dictionary plugin, const wchar_t * selector, native code);

extern void init_plugin();

/* ========================================================================= */
#endif //PLUGIN_H
