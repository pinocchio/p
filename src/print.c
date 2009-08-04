#include <model.h>
#include <system.h>
#include <bootstrap.h>
#include <scheme/natives.h>
#include <wchar.h>
#include <stdio.h>

#define test_type(type)\
    if (isinstance(o, type)) {\
        printf(#type" at: %p\n", o.pointer);\
        return;\
    }

#define print_type(type, format)\
	if (isinstance(o, type)) {\
        printf(format, o.type->value);\
        return;\
    }

void print_object(object o) {
	print_type(smallint, "%i");
	print_type(string, "%ls");
	print_type(symbol, "%ls");
	print_type(chr, "%lc");

    if (o.pointer == scheme_true.pointer) {
        printf("true\n");
        return;
    }

    if (o.pointer == scheme_false.pointer) {
        printf("false\n");
        return;
    }

    if (o.object == woodstock->nil) {
        printf("nil\n");
        return;
    }

    test_type(constant);
    test_type(assign);
    if (isinstance(o, var)) {
        printf("var(\"%ls\")\n", o.var->name->value);
        return;
    }
    test_type(call);
    test_type(list);
    test_type(scoped);
    test_type(object);
    test_type(dictionary);
    test_type(runtime_env);
    if (isinstance(o, array)) {
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
