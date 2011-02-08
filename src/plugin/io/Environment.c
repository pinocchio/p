#include <plugin/Plugin.h>
#include <unistd.h>

extern const char ** environ;

NATIVE0(Environment_environ)
    const char ** ep = environ;
    int size = 0;
    while (*ep++) { size++; }
    RETURN_FROM_NATIVE(get_args(size, environ));
}

// ============================================================================

PLUGIN()
    EXPORT(L"environ", Environment_environ);
}

void unload_plugin() {
}
