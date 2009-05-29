#ifndef SCHEME_SYMBOLS_H
#define SCHEME_SYMBOLS_H

extern object SYMBOL_doesNotUnderstand;
extern object SYMBOL_bind;
extern object SYMBOL_execute;
extern object SYMBOL_super;
extern object SYMBOL_lookup;
extern object SYMBOL_class;
extern object SYMBOL_instance;
extern object SYMBOL_new;
extern object SYMBOL_methodDict;
extern object SYMBOL_layout;
extern object SYMBOL_name;
extern object SYMBOL_print;

extern void bootstrap_scheme_symbols();

#endif
