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
    Object symbol = (Object)new_Symbol_cached(name);
    Dictionary plugin = 
        (Dictionary)Dictionary_quick_lookup(_NATIVES_,
                                                                  symbol);
    if (plugin) { return plugin; }

    plugin = new_Dictionary();
    Dictionary_quick_store(_NATIVES_,
                                      (Object)new_Symbol_cached(name),
                                      (Object)plugin);
    return plugin;
}

void store_native(Dictionary dict, Symbol selector, native code)
{
    Dictionary_quick_store(dict, (Object)selector, (Object)code);
}

/* ========================================================================= */

typedef Object (*ftype)();

static Type_Object load_plugin(Object class, const char * file_path)
{
    void * handle       = dlopen(file_path, RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "Loading plugin failed: '%s'\n", dlerror());
        return (Type_Object)Nil;
    }
    
    Type_Object plugin = (Type_Object)instantiate((Type_Class)class);
    // TODO
    //plugin->ivals[3] = handle
    
    Object * natives = (Object *)dlsym(handle, "natives");
    if (natives) {
        plugin->ivals[2] = *natives; 
    } else {
        plugin->ivals[2] = (Object)create_plugin();
    }

    return plugin;
}

NATIVE1(Plugin_load_)
    Object w_path = NATIVE_ARG(0);
    assert1(TAG_IS_LAYOUT(GETTAG(w_path), Words), "Invalid path-type");    
     
    char * path = unicode_to_ascii(((Symbol)w_path)->value);
    Type_Object plugin = load_plugin(self, path);
    RETURN_FROM_NATIVE(plugin);
}

NATIVE0(Plugin_unload)
    Object w_path = NATIVE_ARG(0);
    assert1(TAG_IS_LAYOUT(GETTAG(w_path), Words), "Invalid path-type");    
    //unload_plugin();     
}

/* ========================================================================= */

void init_plugin()
{
    Dictionary natives = add_plugin(L"Plugin.Plugin");
    store_native(natives, SMB_load_,  NM_Plugin_load_);
    store_native(natives, SMB_unload, NM_Plugin_unload);
    ((Type_Class)Plugin_Plugin_Class)->cvars[0] = (Object)_NATIVES_;
}

