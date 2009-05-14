#include <system.h>

object SYMBOL_doesNotUnderstand;
object SYMBOL_bind;
object SYMBOL_execute;
object SYMBOL_super;
object SYMBOL_lookup;
object SYMBOL_class;

#define define_symbol(name, value)\
    SYMBOL##_##name = (object)make_string(value);

void bootstrap_scheme_symbols() {
    define_symbol(doesNotUnderstand, "doesNotUnderstand");
    define_symbol(bind,              "bind");
    define_symbol(lookup,            "lookup");
    define_symbol(execute,           "execute");
    define_symbol(class,             "class");
    define_symbol(super,             "super");
}
