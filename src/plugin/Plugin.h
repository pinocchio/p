#ifndef PLUGIN_PLUGIN_H
#define PLUGIN_PLUGIN_H

#include <pinocchio.h>

void __attribute__ ((constructor)) load_plugin();
void __attribute__ ((destructor)) unload_plugin();

#endif // PLUGIN_PLUGIN_H
