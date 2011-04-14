#include <pinocchio.h>
#include <locale.h>
#include <string.h>

void pinocchio_bootstrap()
{
    INSTANTIATE(nil,   Object, NULL);
    INSTANTIATE(true,  Object, NULL);
    INSTANTIATE(false, Object, NULL);

    Metaclass_class         = raw_Bootstrapping_Class();
    set_class((Object)get_class((Object)Metaclass_class), Metaclass_class);

    MethodDictionary_class  = raw_Bootstrapping_Class();
    BucketArray_class       = raw_Bootstrapping_Class();
    Bucket_class            = raw_Bootstrapping_Class();

    SmallInteger_class      = raw_Bootstrapping_Class();
    init_integercache();

    init_class(Metaclass_class);
    init_class(SmallInteger_class);
    init_class(MethodDictionary_class);
    init_class(BucketArray_class);
    init_class(Bucket_class);

    Behavior_class          = new_Bootstrapping_Class();
    Class_class             = new_Bootstrapping_Class();
    Object_class            = new_Bootstrapping_Class();

    Symbol_class            = new_Bootstrapping_Class();
    SymbolTable_class       = new_Bootstrapping_Class();

    init_symboltable();

    Array_class             = new_Bootstrapping_Class();
    INSTANTIATE_ARRAY(empty_array, Array, Object, 0);

    String_class            = new_Bootstrapping_Class();
    INSTANTIATE_ARRAY(empty_string, String, wchar_t, 0);

    ObjectLayout_class      = new_Bootstrapping_Class();
    ArrayLayout_class       = new_Bootstrapping_Class();
    CharacterLayout_class   = new_Bootstrapping_Class();
    WordsLayout_class       = new_Bootstrapping_Class();
    IntegerLayout_class     = new_Bootstrapping_Class();
    FloatLayout_class       = new_Bootstrapping_Class();
    LongLayout_class        = new_Bootstrapping_Class();
    BytesLayout_class       = new_Bootstrapping_Class();
    RawLayout_class         = new_Bootstrapping_Class();

    init_layout();
    
    method_context( NULL, NULL, NULL );

    init_natives();
}
