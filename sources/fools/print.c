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

    printf("Unknown type at: %x\n", o.pointer);
}
