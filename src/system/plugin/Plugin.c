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

BOOL load_plugin_from_path(const char * file_path)
{
    // clear possible previous errors
    dlerror();
    // resolve symbols now to see if there are any problems
    void * plugin = dlopen(file_path, RTLD_NOW);
    
    if(plugin == NULL) {
        return FALSE;
    }
    
    // clear the error
    dlerror();
    char * error;
    void * initializer = dlsym(plugin,"init_plugin");
    if((error = dlerror()) != NULL) {
        return FALSE;
    }
    
    // call the initializer
    plugin_init_ftype init = (plugin_init_ftype)initializer;
    init();
    return TRUE;
}

NATIVE1(loadPluginFromPath_)
    Object path = NATIVE_ARG(0);
    assert1(TAG_IS_LAYOUT(GETTAG(path), Words), "Invalid path-type");    
     
    char * file_path = unicode_to_ascii(((Type_Symbol)path)->value);
    if (load_plugin_from_path(file_path)) {
        RETURN_FROM_NATIVE(True);
    } else {
        RETURN_FROM_NATIVE(False);
    }
    free(file_path);
}

NATIVE1(unloadPlugin_)
    //TODO typecheck
    
}

/* ========================================================================= */

void init_plugin()
{
    Collection_Dictionary natives = add_plugin(L"Plugin.Plugin");
    store_native(natives, SMB_loadPluginFromPath_, NM_loadPluginFromPath_);
    store_native(natives, SMB_unloadPlugin_,       NM_unloadPlugin_);
    if (load_plugin_from_path("plugin/Test.so")) {
        exit(0);
    } else {
        printf("%s\n", dlerror());
        exit(1);
    }
}

