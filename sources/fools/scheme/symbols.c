#include <system.h>

object SYMBOL_doesNotUnderstand;
object SYMBOL_bind;
object SYMBOL_execute;
object SYMBOL_super;
object SYMBOL_lookup;
object SYMBOL_class;
object SYMBOL_instance;
object SYMBOL_new;
object SYMBOL_methodDict;
object SYMBOL_layout;
object SYMBOL_name;
object SYMBOL_print;

#define define_symbol(name, value)\
    SYMBOL##_##name = (object)make_string(value);

void bootstrap_scheme_symbols() {
    define_symbol(doesNotUnderstand, "doesNotUnderstand");
    define_symbol(bind,              "bind");
    define_symbol(lookup,            "lookup");
    define_symbol(execute,           "execute");
    define_symbol(class,             "class");
    define_symbol(super,             "super");
    define_symbol(instance,          "instance");
    define_symbol(new,               "new");
    define_symbol(methodDict,        "methodDict");
    define_symbol(layout,            "layout");
    define_symbol(name,              "name");
    define_symbol(print,             "print");
}
