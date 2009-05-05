#include <model.h>
#include <bootstrap.h>

#include <stdio.h>

void print_object(object o) {

    if (header(o.pointer).native_class == fools_system->number_class) {
        printf("%i\n", o.number->value);
        return;
    }

    if (header(o.pointer).native_class == fools_system->string_class) {
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

    if (header(o.pointer).native_class == fools_system->iconst_class) {
        printf("iconst\n");
        return;
    }

    if (header(o.pointer).native_class == fools_system->iassign_class) {
        printf("iassign\n");
        return;
    }

    if (header(o.pointer).native_class == fools_system->ivar_class) {
        printf("ivar\n");
        return;
    }

    if (header(o.pointer).native_class == fools_system->icall_class) {
        printf("icall\n");
        return;
    }

    if (header(o.pointer).native_class == fools_system->ilist_class) {
        printf("ilist\n");
        return;
    }

    if (header(o.pointer).native_class == fools_system->iscope_class) {
        printf("iscoped\n");
        return;
    }



    printf("Unknown type at: %p\n", o.pointer);
}
