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

NATIVE1(loadPluginFromPath_)
    Object path = NATIVE_ARG(0);
    assert1(TAG_IS_LAYOUT(GETTAG(path), Words), "Invalid path-type");    
     
    char * filePath = unicode_to_ascii(((Type_Symbol)path)->value);
    // clear the error
    dlerror();
    // resolve symbols now to see if there are any problems
    void * plugin = dlopen(filePath, RTLD_NOW);
    free(filePath);
    
    if(plugin == NULL) {
        RETURN_FROM_NATIVE(False);
        return;
    }

    // clear the error
    dlerror();
    char *error;
    void* initializer = dlsym(plugin,"init_plugin");
    if((error = dlerror()) != NULL) {
        RETURN_FROM_NATIVE(False);
    }
    // magic to make the compilers happy with the non valid conversion
    // of the void pointer returned by dlsym
    typedef void (*plugin_init_ftype)(void);
    //union { plugin_init_function_type func; void * obj; } alias;
    //alias.obj = initializer;
    //plugin_init_function_type plugin_init_func = alias.func
    plugin_init_ftype init = (plugin_init_ftype)initializer;
    (*init)();
    RETURN_FROM_NATIVE(True);
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
}

