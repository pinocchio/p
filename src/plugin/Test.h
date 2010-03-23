#ifndef PLUGIN_TEST_H
#define PLUGIN_TEST_H
#include <pinocchio.h>

/* ========================================================================= */

void __attribute__ ((constructor)) plugin_test_init(void);
void __attribute__ ((destructor)) plugin_test_fini(void);

extern void plugin_test_init();
extern void plugin_test_fini();

/* ========================================================================= */
#endif //PLUGIN_TEST_H
