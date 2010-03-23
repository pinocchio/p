#include <stdlib.h>
#include <stdio.h>
#include <system/plugin/Plugin.h>
#include <dlfcn.h>

/* ========================================================================= */

Collection_Dictionary add_plugin(const wchar_t * name)
{
    Collection_Dictionary natives = new_Collection_Dictionary();
    Collection_Dictionary_quick_store(_NATIVES_,
                                      (Object)new_Type_Symbol_cached(name),
                                      (Object)natives);
    return natives;
}

void store_native(Collection_Dictionary dict, Type_Symbol selector, native code)
{
    Collection_Dictionary_quick_store(dict, (Object)selector, (Object)code);
}

/* ========================================================================= */

typedef void (*plugin_init_ftype)();

void * load_plugin_from_path(const char * file_path)
{
    // clear possible previous errors
    dlerror();
    // resolve symbols now to see if there are any problems
    void * plugin = dlopen(file_path, RTLD_NOW);
    
    return plugin;
}

NATIVE1(Plugin_loadFromPath_)
    Object w_path = NATIVE_ARG(0);
    assert1(TAG_IS_LAYOUT(GETTAG(w_path), Words), "Invalid path-type");    
     
    char * path = unicode_to_ascii(((Type_Symbol)w_path)->value);
    if (load_plugin_from_path(path)) {
        RETURN_FROM_NATIVE(True);
    } else {
        RETURN_FROM_NATIVE(False);
    }
    free(path);
}

NATIVE0(Plugin_unload)
    Object w_path = NATIVE_ARG(0);
    assert1(TAG_IS_LAYOUT(GETTAG(w_path), Words), "Invalid path-type");    
    //unload_plugin();     
    free(path);
}

/* ========================================================================= */

void init_plugin()
{
    Collection_Dictionary natives = add_plugin(L"Plugin.Plugin");
    store_native(natives, SMB_loadFromPath_, NM_Plugin_loadPluginFromPath_);
    store_native(natives, SMB_unload_,       NM_Plugin_unload_);
    Plugin_Plugin_Class->cvars[0] = _NATIVES_;
}

