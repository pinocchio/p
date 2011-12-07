#include <pinocchio.h>

/* ======================================================================= */

void print_symbol(tSymbol symbol) {
    tObject object = (tObject)symbol;
    size_t size = (long)object->value[-3];
    char buffer[size+1];
    memcpy(buffer, (char*)object, size);
    buffer[size] = 0;
    printf("%s", buffer);
}

void print_class_name(tSTBehavior cls) {
    if (BEHAVIOR_OF(cls) == &Metaclass_behavior) {
        print_symbol(((tMetaclass)(cls->class))->instance->name);
        printf(" class");
    } else {
        print_symbol(cls->class->name);
    }
}

void print_object(tObject object) {
    
    if (IS_INT(object)) {
        printf(" %ld\n", DEC_INT(object));
        return;
    }

    printf("printing object: %p\n", object);
    if (VARIABLE(object) || BYTES(object)) {
        printf("size: %lu\n", (long)object->value[-3]);
    }
    printf(" header: (base: %i var: %i bytes: %i mutable: %i gcmark: %i hash: %lu)\n", 
                      BASE(object), VARIABLE(object),
                      BYTES(object), MUTABLE(object),
                      GCMARK(object), HASH(object));

    if (&Symbol_behavior == BEHAVIOR_OF(object)) {
        printf(" #'");
        print_symbol((tSymbol)object);
        printf("' (%p)\n", object);
        return;
    }

    printf(" is a: ");
    print_class_name(BEHAVIOR_OF(object));
    printf("\n");
}
