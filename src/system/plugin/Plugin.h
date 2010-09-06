#ifndef PLUGIN_H
#define PLUGIN_H 

#include <pinocchio.h>

/* ========================================================================= */

extern IdentityDictionary create_plugin();
extern IdentityDictionary add_plugin(const wchar_t * name);
extern void store_native(IdentityDictionary plugin, const wchar_t * selector, native code);

extern void init_plugin();

typedef IdentityDictionary PLUGIN;

/* ========================================================================= */
#endif //PLUGIN_H
