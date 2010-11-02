// Auto Generated. Do not change!.
#include <plugin/Plugin.h>
#include <wchar.h>
#include <stdio.h>

#line 3 "AtomicBoolean >> testAndSet"
NATIVE(AtomicBoolean_testAndSet)
    ASSERT_ARG_SIZE(0);

    if (SELF->ivals[0] == true) {
        RETURN_FROM_NATIVE(true);
    } else {
        SELF->ivals[0] = true;
        RETURN_FROM_NATIVE(false);
    }
 
}

// ============================================================================

PLUGIN()
    EXPORT(L"testAndSet", AtomicBoolean_testAndSet);
}

void unload_plugin() {}