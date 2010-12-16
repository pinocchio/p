#include <pinocchio.h>
#include <locale.h>

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
