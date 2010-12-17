#include <pinocchio.h>
#include <locale.h>

void bootstrap()
{
    Metaclass_class = new_Bootstrapping_Class();
    set_class((Object)get_class((Object)Metaclass_class), Metaclass_class);

    Behavior_class  = new_Bootstrapping_Class();
    Class_class     = new_Bootstrapping_Class();
    Object_class    = new_Bootstrapping_Class();

    Object_class->super            = (Class)nil;
    get_class((Object)Object_class)->super = (Behavior)Class_class;

    set_super(Behavior_class,   Object_class);
    set_super(Metaclass_class,  Behavior_class);
    set_super(Class_class,      Behavior_class);
}

int main(int argc, const char ** argv)
{
    setlocale(LC_ALL, "");
    Object   object    = PALLOC(sizeof(struct Object));
    Behavior behavior  = PALLOC(sizeof(struct Behavior));
    object->header   = behavior;
    behavior->header = behavior;
    fwprintf(stdout, L"Object: %p class: %p\n", object,   object->header);
    fwprintf(stdout, L"Object: %p class: %p\n", behavior, behavior->header);
    return EXIT_SUCCESS;
}
