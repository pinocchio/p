#include <plugin.h>

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

