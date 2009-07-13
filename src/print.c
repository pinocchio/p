#include <model.h>
#include <system.h>
#include <bootstrap.h>
#include <scheme/natives.h>
#include <wchar.h>
#include <stdio.h>

#define test_type(type)\
    if (pheader(o.pointer) == woodstock->type##_##t_class.pointer) {\
        printf(#type" at: %p\n", o.pointer);\
        return;\
    }


void print_object(object o) {

    if (pheader(o.pointer) == woodstock->number_class.pointer) {
        printf("%i", o.number->value);
        return;
    }

    if (pheader(pheader(o.pointer)) ==
            woodstock->string_t_stub_class.pointer ||
            pheader(pheader(o.pointer)) ==
            woodstock->string_t_class.pointer) {
        printf("%ls", o.string->value);
        return;
    }

    if (pheader(pheader(o.pointer)) ==
            woodstock->chr_t_stub_class.pointer ||
            pheader(pheader(o.pointer)) ==
            woodstock->chr_t_class.pointer) {
        printf("%lc", o.chr->value);
        return;
    }

    if (o.pointer == scheme_true.pointer) {
        printf("true\n");
        return;
    }

    if (o.pointer == scheme_false.pointer) {
        printf("false\n");
        return;
    }

    if (o.nil == woodstock->nil) {
        printf("nil\n");
        return;
    }

    test_type(ast_const);
    test_type(ast_assign);
    if (pheader(o.pointer) == woodstock->ivar_class.pointer) {
        printf("ivar(\"%ls\")\n", o.ivar->name->value);
        return;
    }
    test_type(ast_call);
    test_type(ast_list);
    test_type(ast_scoped);
    test_type(ifixed);
    test_type(dict);
    test_type(runtime_env);
    if (pheader(o.pointer) == woodstock->array_class.pointer) {
        printf("array(%i) [\n", array_size(o.array));
        int i;
        for (i = 0; i < array_size(o.array); i++) {
            printf("    ");
            print_object(raw_array_at(o.array, i));
        }
        printf("]\n");
        return;
    }

    printf("Unknown type at: %p\n", o.pointer);
}
