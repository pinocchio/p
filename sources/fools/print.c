#include <model.h>
#include <bootstrap.h>

#include <stdio.h>

void print_object(object o) {

    if (pheader(o.pointer) == fools_system->number_class.pointer) {
        printf("%i\n", o.number->value);
        return;
    }

    if (pheader(o.pointer) == fools_system->string_class.pointer) {
        printf("%s\n", o.string->value);
        return;
    }

    if (o.pointer == fools_system->true.pointer) {
        printf("true\n");
        return;
    }

    if (o.pointer == fools_system->false.pointer) {
        printf("false\n");
        return;
    }

    if (o.nil == fools_system->nil) {
        printf("nil\n");
        return;
    }

    if (pheader(o.pointer) == fools_system->iconst_class.pointer) {
        printf("iconst\n");
        return;
    }

    if (pheader(o.pointer) == fools_system->iassign_class.pointer) {
        printf("iassign\n");
        return;
    }

    if (pheader(o.pointer) == fools_system->ivar_class.pointer) {
        printf("ivar\n");
        return;
    }

    if (pheader(o.pointer) == fools_system->icall_class.pointer) {
        printf("icall\n");
        return;
    }

    if (pheader(o.pointer) == fools_system->ilist_class.pointer) {
        printf("ilist\n");
        return;
    }

    if (pheader(o.pointer) == fools_system->iscope_class.pointer) {
        printf("iscoped\n");
        return;
    }



    printf("Unknown type at: %p\n", o.pointer);
}
