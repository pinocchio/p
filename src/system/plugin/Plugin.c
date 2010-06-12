#include <stdlib.h>
#include <stdio.h>
#include <system/plugin/Plugin.h>
#include <lib/lib.h>
#include <dlfcn.h>

/* ========================================================================= */

Dictionary create_plugin()
{
    return new_Dictionary();
}

Dictionary add_plugin(const wchar_t * name)
{
    Optr symbol = (Optr)new_Symbol_cached(name);
    Dictionary plugin = (Dictionary)Dictionary_quick_lookup(_NATIVES_, symbol);
    if (plugin) { return plugin; }

    plugin = new_Dictionary();
    Dictionary_quick_store(_NATIVES_,
                           (Optr)new_Symbol_cached(name),
                           (Optr)plugin);
    return plugin;
}

void store_native(Dictionary dict, Symbol selector, native code)
{
    Dictionary_quick_store(dict, (Optr)selector, (Optr)code);
}

/* ========================================================================= */

typedef Optr (*ftype)();

static Object load_plugin(Optr class, const char * file_path)
{
    void * handle = dlopen(file_path, RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "Loading plugin failed: '%s'\n", dlerror());
        return (Object)nil;
    }
    
    Object plugin = (Object)instantiate((Class)class);
    // TODO
    //plugin->ivals[3] = handle
    
    Optr * natives = (Optr *)dlsym(handle, "natives");
    if (natives) {
        plugin->ivals[2] = *natives; 
    } else {
        plugin->ivals[2] = (Optr)create_plugin();
    }

    return plugin;
}

NATIVE1(Plugin_load_)
    Optr w_path = NATIVE_ARG(0);
    assert1(TAG_IS_LAYOUT(GETTAG(w_path), Words), "Invalid path-type");    
     
    char * path = unicode_to_ascii(((Symbol)w_path)->value);
    Object plugin = load_plugin(self, path);
    RETURN_FROM_NATIVE(plugin);
}

NATIVE0(Plugin_unload)
    Optr w_path = NATIVE_ARG(0);
    assert1(TAG_IS_LAYOUT(GETTAG(w_path), Words), "Invalid path-type");    
    //unload_plugin();     
    ZAP_NATIVE_INPUT();
}

/* ========================================================================= */

void init_plugin()
{
    Dictionary natives = add_plugin(L"Plugin.Plugin");
    store_native(natives, SMB_load_,  NM_Plugin_load_);
    store_native(natives, SMB_unload, NM_Plugin_unload);
    ((Class)Plugin_Plugin_Class)->cvars[0] = (Optr)_NATIVES_;
}

