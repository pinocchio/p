
#include <stdlib.h>
#include <plugin/Test.h>
#include <dlfcn.h>

/* ========================================================================= */

Collection_Dictionary natives;

/* ========================================================================= */

NATIVE0(test)
    RETURN_FROM_NATIVE(new_Type_String(L"test"));
}

/* ========================================================================= */


void plugin_test_init()
{
    printf("1XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    natives = add_plugin(L"Plugin.Math");
    store_native(natives, new_Type_Symbol_cached(L"test"), NM_test);
    printf("2XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
}

void plugin_test_fini()
{
    //TODO
    printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
}
