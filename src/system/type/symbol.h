#ifndef SYSTEM_SYMBOL_H
#define SYSTEM_SYMBOL_H

extern wchar_t* wcsdup(const wchar_t* input);

extern void isymbol_stub_dispatch();
extern void isymbol_class_dispatch();
extern void isymbol_class_stub_dispatch();

extern symbol_object make_symbol(const wchar_t* value);

extern void inline symbol_at();
extern void inline symbol_hash();
extern void inline symbol_size();
extern int inline symbol_equals(symbol_object symbol1,
                                symbol_object symbol2);

struct symbol {
    number_object       size;
    number_object       hash;
    wchar_t*            value;
};


#endif // SYSTEM_SYMBOL_H
