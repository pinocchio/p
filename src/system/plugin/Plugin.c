#include <stdlib.h>
#include <stdio.h>
#include <system/plugin/Plugin.h>
#include <lib/lib.h>
#include <dlfcn.h>

/* ========================================================================= */

Collection_Dictionary create_plugin()
{
    return new_Collection_Dictionary();
}

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

typedef Object (*ftype)();

Type_Object load_plugin(const char * file_path)
{
    // resolve symbols now to see if there are any problems
    void * handle       = dlopen(file_path, RTLD_NOW);
    if (!handle) { return (Type_Object)Nil; }
    
    Type_Object plugin = (Type_Object)instantiate((Type_Class)Plugin_Plugin_Class);
    
    // extract the plugin name
    ftype name_handle = (ftype)dlsym(handle, "plugin_name");
    if (name_handle) {
        plugin->ivals[1]  = (*name_handle)(); 
    }
    
    Collection_Dictionary natives = (Collection_Dictionary)dlsym(handle, "natives");
    if (natives) {
        plugin->ivals[2] = (Object)(*name_handle)(); 
    } else {
        plugin->ivals[2] = (Object)create_plugin();
    }

    // plugin-ivals[2]  = (Object)plugin
    return plugin;
}

NATIVE1(Plugin_load_)
    Object w_path = NATIVE_ARG(0);
    assert1(TAG_IS_LAYOUT(GETTAG(w_path), Words), "Invalid path-type");    
     
    char * path = unicode_to_ascii(((Type_Symbol)w_path)->value);
    Type_Object plugin = load_plugin(path);
    plugin->ivals[0]    = w_path;
    RETURN_FROM_NATIVE(plugin);
    free(path);
}

NATIVE0(Plugin_unload)
    Object w_path = NATIVE_ARG(0);
    assert1(TAG_IS_LAYOUT(GETTAG(w_path), Words), "Invalid path-type");    
    //unload_plugin();     
}

/* ========================================================================= */

void init_plugin()
{
    Collection_Dictionary natives = add_plugin(L"Plugin.Plugin");
    store_native(natives, SMB_load_,  NM_Plugin_load_);
    store_native(natives, SMB_unload, NM_Plugin_unload);
    ((Type_Class)Plugin_Plugin_Class)->cvars[0] = _NATIVES_;
}

