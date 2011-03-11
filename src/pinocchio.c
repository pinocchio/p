#include <pinocchio.h>
#include <locale.h>
#include <string.h>
#include <test.h>

void bootstrap()
{
    NEW_OBJECT_NAMED(nil,   Object);
    NEW_OBJECT_NAMED(true,  Object);
    NEW_OBJECT_NAMED(false, Object);

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
}

void thread(Array arguments)
{
    test();
}

Array get_args(int argc, const char ** argv)
{
    Array args = new_Array(argc - 1);
    int i;
    argv++;
    for (i = 1; i < argc; i++) {
        const char * arg = *argv++;
        int length = strlen(arg);
        String sarg = raw_String(length);
        assert1(mbstowcs(sarg->character, arg, length + 1) != -1, "failed to parse arguments");
        args->value[i-1] = (Object)sarg;
    }
    return args;
}

int main(int argc, const char ** argv)
{
    setlocale(LC_ALL, "");
    bootstrap();

    Array args = get_args(argc, argv);
    thread(args);

    return EXIT_SUCCESS;
}
