#ifndef PLUGIN_PLUGIN_H
#define PLUGIN_PLUGIN_H

#include <pinocchio.h>
#include <lib/lib.h>

void __attribute__((constructor)) load_plugin();
void __attribute__((destructor)) unload_plugin();


#define PLUGIN() \
    Dictionary natives; \
    void load_plugin() { \
        natives = create_plugin();

#define EXPORT(symbol, function) store_native(natives, symbol, NM_##function);


#endif // PLUGIN_PLUGIN_H
